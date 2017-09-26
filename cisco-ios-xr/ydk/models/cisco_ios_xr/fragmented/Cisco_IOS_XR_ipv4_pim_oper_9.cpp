
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_9.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Summary::~Summary()
{
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
        is_maximum_enforcement_disabled.value_namespace = name_space;
        is_maximum_enforcement_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-threshold" || name == "bsr-range-threshold" || name == "bsr-ranges-count" || name == "bsr-ranges-limit" || name == "global-auto-rp-ranges-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-threshold" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-threshold" || name == "global-register-limit" || name == "is-bsr-ranges-threshold-reached" || name == "is-global-auto-rp-ranges-limit-reached" || name == "is-global-bsr-ranges-limit-reached" || name == "is-global-register-limit-reached" || name == "is-global-route-limit-reached" || name == "is-global-rxi-limit-reached" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "is-ranges-limit-reached" || name == "is-route-limit-reached" || name == "ranges-count" || name == "ranges-limit" || name == "ranges-threshold" || name == "register-count" || name == "register-limit" || name == "register-limit-reached" || name == "register-threshold" || name == "route-count" || name == "route-limit" || name == "route-low-water-mark" || name == "route-threshold" || name == "rxi-limit-reached" || name == "rxi-low-water-mark" || name == "topology-interface-state-count" || name == "topology-interface-state-limit" || name == "topology-interface-state-threshold")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContexts()
{

    yang_name = "table-contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TableContexts::~TableContexts()
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TableContexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        for(auto const & c : table_context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : table_context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TableContexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TableContexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-context")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::TableContext()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    saf_name{YType::enumeration, "saf-name"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    topology_name{YType::str, "topology-name"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "table-context"; yang_parent_name = "table-contexts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| saf_name.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| topology_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TableContexts::TableContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-convergence" || name == "is-rib-convergence-received" || name == "is-rib-registration-done" || name == "rpf-registrations" || name == "saf-name" || name == "safi" || name == "table-id" || name == "table-name" || name == "topology-name" || name == "vrf-id")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::~Topologies()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::Topology()
    :
    alive{YType::int32, "alive"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    assume_alive{YType::boolean, "assume-alive"},
    bgp_join{YType::boolean, "bgp-join"},
    bgp_jp_time{YType::uint64, "bgp-jp-time"},
    connected{YType::boolean, "connected"},
    crossed_threshold{YType::boolean, "crossed-threshold"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    data_mdt_addr_assigned{YType::boolean, "data-mdt-addr-assigned"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    expiry{YType::uint64, "expiry"},
    extranet_route{YType::boolean, "extranet-route"},
    group_address{YType::str, "group-address"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    jp_status{YType::int32, "jp-status"},
    jp_timer{YType::int32, "jp-timer"},
    kat_state{YType::boolean, "kat-state"},
    last_hop{YType::boolean, "last-hop"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    probe_alive{YType::boolean, "probe-alive"},
    protocol{YType::enumeration, "protocol"},
    proxy{YType::boolean, "proxy"},
    really_alive{YType::boolean, "really-alive"},
    register_received{YType::boolean, "register-received"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpt{YType::int32, "rpt"},
    rpt_xr{YType::boolean, "rpt-xr"},
    sa_joined{YType::boolean, "sa-joined"},
    sa_received{YType::boolean, "sa-received"},
    sa_sent{YType::boolean, "sa-sent"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sending_registers{YType::boolean, "sending-registers"},
    signal_sources{YType::boolean, "signal-sources"},
    source_address{YType::str, "source-address"},
    spt{YType::boolean, "spt"},
    suppress_registers{YType::int32, "suppress-registers"},
    uptime{YType::uint64, "uptime"},
    vxlan{YType::boolean, "vxlan"},
    wildcard{YType::boolean, "wildcard"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>())
	,orig_src_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>())
	,proxy_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress>())
	,rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress>())
	,rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot>())
	,secondary_rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>())
	,source_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>())
{
    group_address_xr->parent = this;
    orig_src_address->parent = this;
    proxy_address->parent = this;
    rp_address->parent = this;
    rpf_neighbor->parent = this;
    rpf_root->parent = this;
    secondary_rpf_neighbor->parent = this;
    source_address_xr->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::~Topology()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return alive.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| assume_alive.is_set
	|| bgp_join.is_set
	|| bgp_jp_time.is_set
	|| connected.is_set
	|| crossed_threshold.is_set
	|| customer_routing_type.is_set
	|| data_mdt_addr_assigned.is_set
	|| dont_check_connected.is_set
	|| expiry.is_set
	|| extranet_route.is_set
	|| group_address.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| is_via_lsm.is_set
	|| jp_status.is_set
	|| jp_timer.is_set
	|| kat_state.is_set
	|| last_hop.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| mofrr_active.is_set
	|| mofrr_backup.is_set
	|| mofrr_enabled.is_set
	|| mofrr_primary.is_set
	|| probe_alive.is_set
	|| protocol.is_set
	|| proxy.is_set
	|| really_alive.is_set
	|| register_received.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| rib_mo_frr_enabled.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_proxy_enabled.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| rpt.is_set
	|| rpt_xr.is_set
	|| sa_joined.is_set
	|| sa_received.is_set
	|| sa_sent.is_set
	|| secondary_rpf_interface_name.is_set
	|| sending_null_registers.is_set
	|| sending_registers.is_set
	|| signal_sources.is_set
	|| source_address.is_set
	|| spt.is_set
	|| suppress_registers.is_set
	|| uptime.is_set
	|| vxlan.is_set
	|| wildcard.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alive.yfilter)
	|| ydk::is_set(anycast_rp_match.yfilter)
	|| ydk::is_set(anycast_rp_route_target.yfilter)
	|| ydk::is_set(assume_alive.yfilter)
	|| ydk::is_set(bgp_join.yfilter)
	|| ydk::is_set(bgp_jp_time.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(crossed_threshold.yfilter)
	|| ydk::is_set(customer_routing_type.yfilter)
	|| ydk::is_set(data_mdt_addr_assigned.yfilter)
	|| ydk::is_set(dont_check_connected.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(extranet_route.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(inherit_alive.yfilter)
	|| ydk::is_set(inherit_spt.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(jp_status.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(kat_state.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(limit_reached.yfilter)
	|| ydk::is_set(low_memory.yfilter)
	|| ydk::is_set(mofrr_active.yfilter)
	|| ydk::is_set(mofrr_backup.yfilter)
	|| ydk::is_set(mofrr_enabled.yfilter)
	|| ydk::is_set(mofrr_primary.yfilter)
	|| ydk::is_set(probe_alive.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(really_alive.yfilter)
	|| ydk::is_set(register_received.yfilter)
	|| ydk::is_set(register_received_timer.yfilter)
	|| ydk::is_set(remote_source.yfilter)
	|| ydk::is_set(rib_mo_frr_enabled.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_proxy_enabled.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(rpt.yfilter)
	|| ydk::is_set(rpt_xr.yfilter)
	|| ydk::is_set(sa_joined.yfilter)
	|| ydk::is_set(sa_received.yfilter)
	|| ydk::is_set(sa_sent.yfilter)
	|| ydk::is_set(secondary_rpf_interface_name.yfilter)
	|| ydk::is_set(sending_null_registers.yfilter)
	|| ydk::is_set(sending_registers.yfilter)
	|| ydk::is_set(signal_sources.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(spt.yfilter)
	|| ydk::is_set(suppress_registers.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vxlan.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alive.is_set || is_set(alive.yfilter)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.yfilter)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.yfilter)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.yfilter)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.yfilter)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgp_jp_time.is_set || is_set(bgp_jp_time.yfilter)) leaf_name_data.push_back(bgp_jp_time.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (crossed_threshold.is_set || is_set(crossed_threshold.yfilter)) leaf_name_data.push_back(crossed_threshold.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.yfilter)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (data_mdt_addr_assigned.is_set || is_set(data_mdt_addr_assigned.yfilter)) leaf_name_data.push_back(data_mdt_addr_assigned.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.yfilter)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.yfilter)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.yfilter)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.yfilter)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.yfilter)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (kat_state.is_set || is_set(kat_state.yfilter)) leaf_name_data.push_back(kat_state.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.yfilter)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.yfilter)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.yfilter)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.yfilter)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.yfilter)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.yfilter)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.yfilter)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.yfilter)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.yfilter)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.yfilter)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.yfilter)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.yfilter)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.yfilter)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.yfilter)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.yfilter)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.yfilter)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.yfilter)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.yfilter)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.yfilter)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.yfilter)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.yfilter)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.yfilter)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (spt.is_set || is_set(spt.yfilter)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.yfilter)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address == nullptr)
        {
            orig_src_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>();
        }
        return orig_src_address;
    }

    if(child_yang_name == "outgoing-interface")
    {
        for(auto const & c : outgoing_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address == nullptr)
        {
            proxy_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress>();
        }
        return proxy_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor == nullptr)
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>();
        }
        return secondary_rpf_neighbor;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(orig_src_address != nullptr)
    {
        children["orig-src-address"] = orig_src_address;
    }

    for (auto const & c : outgoing_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(proxy_address != nullptr)
    {
        children["proxy-address"] = proxy_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(secondary_rpf_neighbor != nullptr)
    {
        children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alive")
    {
        alive = value;
        alive.value_namespace = name_space;
        alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
        anycast_rp_match.value_namespace = name_space;
        anycast_rp_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
        anycast_rp_route_target.value_namespace = name_space;
        anycast_rp_route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
        assume_alive.value_namespace = name_space;
        assume_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
        bgp_join.value_namespace = name_space;
        bgp_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time = value;
        bgp_jp_time.value_namespace = name_space;
        bgp_jp_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold = value;
        crossed_threshold.value_namespace = name_space;
        crossed_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
        customer_routing_type.value_namespace = name_space;
        customer_routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned = value;
        data_mdt_addr_assigned.value_namespace = name_space;
        data_mdt_addr_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
        dont_check_connected.value_namespace = name_space;
        dont_check_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
        extranet_route.value_namespace = name_space;
        extranet_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
        inherit_alive.value_namespace = name_space;
        inherit_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
        inherit_spt.value_namespace = name_space;
        inherit_spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
        jp_status.value_namespace = name_space;
        jp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kat-state")
    {
        kat_state = value;
        kat_state.value_namespace = name_space;
        kat_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
        limit_reached.value_namespace = name_space;
        limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
        low_memory.value_namespace = name_space;
        low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
        mofrr_active.value_namespace = name_space;
        mofrr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
        mofrr_backup.value_namespace = name_space;
        mofrr_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
        mofrr_enabled.value_namespace = name_space;
        mofrr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
        mofrr_primary.value_namespace = name_space;
        mofrr_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
        probe_alive.value_namespace = name_space;
        probe_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
        really_alive.value_namespace = name_space;
        really_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received")
    {
        register_received = value;
        register_received.value_namespace = name_space;
        register_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
        register_received_timer.value_namespace = name_space;
        register_received_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
        remote_source.value_namespace = name_space;
        remote_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
        rib_mo_frr_enabled.value_namespace = name_space;
        rib_mo_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
        rpf_proxy_enabled.value_namespace = name_space;
        rpf_proxy_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt")
    {
        rpt = value;
        rpt.value_namespace = name_space;
        rpt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
        rpt_xr.value_namespace = name_space;
        rpt_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
        sa_joined.value_namespace = name_space;
        sa_joined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
        sa_received.value_namespace = name_space;
        sa_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
        sa_sent.value_namespace = name_space;
        sa_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
        secondary_rpf_interface_name.value_namespace = name_space;
        secondary_rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
        sending_null_registers.value_namespace = name_space;
        sending_null_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
        sending_registers.value_namespace = name_space;
        sending_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
        signal_sources.value_namespace = name_space;
        signal_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt")
    {
        spt = value;
        spt.value_namespace = name_space;
        spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
        suppress_registers.value_namespace = name_space;
        suppress_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alive")
    {
        alive.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target.yfilter = yfilter;
    }
    if(value_path == "assume-alive")
    {
        assume_alive.yfilter = yfilter;
    }
    if(value_path == "bgp-join")
    {
        bgp_join.yfilter = yfilter;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold.yfilter = yfilter;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type.yfilter = yfilter;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned.yfilter = yfilter;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "extranet-route")
    {
        extranet_route.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive.yfilter = yfilter;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "jp-status")
    {
        jp_status.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "kat-state")
    {
        kat_state.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "limit-reached")
    {
        limit_reached.yfilter = yfilter;
    }
    if(value_path == "low-memory")
    {
        low_memory.yfilter = yfilter;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active.yfilter = yfilter;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup.yfilter = yfilter;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled.yfilter = yfilter;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary.yfilter = yfilter;
    }
    if(value_path == "probe-alive")
    {
        probe_alive.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "really-alive")
    {
        really_alive.yfilter = yfilter;
    }
    if(value_path == "register-received")
    {
        register_received.yfilter = yfilter;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer.yfilter = yfilter;
    }
    if(value_path == "remote-source")
    {
        remote_source.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "rpt")
    {
        rpt.yfilter = yfilter;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr.yfilter = yfilter;
    }
    if(value_path == "sa-joined")
    {
        sa_joined.yfilter = yfilter;
    }
    if(value_path == "sa-received")
    {
        sa_received.yfilter = yfilter;
    }
    if(value_path == "sa-sent")
    {
        sa_sent.yfilter = yfilter;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers.yfilter = yfilter;
    }
    if(value_path == "sending-registers")
    {
        sending_registers.yfilter = yfilter;
    }
    if(value_path == "signal-sources")
    {
        signal_sources.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "spt")
    {
        spt.yfilter = yfilter;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "orig-src-address" || name == "outgoing-interface" || name == "proxy-address" || name == "rp-address" || name == "rpf-neighbor" || name == "rpf-root" || name == "secondary-rpf-neighbor" || name == "source-address-xr" || name == "alive" || name == "anycast-rp-match" || name == "anycast-rp-route-target" || name == "assume-alive" || name == "bgp-join" || name == "bgp-jp-time" || name == "connected" || name == "crossed-threshold" || name == "customer-routing-type" || name == "data-mdt-addr-assigned" || name == "dont-check-connected" || name == "expiry" || name == "extranet-route" || name == "group-address" || name == "inherit-alive" || name == "inherit-spt" || name == "is-via-lsm" || name == "jp-status" || name == "jp-timer" || name == "kat-state" || name == "last-hop" || name == "limit-reached" || name == "low-memory" || name == "mofrr-active" || name == "mofrr-backup" || name == "mofrr-enabled" || name == "mofrr-primary" || name == "probe-alive" || name == "protocol" || name == "proxy" || name == "really-alive" || name == "register-received" || name == "register-received-timer" || name == "remote-source" || name == "rib-mo-frr-enabled" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-proxy-enabled" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-vrf-name" || name == "rpt" || name == "rpt-xr" || name == "sa-joined" || name == "sa-received" || name == "sa-sent" || name == "secondary-rpf-interface-name" || name == "sending-null-registers" || name == "sending-registers" || name == "signal-sources" || name == "source-address" || name == "spt" || name == "suppress-registers" || name == "uptime" || name == "vxlan" || name == "wildcard")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "orig-src-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    admin_boundary{YType::boolean, "admin-boundary"},
    assert_state{YType::boolean, "assert-state"},
    assert_timer{YType::int32, "assert-timer"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    expiry{YType::uint64, "expiry"},
    extranet_interface{YType::boolean, "extranet-interface"},
    forwarding_state{YType::int32, "forwarding-state"},
    igmp_membership{YType::boolean, "igmp-membership"},
    immediate_state{YType::int32, "immediate-state"},
    interface_name{YType::str, "interface-name"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    internal_interest_information{YType::enumeration, "internal-interest-information"},
    jp_state{YType::int32, "jp-state"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    local_members{YType::int32, "local-members"},
    local_members_information{YType::enumeration, "local-members-information"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    mvpnv6_safi_join{YType::boolean, "mvpnv6-safi-join"},
    sa_prune{YType::boolean, "sa-prune"},
    uptime{YType::uint64, "uptime"},
    vrf_name{YType::str, "vrf-name"}
    	,
    assert_winner(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;

    yang_name = "outgoing-interface"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_data() const
{
    return admin_boundary.is_set
	|| assert_state.is_set
	|| assert_timer.is_set
	|| bgp_c_mcast_join.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| data_mdt_join.is_set
	|| expiry.is_set
	|| extranet_interface.is_set
	|| forwarding_state.is_set
	|| igmp_membership.is_set
	|| immediate_state.is_set
	|| interface_name.is_set
	|| internal_interest_info.is_set
	|| internal_interest_information.is_set
	|| jp_state.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| local_mdt_join.is_set
	|| local_members.is_set
	|| local_members_information.is_set
	|| mdt_safi_join.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| mvpn_safi_join.is_set
	|| mvpnv6_safi_join.is_set
	|| sa_prune.is_set
	|| uptime.is_set
	|| vrf_name.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_boundary.yfilter)
	|| ydk::is_set(assert_state.yfilter)
	|| ydk::is_set(assert_timer.yfilter)
	|| ydk::is_set(bgp_c_mcast_join.yfilter)
	|| ydk::is_set(bgp_c_mcast_prune_delay_timer.yfilter)
	|| ydk::is_set(data_mdt_join.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(extranet_interface.yfilter)
	|| ydk::is_set(forwarding_state.yfilter)
	|| ydk::is_set(igmp_membership.yfilter)
	|| ydk::is_set(immediate_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(internal_interest_info.yfilter)
	|| ydk::is_set(internal_interest_information.yfilter)
	|| ydk::is_set(jp_state.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(local_mdt_join.yfilter)
	|| ydk::is_set(local_members.yfilter)
	|| ydk::is_set(local_members_information.yfilter)
	|| ydk::is_set(mdt_safi_join.yfilter)
	|| ydk::is_set(mldp_inband_mdt.yfilter)
	|| ydk::is_set(mldp_stale.yfilter)
	|| ydk::is_set(mvpn_safi_join.yfilter)
	|| ydk::is_set(mvpnv6_safi_join.yfilter)
	|| ydk::is_set(sa_prune.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_boundary.is_set || is_set(admin_boundary.yfilter)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (assert_state.is_set || is_set(assert_state.yfilter)) leaf_name_data.push_back(assert_state.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.yfilter)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.yfilter)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.yfilter)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.yfilter)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.yfilter)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.yfilter)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.yfilter)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.yfilter)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.yfilter)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (internal_interest_information.is_set || is_set(internal_interest_information.yfilter)) leaf_name_data.push_back(internal_interest_information.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.yfilter)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.yfilter)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.yfilter)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (local_members_information.is_set || is_set(local_members_information.yfilter)) leaf_name_data.push_back(local_members_information.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.yfilter)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.yfilter)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.yfilter)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.yfilter)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (mvpnv6_safi_join.is_set || is_set(mvpnv6_safi_join.yfilter)) leaf_name_data.push_back(mvpnv6_safi_join.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.yfilter)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assert-winner")
    {
        if(assert_winner == nullptr)
        {
            assert_winner = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>();
        }
        return assert_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assert_winner != nullptr)
    {
        children["assert-winner"] = assert_winner;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
        admin_boundary.value_namespace = name_space;
        admin_boundary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-state")
    {
        assert_state = value;
        assert_state.value_namespace = name_space;
        assert_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
        assert_timer.value_namespace = name_space;
        assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
        bgp_c_mcast_join.value_namespace = name_space;
        bgp_c_mcast_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
        bgp_c_mcast_prune_delay_timer.value_namespace = name_space;
        bgp_c_mcast_prune_delay_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
        data_mdt_join.value_namespace = name_space;
        data_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
        extranet_interface.value_namespace = name_space;
        extranet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
        forwarding_state.value_namespace = name_space;
        forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
        igmp_membership.value_namespace = name_space;
        igmp_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
        immediate_state.value_namespace = name_space;
        immediate_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
        internal_interest_info.value_namespace = name_space;
        internal_interest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information = value;
        internal_interest_information.value_namespace = name_space;
        internal_interest_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
        jp_state.value_namespace = name_space;
        jp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
        local_mdt_join.value_namespace = name_space;
        local_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members")
    {
        local_members = value;
        local_members.value_namespace = name_space;
        local_members.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members-information")
    {
        local_members_information = value;
        local_members_information.value_namespace = name_space;
        local_members_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
        mdt_safi_join.value_namespace = name_space;
        mdt_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
        mldp_inband_mdt.value_namespace = name_space;
        mldp_inband_mdt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
        mldp_stale.value_namespace = name_space;
        mldp_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
        mvpn_safi_join.value_namespace = name_space;
        mvpn_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join = value;
        mvpnv6_safi_join.value_namespace = name_space;
        mvpnv6_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
        sa_prune.value_namespace = name_space;
        sa_prune.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary.yfilter = yfilter;
    }
    if(value_path == "assert-state")
    {
        assert_state.yfilter = yfilter;
    }
    if(value_path == "assert-timer")
    {
        assert_timer.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer.yfilter = yfilter;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface.yfilter = yfilter;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state.yfilter = yfilter;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership.yfilter = yfilter;
    }
    if(value_path == "immediate-state")
    {
        immediate_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info.yfilter = yfilter;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information.yfilter = yfilter;
    }
    if(value_path == "jp-state")
    {
        jp_state.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join.yfilter = yfilter;
    }
    if(value_path == "local-members")
    {
        local_members.yfilter = yfilter;
    }
    if(value_path == "local-members-information")
    {
        local_members_information.yfilter = yfilter;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join.yfilter = yfilter;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt.yfilter = yfilter;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale.yfilter = yfilter;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join.yfilter = yfilter;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join.yfilter = yfilter;
    }
    if(value_path == "sa-prune")
    {
        sa_prune.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assert-winner" || name == "admin-boundary" || name == "assert-state" || name == "assert-timer" || name == "bgp-c-mcast-join" || name == "bgp-c-mcast-prune-delay-timer" || name == "data-mdt-join" || name == "expiry" || name == "extranet-interface" || name == "forwarding-state" || name == "igmp-membership" || name == "immediate-state" || name == "interface-name" || name == "internal-interest-info" || name == "internal-interest-information" || name == "jp-state" || name == "jp-timer" || name == "last-hop" || name == "local-mdt-join" || name == "local-members" || name == "local-members-information" || name == "mdt-safi-join" || name == "mldp-inband-mdt" || name == "mldp-stale" || name == "mvpn-safi-join" || name == "mvpnv6-safi-join" || name == "sa-prune" || name == "uptime" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "proxy-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{

    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        for(auto const & c : topology_entry_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_entry_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-entry-flag-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_flag.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.yfilter)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
        entry_flag.value_namespace = name_space;
        entry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-flag")
    {
        entry_flag.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-flag" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
{

    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-interface-flag-route-count")
    {
        for(auto const & c : topology_interface_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_interface_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-interface-flag-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    return interface_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_flag.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count" <<"[interface-flag='" <<interface_flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.yfilter)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
        interface_flag.value_namespace = name_space;
        interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-flag")
    {
        interface_flag.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-flag" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::TopologyRouteCount()
    :
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-route-count"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_data() const
{
    return active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::TrafficCounters()
    :
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    checksum_error{YType::uint32, "checksum-error"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_error{YType::uint32, "format-error"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_data_register{YType::uint32, "input-data-register"},
    input_df_election{YType::uint32, "input-df-election"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_null_register{YType::uint32, "input-null-register"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    input_register_stop{YType::uint32, "input-register-stop"},
    inputs{YType::uint32, "inputs"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    invalid_registers{YType::uint32, "invalid-registers"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_data_register{YType::uint32, "output-data-register"},
    output_df_election{YType::uint32, "output-df-election"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_hello{YType::uint32, "output-hello"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    output_join_group{YType::uint32, "output-join-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_jp{YType::uint32, "output-jp"},
    output_loop_error{YType::uint32, "output-loop-error"},
    output_null_register{YType::uint32, "output-null-register"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_register_stop{YType::uint32, "output-register-stop"},
    outputs{YType::uint32, "outputs"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packets_standby{YType::uint32, "packets-standby"},
    pakman_error{YType::uint32, "pakman-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    socket_error{YType::uint32, "socket-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
{

    yang_name = "traffic-counters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_data() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    return boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| checksum_error.is_set
	|| elapsed_time.is_set
	|| format_error.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_data_register.is_set
	|| input_df_election.is_set
	|| input_ecmp_redirect.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_no_idb_error.is_set
	|| input_no_pim_error.is_set
	|| input_no_vrf_error.is_set
	|| input_null_register.is_set
	|| input_pim_version_error.is_set
	|| input_register_stop.is_set
	|| inputs.is_set
	|| invalid_destination_packets.is_set
	|| invalid_join_prunes.is_set
	|| invalid_registers.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| no_mdt_socket_connection.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| non_supported_packets.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_data_register.is_set
	|| output_df_election.is_set
	|| output_ecmp_redirect.is_set
	|| output_hello.is_set
	|| output_hello_bytes.is_set
	|| output_join_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_jp.is_set
	|| output_loop_error.is_set
	|| output_null_register.is_set
	|| output_prune_group.is_set
	|| output_register_stop.is_set
	|| outputs.is_set
	|| packet_packman_error.is_set
	|| packet_queue_last_clear.is_set
	|| packet_read_socket_error.is_set
	|| packets_standby.is_set
	|| pakman_error.is_set
	|| send_queue_full.is_set
	|| socket_error.is_set
	|| standby_packets_error.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boundary_acl_rx_drop.yfilter)
	|| ydk::is_set(boundary_acl_tx_drop.yfilter)
	|| ydk::is_set(checksum_error.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(format_error.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_assert_batched.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_data_register.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(input_ecmp_redirect.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(input_no_idb_error.yfilter)
	|| ydk::is_set(input_no_pim_error.yfilter)
	|| ydk::is_set(input_no_vrf_error.yfilter)
	|| ydk::is_set(input_null_register.yfilter)
	|| ydk::is_set(input_pim_version_error.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(invalid_destination_packets.yfilter)
	|| ydk::is_set(invalid_join_prunes.yfilter)
	|| ydk::is_set(invalid_registers.yfilter)
	|| ydk::is_set(mdt_drop_local_source_address.yfilter)
	|| ydk::is_set(mdt_drop_no_idb.yfilter)
	|| ydk::is_set(mdt_drop_no_vrf.yfilter)
	|| ydk::is_set(mdt_drop_null_local_address.yfilter)
	|| ydk::is_set(mdt_join_bad_type.yfilter)
	|| ydk::is_set(mdt_join_tlv_received.yfilter)
	|| ydk::is_set(mdt_join_tlv_sent.yfilter)
	|| ydk::is_set(mdt_joins_drop_multiple_encapsulation.yfilter)
	|| ydk::is_set(mdt_send_queue_full.yfilter)
	|| ydk::is_set(mdt_socket_error.yfilter)
	|| ydk::is_set(mldp_mdt_invalid_lsm_identifier.yfilter)
	|| ydk::is_set(no_mdt_socket_connection.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(no_source_address.yfilter)
	|| ydk::is_set(non_supported_packets.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_assert_batched.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_data_register.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(output_ecmp_redirect.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_hello_bytes.yfilter)
	|| ydk::is_set(output_join_group.yfilter)
	|| ydk::is_set(output_join_prune_bytes.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(output_loop_error.yfilter)
	|| ydk::is_set(output_null_register.yfilter)
	|| ydk::is_set(output_prune_group.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(packet_packman_error.yfilter)
	|| ydk::is_set(packet_queue_last_clear.yfilter)
	|| ydk::is_set(packet_read_socket_error.yfilter)
	|| ydk::is_set(packets_standby.yfilter)
	|| ydk::is_set(pakman_error.yfilter)
	|| ydk::is_set(send_queue_full.yfilter)
	|| ydk::is_set(socket_error.yfilter)
	|| ydk::is_set(standby_packets_error.yfilter)
	|| ydk::is_set(truncated_pim_packets.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.yfilter)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.yfilter)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.yfilter)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.yfilter)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.yfilter)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.yfilter)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.yfilter)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.yfilter)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.yfilter)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.yfilter)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.yfilter)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.yfilter)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.yfilter)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.yfilter)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.yfilter)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.yfilter)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.yfilter)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.yfilter)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.yfilter)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.yfilter)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.yfilter)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.yfilter)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.yfilter)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.yfilter)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.yfilter)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.yfilter)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.yfilter)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_data_register.is_set || is_set(output_data_register.yfilter)) leaf_name_data.push_back(output_data_register.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.yfilter)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.yfilter)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.yfilter)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.yfilter)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.yfilter)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.yfilter)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.yfilter)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.yfilter)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.yfilter)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.yfilter)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.yfilter)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.yfilter)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.yfilter)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.yfilter)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.yfilter)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.yfilter)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue")
    {
        for(auto const & c : packet_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : packet_queue)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
        boundary_acl_rx_drop.value_namespace = name_space;
        boundary_acl_rx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
        boundary_acl_tx_drop.value_namespace = name_space;
        boundary_acl_tx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
        checksum_error.value_namespace = name_space;
        checksum_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-error")
    {
        format_error = value;
        format_error.value_namespace = name_space;
        format_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
        input_assert_batched.value_namespace = name_space;
        input_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
        input_data_register.value_namespace = name_space;
        input_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
        input_ecmp_redirect.value_namespace = name_space;
        input_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
        input_no_idb_error.value_namespace = name_space;
        input_no_idb_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
        input_no_pim_error.value_namespace = name_space;
        input_no_pim_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
        input_no_vrf_error.value_namespace = name_space;
        input_no_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
        input_null_register.value_namespace = name_space;
        input_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
        input_pim_version_error.value_namespace = name_space;
        input_pim_version_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
        invalid_destination_packets.value_namespace = name_space;
        invalid_destination_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
        invalid_join_prunes.value_namespace = name_space;
        invalid_join_prunes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
        invalid_registers.value_namespace = name_space;
        invalid_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
        mdt_drop_local_source_address.value_namespace = name_space;
        mdt_drop_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
        mdt_drop_no_idb.value_namespace = name_space;
        mdt_drop_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
        mdt_drop_no_vrf.value_namespace = name_space;
        mdt_drop_no_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
        mdt_drop_null_local_address.value_namespace = name_space;
        mdt_drop_null_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
        mdt_join_bad_type.value_namespace = name_space;
        mdt_join_bad_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
        mdt_join_tlv_received.value_namespace = name_space;
        mdt_join_tlv_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
        mdt_join_tlv_sent.value_namespace = name_space;
        mdt_join_tlv_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
        mdt_joins_drop_multiple_encapsulation.value_namespace = name_space;
        mdt_joins_drop_multiple_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
        mdt_send_queue_full.value_namespace = name_space;
        mdt_send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
        mdt_socket_error.value_namespace = name_space;
        mdt_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
        mldp_mdt_invalid_lsm_identifier.value_namespace = name_space;
        mldp_mdt_invalid_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
        no_mdt_socket_connection.value_namespace = name_space;
        no_mdt_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
        no_source_address.value_namespace = name_space;
        no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
        non_supported_packets.value_namespace = name_space;
        non_supported_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
        output_assert_batched.value_namespace = name_space;
        output_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-register")
    {
        output_data_register = value;
        output_data_register.value_namespace = name_space;
        output_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
        output_ecmp_redirect.value_namespace = name_space;
        output_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
        output_hello_bytes.value_namespace = name_space;
        output_hello_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
        output_join_group.value_namespace = name_space;
        output_join_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
        output_join_prune_bytes.value_namespace = name_space;
        output_join_prune_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
        output_loop_error.value_namespace = name_space;
        output_loop_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
        output_null_register.value_namespace = name_space;
        output_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
        output_prune_group.value_namespace = name_space;
        output_prune_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
        packet_packman_error.value_namespace = name_space;
        packet_packman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
        packet_queue_last_clear.value_namespace = name_space;
        packet_queue_last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
        packet_read_socket_error.value_namespace = name_space;
        packet_read_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
        packets_standby.value_namespace = name_space;
        packets_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
        pakman_error.value_namespace = name_space;
        pakman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
        send_queue_full.value_namespace = name_space;
        send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
        socket_error.value_namespace = name_space;
        socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
        standby_packets_error.value_namespace = name_space;
        standby_packets_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
        truncated_pim_packets.value_namespace = name_space;
        truncated_pim_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop.yfilter = yfilter;
    }
    if(value_path == "checksum-error")
    {
        checksum_error.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "format-error")
    {
        format_error.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-data-register")
    {
        input_data_register.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error.yfilter = yfilter;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error.yfilter = yfilter;
    }
    if(value_path == "input-null-register")
    {
        input_null_register.yfilter = yfilter;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes.yfilter = yfilter;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address.yfilter = yfilter;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent.yfilter = yfilter;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation.yfilter = yfilter;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full.yfilter = yfilter;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-source-address")
    {
        no_source_address.yfilter = yfilter;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-data-register")
    {
        output_data_register.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes.yfilter = yfilter;
    }
    if(value_path == "output-join-group")
    {
        output_join_group.yfilter = yfilter;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error.yfilter = yfilter;
    }
    if(value_path == "output-null-register")
    {
        output_null_register.yfilter = yfilter;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error.yfilter = yfilter;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear.yfilter = yfilter;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error.yfilter = yfilter;
    }
    if(value_path == "packets-standby")
    {
        packets_standby.yfilter = yfilter;
    }
    if(value_path == "pakman-error")
    {
        pakman_error.yfilter = yfilter;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full.yfilter = yfilter;
    }
    if(value_path == "socket-error")
    {
        socket_error.yfilter = yfilter;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error.yfilter = yfilter;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue" || name == "boundary-acl-rx-drop" || name == "boundary-acl-tx-drop" || name == "checksum-error" || name == "elapsed-time" || name == "format-error" || name == "input-assert" || name == "input-assert-batched" || name == "input-bsr-message" || name == "input-candidate-rp-advertisement" || name == "input-data-register" || name == "input-df-election" || name == "input-ecmp-redirect" || name == "input-hello" || name == "input-jp" || name == "input-no-idb-error" || name == "input-no-pim-error" || name == "input-no-vrf-error" || name == "input-null-register" || name == "input-pim-version-error" || name == "input-register-stop" || name == "inputs" || name == "invalid-destination-packets" || name == "invalid-join-prunes" || name == "invalid-registers" || name == "mdt-drop-local-source-address" || name == "mdt-drop-no-idb" || name == "mdt-drop-no-vrf" || name == "mdt-drop-null-local-address" || name == "mdt-join-bad-type" || name == "mdt-join-tlv-received" || name == "mdt-join-tlv-sent" || name == "mdt-joins-drop-multiple-encapsulation" || name == "mdt-send-queue-full" || name == "mdt-socket-error" || name == "mldp-mdt-invalid-lsm-identifier" || name == "no-mdt-socket-connection" || name == "no-socket-connection" || name == "no-source-address" || name == "non-supported-packets" || name == "output-assert" || name == "output-assert-batched" || name == "output-bsr-message" || name == "output-candidate-rp-advertisement" || name == "output-data-register" || name == "output-df-election" || name == "output-ecmp-redirect" || name == "output-hello" || name == "output-hello-bytes" || name == "output-join-group" || name == "output-join-prune-bytes" || name == "output-jp" || name == "output-loop-error" || name == "output-null-register" || name == "output-prune-group" || name == "output-register-stop" || name == "outputs" || name == "packet-packman-error" || name == "packet-queue-last-clear" || name == "packet-read-socket-error" || name == "packets-standby" || name == "pakman-error" || name == "send-queue-full" || name == "socket-error" || name == "standby-packets-error" || name == "truncated-pim-packets")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
    	,
    packet_queue_state(std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>())
	,packet_queue_stats(std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    packet_queue_stats->parent = this;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_data() const
{
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_queue_priority.yfilter)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.yfilter)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state == nullptr)
        {
            packet_queue_state = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>();
        }
        return packet_queue_state;
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats == nullptr)
        {
            packet_queue_stats = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>();
        }
        return packet_queue_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_queue_state != nullptr)
    {
        children["packet-queue-state"] = packet_queue_state;
    }

    if(packet_queue_stats != nullptr)
    {
        children["packet-queue-stats"] = packet_queue_stats;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
        packet_queue_priority.value_namespace = name_space;
        packet_queue_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue-state" || name == "packet-queue-stats" || name == "packet-queue-priority")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{

    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_queue_size.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_packets.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.yfilter)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.yfilter)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
        max_queue_size.value_namespace = name_space;
        max_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
        queue_size_packets.value_namespace = name_space;
        queue_size_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-queue-size" || name == "queue-size-bytes" || name == "queue-size-packets")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    dequeued_packets{YType::uint32, "dequeued-packets"},
    enqueued_packets{YType::uint32, "enqueued-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    tail_drops{YType::uint32, "tail-drops"}
{

    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    return dequeued_packets.is_set
	|| enqueued_packets.is_set
	|| high_water_mark_bytes.is_set
	|| high_water_mark_packets.is_set
	|| tail_drops.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dequeued_packets.yfilter)
	|| ydk::is_set(enqueued_packets.yfilter)
	|| ydk::is_set(high_water_mark_bytes.yfilter)
	|| ydk::is_set(high_water_mark_packets.yfilter)
	|| ydk::is_set(tail_drops.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dequeued_packets.is_set || is_set(dequeued_packets.yfilter)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (enqueued_packets.is_set || is_set(enqueued_packets.yfilter)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.yfilter)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.yfilter)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.yfilter)) leaf_name_data.push_back(tail_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
        dequeued_packets.value_namespace = name_space;
        dequeued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
        enqueued_packets.value_namespace = name_space;
        enqueued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
        high_water_mark_bytes.value_namespace = name_space;
        high_water_mark_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
        high_water_mark_packets.value_namespace = name_space;
        high_water_mark_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
        tail_drops.value_namespace = name_space;
        tail_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets.yfilter = yfilter;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets.yfilter = yfilter;
    }
    if(value_path == "tail-drops")
    {
        tail_drops.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dequeued-packets" || name == "enqueued-packets" || name == "high-water-mark-bytes" || name == "high-water-mark-packets" || name == "tail-drops")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnels()
{

    yang_name = "tunnels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::~Tunnels()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    rp_address->parent = this;
    source_address->parent = this;
    source_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::~Tunnel()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-netio" || name == "rp-address" || name == "source-address" || name == "source-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Pim6Ma()
    :
    active(std::make_shared<Pim6Ma::Active>())
	,standby(std::make_shared<Pim6Ma::Standby>())
{
    active->parent = this;
    standby->parent = this;

    yang_name = "pim6-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Pim6Ma::~Pim6Ma()
{
}

bool Pim6Ma::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Pim6Ma::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Pim6Ma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Pim6Ma::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Pim6Ma::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Pim6Ma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pim6Ma::clone_ptr() const
{
    return std::make_shared<Pim6Ma>();
}

std::string Pim6Ma::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim6Ma::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim6Ma::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pim6Ma::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pim6Ma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby")
        return true;
    return false;
}

Pim6Ma::Active::Active()
    :
    interface_table(std::make_shared<Pim6Ma::Active::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Active::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "active"; yang_parent_name = "pim6-ma"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::~Active()
{
}

bool Pim6Ma::Active::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Active::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Active::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Active::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Active::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Active::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Active::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Active::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string Pim6Ma::Active::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decap-interface-count" || name == "encap-interface-count" || name == "is-edm-connection-open" || name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-standby-edm-connection-open" || name == "mdt-interface-count")
        return true;
    return false;
}

Pim6Ma::Standby::Standby()
    :
    interface_table(std::make_shared<Pim6Ma::Standby::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Standby::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "standby"; yang_parent_name = "pim6-ma"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::~Standby()
{
}

bool Pim6Ma::Standby::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Standby::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Standby::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Standby::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Standby::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Standby::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string Pim6Ma::Standby::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decap-interface-count" || name == "encap-interface-count" || name == "is-edm-connection-open" || name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-standby-edm-connection-open" || name == "mdt-interface-count")
        return true;
    return false;
}

PimMa::PimMa()
    :
    active(std::make_shared<PimMa::Active>())
	,standby(std::make_shared<PimMa::Standby>())
{
    active->parent = this;
    standby->parent = this;

    yang_name = "pim-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PimMa::~PimMa()
{
}

bool PimMa::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool PimMa::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string PimMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<PimMa::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<PimMa::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void PimMa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PimMa::clone_ptr() const
{
    return std::make_shared<PimMa>();
}

std::string PimMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PimMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PimMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PimMa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PimMa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby")
        return true;
    return false;
}

PimMa::Active::Active()
    :
    interface_table(std::make_shared<PimMa::Active::InterfaceTable>())
	,pim_ma_summary(std::make_shared<PimMa::Active::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "active"; yang_parent_name = "pim-ma"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::~Active()
{
}

bool PimMa::Active::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Active::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<PimMa::Active::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<PimMa::Active::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void PimMa::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Active::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Active::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Active::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void PimMa::Active::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Active::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Active::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Active::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string PimMa::Active::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Active::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool PimMa::Active::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decap-interface-count" || name == "encap-interface-count" || name == "is-edm-connection-open" || name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-standby-edm-connection-open" || name == "mdt-interface-count")
        return true;
    return false;
}

PimMa::Standby::Standby()
    :
    interface_table(std::make_shared<PimMa::Standby::InterfaceTable>())
	,pim_ma_summary(std::make_shared<PimMa::Standby::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "standby"; yang_parent_name = "pim-ma"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::~Standby()
{
}

bool PimMa::Standby::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<PimMa::Standby::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<PimMa::Standby::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void PimMa::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Standby::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Standby::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Standby::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-type" || name == "vrf-name")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

PimMa::Standby::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Standby::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Standby::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string PimMa::Standby::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMa::Standby::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool PimMa::Standby::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decap-interface-count" || name == "encap-interface-count" || name == "is-edm-connection-open" || name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-standby-edm-connection-open" || name == "mdt-interface-count")
        return true;
    return false;
}


}
}

