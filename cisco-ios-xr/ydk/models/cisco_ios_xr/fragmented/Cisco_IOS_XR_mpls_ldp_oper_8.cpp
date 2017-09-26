
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_8.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{

    yang_name = "sessions"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_eligible.yfilter)
	|| ydk::is_set(nsr_state_app_wait.yfilter)
	|| ydk::is_set(nsr_state_none.yfilter)
	|| ydk::is_set(nsr_state_operational.yfilter)
	|| ydk::is_set(nsr_state_prepare.yfilter)
	|| ydk::is_set(nsr_state_ready.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase1.yfilter)
	|| ydk::is_set(nsr_state_tcp_phase2.yfilter)
	|| ydk::is_set(nsr_state_wait.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.yfilter)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.yfilter)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.yfilter)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.yfilter)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.yfilter)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.yfilter)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.yfilter)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.yfilter)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
        nsr_eligible.value_namespace = name_space;
        nsr_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
        nsr_state_app_wait.value_namespace = name_space;
        nsr_state_app_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
        nsr_state_none.value_namespace = name_space;
        nsr_state_none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
        nsr_state_operational.value_namespace = name_space;
        nsr_state_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
        nsr_state_prepare.value_namespace = name_space;
        nsr_state_prepare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
        nsr_state_ready.value_namespace = name_space;
        nsr_state_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
        nsr_state_tcp_phase1.value_namespace = name_space;
        nsr_state_tcp_phase1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
        nsr_state_tcp_phase2.value_namespace = name_space;
        nsr_state_tcp_phase2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
        nsr_state_wait.value_namespace = name_space;
        nsr_state_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible.yfilter = yfilter;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait.yfilter = yfilter;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none.yfilter = yfilter;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational.yfilter = yfilter;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare.yfilter = yfilter;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1.yfilter = yfilter;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2.yfilter = yfilter;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-eligible" || name == "nsr-state-app-wait" || name == "nsr-state-none" || name == "nsr-state-operational" || name == "nsr-state-prepare" || name == "nsr-state-ready" || name == "nsr-state-tcp-phase1" || name == "nsr-state-tcp-phase2" || name == "nsr-state-wait" || name == "total")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ha-summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::NsrPending()
    :
    ha_neighbors(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>())
{
    ha_neighbors->parent = this;

    yang_name = "nsr-pending"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::~NsrPending()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::has_data() const
{
    return (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::has_operation() const
{
    return is_set(yfilter)
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors == nullptr)
        {
            ha_neighbors = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>();
        }
        return ha_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ha_neighbors != nullptr)
    {
        children["ha-neighbors"] = ha_neighbors;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbors")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbors()
{

    yang_name = "ha-neighbors"; yang_parent_name = "nsr-pending"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ha_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ha-neighbor")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    steady_state_sync_info->parent = this;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lbl_spc_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(lsr_id_xr.yfilter)
	|| ydk::is_set(nsr_sync_state.yfilter)
	|| ydk::is_set(num_msg.yfilter)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.yfilter)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.yfilter)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.yfilter)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.yfilter)) leaf_name_data.push_back(num_msg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info == nullptr)
        {
            init_sync_info = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>();
        }
        return init_sync_info;
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info == nullptr)
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
        }
        return steady_state_sync_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(init_sync_info != nullptr)
    {
        children["init-sync-info"] = init_sync_info;
    }

    if(steady_state_sync_info != nullptr)
    {
        children["steady-state-sync-info"] = steady_state_sync_info;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
        lbl_spc_id.value_namespace = name_space;
        lbl_spc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
        lsr_id_xr.value_namespace = name_space;
        lsr_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
        nsr_sync_state.value_namespace = name_space;
        nsr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
        num_msg.value_namespace = name_space;
        num_msg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr.yfilter = yfilter;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state.yfilter = yfilter;
    }
    if(value_path == "num-msg")
    {
        num_msg.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-info" || name == "steady-state-sync-info" || name == "label-space-id" || name == "lbl-spc-id" || name == "lsr-id" || name == "lsr-id-xr" || name == "nsr-sync-state" || name == "num-msg")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{

    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_sync_end.yfilter)
	|| ydk::is_set(init_sync_start.yfilter)
	|| ydk::is_set(num_addr.yfilter)
	|| ydk::is_set(num_app_bytes.yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_duplicate_addr.yfilter)
	|| ydk::is_set(num_lbl.yfilter)
	|| ydk::is_set(num_rx_bytes.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.yfilter)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.yfilter)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.yfilter)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.yfilter)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.yfilter)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.yfilter)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.yfilter)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
        init_sync_end.value_namespace = name_space;
        init_sync_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
        init_sync_start.value_namespace = name_space;
        init_sync_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
        num_addr.value_namespace = name_space;
        num_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
        num_app_bytes.value_namespace = name_space;
        num_app_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
        num_duplicate_addr.value_namespace = name_space;
        num_duplicate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
        num_lbl.value_namespace = name_space;
        num_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
        num_rx_bytes.value_namespace = name_space;
        num_rx_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end.yfilter = yfilter;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start.yfilter = yfilter;
    }
    if(value_path == "num-addr")
    {
        num_addr.yfilter = yfilter;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes.yfilter = yfilter;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr.yfilter = yfilter;
    }
    if(value_path == "num-lbl")
    {
        num_lbl.yfilter = yfilter;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-sync-end" || name == "init-sync-start" || name == "num-addr" || name == "num-app-bytes" || name == "num-cap-rcvd" || name == "num-cap-sent" || name == "num-duplicate-addr" || name == "num-lbl" || name == "num-rx-bytes")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{

    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_cap_rcvd.yfilter)
	|| ydk::is_set(num_cap_sent.yfilter)
	|| ydk::is_set(num_stdby_adj_join.yfilter)
	|| ydk::is_set(num_stdby_adj_leave.yfilter)
	|| ydk::is_set(rem_lbl_rq.yfilter)
	|| ydk::is_set(rem_lbl_wd.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.yfilter)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.yfilter)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.yfilter)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.yfilter)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.yfilter)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.yfilter)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
        num_cap_rcvd.value_namespace = name_space;
        num_cap_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
        num_cap_sent.value_namespace = name_space;
        num_cap_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
        num_stdby_adj_join.value_namespace = name_space;
        num_stdby_adj_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
        num_stdby_adj_leave.value_namespace = name_space;
        num_stdby_adj_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
        rem_lbl_rq.value_namespace = name_space;
        rem_lbl_rq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
        rem_lbl_wd.value_namespace = name_space;
        rem_lbl_wd.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join.yfilter = yfilter;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq.yfilter = yfilter;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-cap-rcvd" || name == "num-cap-sent" || name == "num-stdby-adj-join" || name == "num-stdby-adj-leave" || name == "rem-lbl-rq" || name == "rem-lbl-wd")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::Parameters()
    :
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"},
    global_discovery_quick_start_disabled{YType::boolean, "global-discovery-quick-start-disabled"},
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    hello_hold_time{YType::uint32, "hello-hold-time"},
    hello_interval{YType::uint32, "hello-interval"},
    housekeeping_timer_interval{YType::uint32, "housekeeping-timer-interval"},
    igp_sync_delay_time_for_interface{YType::uint32, "igp-sync-delay-time-for-interface"},
    igp_sync_delay_time_on_restart{YType::uint32, "igp-sync-delay-time-on-restart"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    ldp_out_of_mem_state{YType::uint32, "ldp-out-of-mem-state"},
    ldp_recovery_timeout{YType::uint32, "ldp-recovery-timeout"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_synced{YType::boolean, "nsr-synced"},
    protocol_version{YType::uint32, "protocol-version"},
    role_is_active{YType::boolean, "role-is-active"},
    router_id{YType::str, "router-id"},
    session_hold_time{YType::uint32, "session-hold-time"},
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"},
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"}
    	,
    graceful_restart_information(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation>())
{
    graceful_restart_information->parent = this;

    yang_name = "parameters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::~Parameters()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::has_data() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_data())
            return true;
    }
    return af_binding_withdraw_delay.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| global_discovery_quick_start_disabled.is_set
	|| global_md5_password_enabled.is_set
	|| hello_hold_time.is_set
	|| hello_interval.is_set
	|| housekeeping_timer_interval.is_set
	|| igp_sync_delay_time_for_interface.is_set
	|| igp_sync_delay_time_on_restart.is_set
	|| keepalive_interval.is_set
	|| ldp_out_of_mem_state.is_set
	|| ldp_recovery_timeout.is_set
	|| le_no_route_timeout.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| nsr_enabled.is_set
	|| nsr_synced.is_set
	|| protocol_version.is_set
	|| role_is_active.is_set
	|| router_id.is_set
	|| session_hold_time.is_set
	|| targeted_hello_hold_time.is_set
	|| targeted_hello_interval.is_set
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::has_operation() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_binding_withdraw_delay.yfilter)
	|| ydk::is_set(discovery_quick_start_disabled_on_interfaces.yfilter)
	|| ydk::is_set(global_discovery_quick_start_disabled.yfilter)
	|| ydk::is_set(global_md5_password_enabled.yfilter)
	|| ydk::is_set(hello_hold_time.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(housekeeping_timer_interval.yfilter)
	|| ydk::is_set(igp_sync_delay_time_for_interface.yfilter)
	|| ydk::is_set(igp_sync_delay_time_on_restart.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(ldp_out_of_mem_state.yfilter)
	|| ydk::is_set(ldp_recovery_timeout.yfilter)
	|| ydk::is_set(le_no_route_timeout.yfilter)
	|| ydk::is_set(max_intf_attached.yfilter)
	|| ydk::is_set(max_intf_te.yfilter)
	|| ydk::is_set(max_peer.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_synced.yfilter)
	|| ydk::is_set(protocol_version.yfilter)
	|| ydk::is_set(role_is_active.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(session_hold_time.yfilter)
	|| ydk::is_set(targeted_hello_hold_time.yfilter)
	|| ydk::is_set(targeted_hello_interval.yfilter)
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.yfilter)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.yfilter)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());
    if (global_discovery_quick_start_disabled.is_set || is_set(global_discovery_quick_start_disabled.yfilter)) leaf_name_data.push_back(global_discovery_quick_start_disabled.get_name_leafdata());
    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.yfilter)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (hello_hold_time.is_set || is_set(hello_hold_time.yfilter)) leaf_name_data.push_back(hello_hold_time.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (housekeeping_timer_interval.is_set || is_set(housekeeping_timer_interval.yfilter)) leaf_name_data.push_back(housekeeping_timer_interval.get_name_leafdata());
    if (igp_sync_delay_time_for_interface.is_set || is_set(igp_sync_delay_time_for_interface.yfilter)) leaf_name_data.push_back(igp_sync_delay_time_for_interface.get_name_leafdata());
    if (igp_sync_delay_time_on_restart.is_set || is_set(igp_sync_delay_time_on_restart.yfilter)) leaf_name_data.push_back(igp_sync_delay_time_on_restart.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (ldp_out_of_mem_state.is_set || is_set(ldp_out_of_mem_state.yfilter)) leaf_name_data.push_back(ldp_out_of_mem_state.get_name_leafdata());
    if (ldp_recovery_timeout.is_set || is_set(ldp_recovery_timeout.yfilter)) leaf_name_data.push_back(ldp_recovery_timeout.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.yfilter)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.yfilter)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.yfilter)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.yfilter)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.yfilter)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.yfilter)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (role_is_active.is_set || is_set(role_is_active.yfilter)) leaf_name_data.push_back(role_is_active.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.yfilter)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());
    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.yfilter)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());
    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.yfilter)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-parameter")
    {
        for(auto const & c : address_family_parameter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter>();
        c->parent = this;
        address_family_parameter.push_back(c);
        return c;
    }

    if(child_yang_name == "graceful-restart-information")
    {
        if(graceful_restart_information == nullptr)
        {
            graceful_restart_information = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation>();
        }
        return graceful_restart_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_family_parameter)
    {
        children[c->get_segment_path()] = c;
    }

    if(graceful_restart_information != nullptr)
    {
        children["graceful-restart-information"] = graceful_restart_information;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
        af_binding_withdraw_delay.value_namespace = name_space;
        af_binding_withdraw_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
        discovery_quick_start_disabled_on_interfaces.value_namespace = name_space;
        discovery_quick_start_disabled_on_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled = value;
        global_discovery_quick_start_disabled.value_namespace = name_space;
        global_discovery_quick_start_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
        global_md5_password_enabled.value_namespace = name_space;
        global_md5_password_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time = value;
        hello_hold_time.value_namespace = name_space;
        hello_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval = value;
        housekeeping_timer_interval.value_namespace = name_space;
        housekeeping_timer_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface = value;
        igp_sync_delay_time_for_interface.value_namespace = name_space;
        igp_sync_delay_time_for_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart = value;
        igp_sync_delay_time_on_restart.value_namespace = name_space;
        igp_sync_delay_time_on_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state = value;
        ldp_out_of_mem_state.value_namespace = name_space;
        ldp_out_of_mem_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout = value;
        ldp_recovery_timeout.value_namespace = name_space;
        ldp_recovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
        le_no_route_timeout.value_namespace = name_space;
        le_no_route_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached = value;
        max_intf_attached.value_namespace = name_space;
        max_intf_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te = value;
        max_intf_te.value_namespace = name_space;
        max_intf_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peer")
    {
        max_peer = value;
        max_peer.value_namespace = name_space;
        max_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
        nsr_synced.value_namespace = name_space;
        nsr_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
        protocol_version.value_namespace = name_space;
        protocol_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-is-active")
    {
        role_is_active = value;
        role_is_active.value_namespace = name_space;
        role_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
        session_hold_time.value_namespace = name_space;
        session_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
        targeted_hello_hold_time.value_namespace = name_space;
        targeted_hello_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
        targeted_hello_interval.value_namespace = name_space;
        targeted_hello_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay.yfilter = yfilter;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces.yfilter = yfilter;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled.yfilter = yfilter;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled.yfilter = yfilter;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface.yfilter = yfilter;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state.yfilter = yfilter;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout.yfilter = yfilter;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout.yfilter = yfilter;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached.yfilter = yfilter;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te.yfilter = yfilter;
    }
    if(value_path == "max-peer")
    {
        max_peer.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced.yfilter = yfilter;
    }
    if(value_path == "protocol-version")
    {
        protocol_version.yfilter = yfilter;
    }
    if(value_path == "role-is-active")
    {
        role_is_active.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-parameter" || name == "graceful-restart-information" || name == "af-binding-withdraw-delay" || name == "discovery-quick-start-disabled-on-interfaces" || name == "global-discovery-quick-start-disabled" || name == "global-md5-password-enabled" || name == "hello-hold-time" || name == "hello-interval" || name == "housekeeping-timer-interval" || name == "igp-sync-delay-time-for-interface" || name == "igp-sync-delay-time-on-restart" || name == "keepalive-interval" || name == "ldp-out-of-mem-state" || name == "ldp-recovery-timeout" || name == "le-no-route-timeout" || name == "max-intf-attached" || name == "max-intf-te" || name == "max-peer" || name == "nsr-enabled" || name == "nsr-synced" || name == "protocol-version" || name == "role-is-active" || name == "router-id" || name == "session-hold-time" || name == "targeted-hello-hold-time" || name == "targeted-hello-interval")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    label_imp_null_override_acl{YType::str, "label-imp-null-override-acl"},
    null_label{YType::str, "null-label"},
    targeted_hello_acl{YType::str, "targeted-hello-acl"}
    	,
    discovery_transport_address(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>())
{
    discovery_transport_address->parent = this;

    yang_name = "address-family-parameter"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::~AddressFamilyParameter()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_data() const
{
    return address_family.is_set
	|| is_accepting_targeted_hellos.is_set
	|| label_imp_null_override_acl.is_set
	|| null_label.is_set
	|| targeted_hello_acl.is_set
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(is_accepting_targeted_hellos.yfilter)
	|| ydk::is_set(label_imp_null_override_acl.yfilter)
	|| ydk::is_set(null_label.yfilter)
	|| ydk::is_set(targeted_hello_acl.yfilter)
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.yfilter)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (label_imp_null_override_acl.is_set || is_set(label_imp_null_override_acl.yfilter)) leaf_name_data.push_back(label_imp_null_override_acl.get_name_leafdata());
    if (null_label.is_set || is_set(null_label.yfilter)) leaf_name_data.push_back(null_label.get_name_leafdata());
    if (targeted_hello_acl.is_set || is_set(targeted_hello_acl.yfilter)) leaf_name_data.push_back(targeted_hello_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-transport-address")
    {
        if(discovery_transport_address == nullptr)
        {
            discovery_transport_address = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>();
        }
        return discovery_transport_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery_transport_address != nullptr)
    {
        children["discovery-transport-address"] = discovery_transport_address;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
        is_accepting_targeted_hellos.value_namespace = name_space;
        is_accepting_targeted_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl = value;
        label_imp_null_override_acl.value_namespace = name_space;
        label_imp_null_override_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-label")
    {
        null_label = value;
        null_label.value_namespace = name_space;
        null_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl = value;
        targeted_hello_acl.value_namespace = name_space;
        targeted_hello_acl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos.yfilter = yfilter;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl.yfilter = yfilter;
    }
    if(value_path == "null-label")
    {
        null_label.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-transport-address" || name == "address-family" || name == "is-accepting-targeted-hellos" || name == "label-imp-null-override-acl" || name == "null-label" || name == "targeted-hello-acl")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::DiscoveryTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "discovery-transport-address"; yang_parent_name = "address-family-parameter"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::~DiscoveryTransportAddress()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-transport-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::GracefulRestartInformation()
    :
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"}
{

    yang_name = "graceful-restart-information"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::~GracefulRestartInformation()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_data() const
{
    return graceful_restart_forwarding_state_hold_time.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| is_graceful_restart_configured.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(graceful_restart_forwarding_state_hold_time.yfilter)
	|| ydk::is_set(graceful_restart_reconnect_timeout.yfilter)
	|| ydk::is_set(is_graceful_restart_configured.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.yfilter)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.yfilter)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.yfilter)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
        graceful_restart_forwarding_state_hold_time.value_namespace = name_space;
        graceful_restart_forwarding_state_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
        graceful_restart_reconnect_timeout.value_namespace = name_space;
        graceful_restart_reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
        is_graceful_restart_configured.value_namespace = name_space;
        is_graceful_restart_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart-forwarding-state-hold-time" || name == "graceful-restart-reconnect-timeout" || name == "is-graceful-restart-configured")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::Statistic()
    :
    iccp_enabled{YType::boolean, "iccp-enabled"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
    	,
    message_in(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn>())
	,message_out(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut>())
{
    message_in->parent = this;
    message_out->parent = this;

    yang_name = "statistic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::~Statistic()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::has_data() const
{
    return iccp_enabled.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| (message_in !=  nullptr && message_in->has_data())
	|| (message_out !=  nullptr && message_out->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_enabled.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| (message_in !=  nullptr && message_in->has_operation())
	|| (message_out !=  nullptr && message_out->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_enabled.is_set || is_set(iccp_enabled.yfilter)) leaf_name_data.push_back(iccp_enabled.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-in")
    {
        if(message_in == nullptr)
        {
            message_in = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn>();
        }
        return message_in;
    }

    if(child_yang_name == "message-out")
    {
        if(message_out == nullptr)
        {
            message_out = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut>();
        }
        return message_out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_in != nullptr)
    {
        children["message-in"] = message_in;
    }

    if(message_out != nullptr)
    {
        children["message-out"] = message_out;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-enabled")
    {
        iccp_enabled = value;
        iccp_enabled.value_namespace = name_space;
        iccp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-enabled")
    {
        iccp_enabled.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-in" || name == "message-out" || name == "iccp-enabled" || name == "label-space-id" || name == "lsr-id")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::MessageIn()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{

    yang_name = "message-in"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::~MessageIn()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
        address_withdraw_count.value_namespace = name_space;
        address_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
        iccp_rg_conn_count.value_namespace = name_space;
        iccp_rg_conn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
        iccp_rg_disconn_count.value_namespace = name_space;
        iccp_rg_disconn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
        iccp_rg_notif_count.value_namespace = name_space;
        iccp_rg_notif_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
        label_request_count.value_namespace = name_space;
        label_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count" || name == "address-withdraw-count" || name == "iccp-rg-app-data-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "init-count" || name == "keep-alive-count" || name == "label-abort-request-count" || name == "label-map-count" || name == "label-release-count" || name == "label-request-count" || name == "label-withdraw-count" || name == "notification-count" || name == "total-count")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::MessageOut()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{

    yang_name = "message-out"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::~MessageOut()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
        address_withdraw_count.value_namespace = name_space;
        address_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
        iccp_rg_conn_count.value_namespace = name_space;
        iccp_rg_conn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
        iccp_rg_disconn_count.value_namespace = name_space;
        iccp_rg_disconn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
        iccp_rg_notif_count.value_namespace = name_space;
        iccp_rg_notif_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
        label_request_count.value_namespace = name_space;
        label_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count.yfilter = yfilter;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count" || name == "address-withdraw-count" || name == "iccp-rg-app-data-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "init-count" || name == "keep-alive-count" || name == "label-abort-request-count" || name == "label-map-count" || name == "label-release-count" || name == "label-request-count" || name == "label-withdraw-count" || name == "notification-count" || name == "total-count")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Summary()
    :
    common(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common>())
	,vrf(std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_>())
{
    common->parent = this;
    vrf->parent = this;

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::~Summary()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::has_data() const
{
    return (common !=  nullptr && common->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common>();
        }
        return common;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "vrf")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{

    yang_name = "common"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::~Common()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv4af.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv6_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv6_local_addresses.yfilter)
	|| ydk::is_set(number_of_ipv6_routes.yfilter)
	|| ydk::is_set(number_of_ipv6af.yfilter)
	|| ydk::is_set(number_of_ipv6ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_local_bindings_ipv6.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_nsr_synced_neighbors.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv4.yfilter)
	|| ydk::is_set(number_of_remote_bindings_ipv6.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.yfilter)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.yfilter)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.yfilter)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.yfilter)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.yfilter)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.yfilter)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
        number_of_bindings_ipv4.value_namespace = name_space;
        number_of_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
        number_of_bindings_ipv6.value_namespace = name_space;
        number_of_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
        number_of_ipv4_hello_adj.value_namespace = name_space;
        number_of_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
        number_of_ipv4af.value_namespace = name_space;
        number_of_ipv4af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
        number_of_ipv6_hello_adj.value_namespace = name_space;
        number_of_ipv6_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
        number_of_ipv6_local_addresses.value_namespace = name_space;
        number_of_ipv6_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
        number_of_ipv6_routes.value_namespace = name_space;
        number_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
        number_of_ipv6af.value_namespace = name_space;
        number_of_ipv6af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
        number_of_ipv6ldp_interfaces.value_namespace = name_space;
        number_of_ipv6ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
        number_of_local_bindings_ipv4.value_namespace = name_space;
        number_of_local_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
        number_of_local_bindings_ipv6.value_namespace = name_space;
        number_of_local_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
        number_of_nsr_synced_neighbors.value_namespace = name_space;
        number_of_nsr_synced_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
        number_of_remote_bindings_ipv4.value_namespace = name_space;
        number_of_remote_bindings_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
        number_of_remote_bindings_ipv6.value_namespace = name_space;
        number_of_remote_bindings_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4.yfilter = yfilter;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-bindings-ipv4" || name == "number-of-bindings-ipv6" || name == "number-of-downstream-on-demand-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-ipv4-hello-adj" || name == "number-of-ipv4-local-addresses" || name == "number-of-ipv4-routes" || name == "number-of-ipv4af" || name == "number-of-ipv4ldp-interfaces" || name == "number-of-ipv6-hello-adj" || name == "number-of-ipv6-local-addresses" || name == "number-of-ipv6-routes" || name == "number-of-ipv6af" || name == "number-of-ipv6ldp-interfaces" || name == "number-of-ldp-interfaces" || name == "number-of-local-bindings-ipv4" || name == "number-of-local-bindings-ipv6" || name == "number-of-neighbors" || name == "number-of-nsr-synced-neighbors" || name == "number-of-remote-bindings-ipv4" || name == "number-of-remote-bindings-ipv6")
        return true;
    return false;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name")
        return true;
    return false;
}


}
}

