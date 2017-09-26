
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_18.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_16.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_17.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_9.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_7.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_10.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_14.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_12.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_32.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::HardwareOutOfResources::HardwareOutOfResources()
    :
    summary(std::make_shared<MplsTe::HardwareOutOfResources::Summary>())
{
    summary->parent = this;

    yang_name = "hardware-out-of-resources"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::HardwareOutOfResources::~HardwareOutOfResources()
{
}

bool MplsTe::HardwareOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::HardwareOutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::HardwareOutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::HardwareOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::HardwareOutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::HardwareOutOfResources::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::HardwareOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTe::HardwareOutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::HardwareOutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::HardwareOutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTe::HardwareOutOfResources::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "hardware-out-of-resources"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::HardwareOutOfResources::Summary::~Summary()
{
}

bool MplsTe::HardwareOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::HardwareOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::HardwareOutOfResources::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::HardwareOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::HardwareOutOfResources::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-out-of-resources-state")
    {
        for(auto const & c : hardware_out_of_resources_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState>();
        c->parent = this;
        hardware_out_of_resources_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::HardwareOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_out_of_resources_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::HardwareOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::HardwareOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::HardwareOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-out-of-resources-state")
        return true;
    return false;
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::HardwareOutOfResourcesState()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    node_protection_disable{YType::boolean, "node-protection-disable"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>())
{
    statistics->parent = this;

    yang_name = "hardware-out-of-resources-state"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::~HardwareOutOfResourcesState()
{
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| hw_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| node_protection_disable.is_set
	|| te_metric_penalty.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(node_protection_disable.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (node_protection_disable.is_set || is_set(node_protection_disable.yfilter)) leaf_name_data.push_back(node_protection_disable.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable = value;
        node_protection_disable.value_namespace = name_space;
        node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "accept-reopt" || name == "available-bw-percentage" || name == "hw-oor-state" || name == "minimum-lsp-bandwidth" || name == "node-protection-disable" || name == "te-metric-penalty" || name == "transition-duration")
        return true;
    return false;
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::Statistics()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{

    yang_name = "statistics"; yang_parent_name = "hardware-out-of-resources-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::~Statistics()
{
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(transitions.yfilter);
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/summary/hardware-out-of-resources-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "hw-oor-state" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "rejected-reopt-ls-ps-number" || name == "transitions")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBriefs()
{

    yang_name = "igp-area-briefs"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::IgpAreaBriefs::~IgpAreaBriefs()
{
}

bool MplsTe::IgpAreaBriefs::has_data() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreaBriefs::has_operation() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::IgpAreaBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreaBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area-brief")
    {
        for(auto const & c : igp_area_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief>();
        c->parent = this;
        igp_area_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_area_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::IgpAreaBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::IgpAreaBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-brief")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::IgpAreaBrief()
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
    is_connection_up{YType::boolean, "is-connection-up"}
{

    yang_name = "igp-area-brief"; yang_parent_name = "igp-area-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::~IgpAreaBrief()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
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

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(is_connection_up.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-area-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-brief" <<"[protocol='" <<protocol <<"']" <<"[process-tag='" <<process_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : secondary_router_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "secondary-router-id" || name == "protocol" || name == "process-tag" || name == "configured-te-router-id" || name == "connection-down-count" || name == "connection-up-count" || name == "global-router-id" || name == "globall-router-id-optical" || name == "igp-system-id" || name == "igp-type" || name == "in-use-te-router-id" || name == "instance-name" || name == "is-connection-up")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::~Area()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-format" || name == "area-index" || name == "area-number" || name == "is-config-ready")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::ActiveData()
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
    area_statistics(std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_data() const
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

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "p2mp-destination-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2p-heads-count" || name == "sr-strict" || name == "topology-idt-received" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::AreaStatistics()
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

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_data() const
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

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
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

void MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
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

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-announce-messages" || name == "area-adjacency-request-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpAreas()
{

    yang_name = "igp-areas"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::IgpAreas::~IgpAreas()
{
}

bool MplsTe::IgpAreas::has_data() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::IgpAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::IgpAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::IgpAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::IgpAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::IgpArea()
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
    is_connection_up{YType::boolean, "is-connection-up"}
{

    yang_name = "igp-area"; yang_parent_name = "igp-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTe::IgpAreas::IgpArea::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
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

bool MplsTe::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(is_connection_up.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area" <<"[protocol='" <<protocol <<"']" <<"[process-tag='" <<process_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : secondary_router_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "secondary-router-id" || name == "protocol" || name == "process-tag" || name == "configured-te-router-id" || name == "connection-down-count" || name == "connection-up-count" || name == "global-router-id" || name == "globall-router-id-optical" || name == "igp-system-id" || name == "igp-type" || name == "in-use-te-router-id" || name == "instance-name" || name == "is-connection-up")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-format" || name == "area-index" || name == "area-number" || name == "is-config-ready")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
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
    area_statistics(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_data() const
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

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "p2mp-destination-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2p-heads-count" || name == "sr-strict" || name == "topology-idt-received" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
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

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
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

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
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

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
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

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-announce-messages" || name == "area-adjacency-request-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::IgpAreas::IgpArea::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::IgpAreas::IgpArea::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Issu::Issu()
    :
    detail(std::make_shared<MplsTe::Issu::Detail>())
	,status(std::make_shared<MplsTe::Issu::Status>())
{
    detail->parent = this;
    status->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::~Issu()
{
}

bool MplsTe::Issu::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTe::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTe::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTe::Issu::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTe::Issu::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::get_children() const
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

void MplsTe::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "status")
        return true;
    return false;
}

MplsTe::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::~Detail()
{
}

bool MplsTe::Issu::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Issu::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::get_children() const
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

void MplsTe::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-sync-information" || name == "slave-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
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
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
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
        auto c = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "s2l-pending" || name == "vif-pending" || name == "insync-sub-ls-ps" || name == "insync-tunnels" || name == "pending-sub-ls-ps" || name == "pending-tunnels")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(s2l_role.yfilter)
	|| ydk::is_set(signaled_name.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "s2l-role" || name == "signaled-name")
        return true;
    return false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::~Status()
{
}

bool MplsTe::Issu::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::get_children() const
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

void MplsTe::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-sync-information" || name == "slave-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
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
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
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
        auto c = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "s2l-pending" || name == "vif-pending" || name == "insync-sub-ls-ps" || name == "insync-tunnels" || name == "pending-sub-ls-ps" || name == "pending-tunnels")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(s2l_role.yfilter)
	|| ydk::is_set(signaled_name.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "s2l-role" || name == "signaled-name")
        return true;
    return false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::LspOutOfResources::LspOutOfResources()
    :
    summary(std::make_shared<MplsTe::LspOutOfResources::Summary>())
{
    summary->parent = this;

    yang_name = "lsp-out-of-resources"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::~LspOutOfResources()
{
}

bool MplsTe::LspOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::LspOutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::LspOutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::LspOutOfResources::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTe::LspOutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::LspOutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::LspOutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::Summary()
    :
    lsp_oor_green_recovery_time{YType::uint32, "lsp-oor-green-recovery-time"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    lsp_oor_timestamp{YType::uint32, "lsp-oor-timestamp"},
    transit_lsp_total_count{YType::uint32, "transit-lsp-total-count"},
    transit_lsp_unprotected_count{YType::uint32, "transit-lsp-unprotected-count"}
{

    yang_name = "summary"; yang_parent_name = "lsp-out-of-resources"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::~Summary()
{
}

bool MplsTe::LspOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_data())
            return true;
    }
    return lsp_oor_green_recovery_time.is_set
	|| lsp_oor_state.is_set
	|| lsp_oor_timestamp.is_set
	|| transit_lsp_total_count.is_set
	|| transit_lsp_unprotected_count.is_set;
}

bool MplsTe::LspOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_oor_green_recovery_time.yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(lsp_oor_timestamp.yfilter)
	|| ydk::is_set(transit_lsp_total_count.yfilter)
	|| ydk::is_set(transit_lsp_unprotected_count.yfilter);
}

std::string MplsTe::LspOutOfResources::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_oor_green_recovery_time.is_set || is_set(lsp_oor_green_recovery_time.yfilter)) leaf_name_data.push_back(lsp_oor_green_recovery_time.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (lsp_oor_timestamp.is_set || is_set(lsp_oor_timestamp.yfilter)) leaf_name_data.push_back(lsp_oor_timestamp.get_name_leafdata());
    if (transit_lsp_total_count.is_set || is_set(transit_lsp_total_count.yfilter)) leaf_name_data.push_back(transit_lsp_total_count.get_name_leafdata());
    if (transit_lsp_unprotected_count.is_set || is_set(transit_lsp_unprotected_count.yfilter)) leaf_name_data.push_back(transit_lsp_unprotected_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-oor-state-xr")
    {
        for(auto const & c : lsp_oor_state_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr>();
        c->parent = this;
        lsp_oor_state_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_oor_state_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::LspOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time = value;
        lsp_oor_green_recovery_time.value_namespace = name_space;
        lsp_oor_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
        lsp_oor_state.value_namespace = name_space;
        lsp_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp = value;
        lsp_oor_timestamp.value_namespace = name_space;
        lsp_oor_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count = value;
        transit_lsp_total_count.value_namespace = name_space;
        transit_lsp_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count = value;
        transit_lsp_unprotected_count.value_namespace = name_space;
        transit_lsp_unprotected_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp.yfilter = yfilter;
    }
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count.yfilter = yfilter;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-oor-state-xr" || name == "lsp-oor-green-recovery-time" || name == "lsp-oor-state" || name == "lsp-oor-timestamp" || name == "transit-lsp-total-count" || name == "transit-lsp-unprotected-count")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::LspOorStateXr()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    threshold_transit_all{YType::uint32, "threshold-transit-all"},
    threshold_transit_unprotected{YType::uint32, "threshold-transit-unprotected"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics>())
{
    statistics->parent = this;

    yang_name = "lsp-oor-state-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::~LspOorStateXr()
{
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| lsp_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| te_metric_penalty.is_set
	|| threshold_transit_all.is_set
	|| threshold_transit_unprotected.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(threshold_transit_all.yfilter)
	|| ydk::is_set(threshold_transit_unprotected.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (threshold_transit_all.is_set || is_set(threshold_transit_all.yfilter)) leaf_name_data.push_back(threshold_transit_all.get_name_leafdata());
    if (threshold_transit_unprotected.is_set || is_set(threshold_transit_unprotected.yfilter)) leaf_name_data.push_back(threshold_transit_unprotected.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
        lsp_oor_state.value_namespace = name_space;
        lsp_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all = value;
        threshold_transit_all.value_namespace = name_space;
        threshold_transit_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected = value;
        threshold_transit_unprotected.value_namespace = name_space;
        threshold_transit_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "accept-reopt" || name == "available-bw-percentage" || name == "lsp-oor-state" || name == "minimum-lsp-bandwidth" || name == "te-metric-penalty" || name == "threshold-transit-all" || name == "threshold-transit-unprotected" || name == "transition-duration")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::Statistics()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{

    yang_name = "statistics"; yang_parent_name = "lsp-oor-state-xr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::~Statistics()
{
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(transitions.yfilter);
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/summary/lsp-oor-state-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-ls-ps-number" || name == "rejected-reopt-ls-ps-number" || name == "transitions")
        return true;
    return false;
}

MplsTe::MaximumTunnels::MaximumTunnels()
    :
    absolute_maximum{YType::uint32, "absolute-maximum"},
    current_auto_mesh{YType::uint32, "current-auto-mesh"},
    current_autobackups{YType::uint32, "current-autobackups"},
    current_destination_count{YType::uint32, "current-destination-count"},
    current_gmpls_uni{YType::uint32, "current-gmpls-uni"},
    current_maximum_auto_mesh{YType::uint32, "current-maximum-auto-mesh"},
    current_maximum_autobackups{YType::uint32, "current-maximum-autobackups"},
    current_maximum_destinations{YType::uint32, "current-maximum-destinations"},
    current_maximum_gmpls_unitunnels{YType::uint32, "current-maximum-gmpls-unitunnels"},
    current_maximum_p2mp_destnation_per_tunnel{YType::uint32, "current-maximum-p2mp-destnation-per-tunnel"},
    current_maximum_p2mp_tunnels{YType::uint32, "current-maximum-p2mp-tunnels"},
    current_maximum_tunnels{YType::uint32, "current-maximum-tunnels"},
    current_p2mp_destnation_per_tunnel_count{YType::uint32, "current-p2mp-destnation-per-tunnel-count"},
    current_p2mp_tunnel_count{YType::uint32, "current-p2mp-tunnel-count"},
    current_tunnel_count{YType::uint32, "current-tunnel-count"},
    is_auto_mesh_range_configured{YType::boolean, "is-auto-mesh-range-configured"},
    is_autobackup_range_configured{YType::boolean, "is-autobackup-range-configured"}
{

    yang_name = "maximum-tunnels"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::MaximumTunnels::~MaximumTunnels()
{
}

bool MplsTe::MaximumTunnels::has_data() const
{
    return absolute_maximum.is_set
	|| current_auto_mesh.is_set
	|| current_autobackups.is_set
	|| current_destination_count.is_set
	|| current_gmpls_uni.is_set
	|| current_maximum_auto_mesh.is_set
	|| current_maximum_autobackups.is_set
	|| current_maximum_destinations.is_set
	|| current_maximum_gmpls_unitunnels.is_set
	|| current_maximum_p2mp_destnation_per_tunnel.is_set
	|| current_maximum_p2mp_tunnels.is_set
	|| current_maximum_tunnels.is_set
	|| current_p2mp_destnation_per_tunnel_count.is_set
	|| current_p2mp_tunnel_count.is_set
	|| current_tunnel_count.is_set
	|| is_auto_mesh_range_configured.is_set
	|| is_autobackup_range_configured.is_set;
}

bool MplsTe::MaximumTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_maximum.yfilter)
	|| ydk::is_set(current_auto_mesh.yfilter)
	|| ydk::is_set(current_autobackups.yfilter)
	|| ydk::is_set(current_destination_count.yfilter)
	|| ydk::is_set(current_gmpls_uni.yfilter)
	|| ydk::is_set(current_maximum_auto_mesh.yfilter)
	|| ydk::is_set(current_maximum_autobackups.yfilter)
	|| ydk::is_set(current_maximum_destinations.yfilter)
	|| ydk::is_set(current_maximum_gmpls_unitunnels.yfilter)
	|| ydk::is_set(current_maximum_p2mp_destnation_per_tunnel.yfilter)
	|| ydk::is_set(current_maximum_p2mp_tunnels.yfilter)
	|| ydk::is_set(current_maximum_tunnels.yfilter)
	|| ydk::is_set(current_p2mp_destnation_per_tunnel_count.yfilter)
	|| ydk::is_set(current_p2mp_tunnel_count.yfilter)
	|| ydk::is_set(current_tunnel_count.yfilter)
	|| ydk::is_set(is_auto_mesh_range_configured.yfilter)
	|| ydk::is_set(is_autobackup_range_configured.yfilter);
}

std::string MplsTe::MaximumTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::MaximumTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::MaximumTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_maximum.is_set || is_set(absolute_maximum.yfilter)) leaf_name_data.push_back(absolute_maximum.get_name_leafdata());
    if (current_auto_mesh.is_set || is_set(current_auto_mesh.yfilter)) leaf_name_data.push_back(current_auto_mesh.get_name_leafdata());
    if (current_autobackups.is_set || is_set(current_autobackups.yfilter)) leaf_name_data.push_back(current_autobackups.get_name_leafdata());
    if (current_destination_count.is_set || is_set(current_destination_count.yfilter)) leaf_name_data.push_back(current_destination_count.get_name_leafdata());
    if (current_gmpls_uni.is_set || is_set(current_gmpls_uni.yfilter)) leaf_name_data.push_back(current_gmpls_uni.get_name_leafdata());
    if (current_maximum_auto_mesh.is_set || is_set(current_maximum_auto_mesh.yfilter)) leaf_name_data.push_back(current_maximum_auto_mesh.get_name_leafdata());
    if (current_maximum_autobackups.is_set || is_set(current_maximum_autobackups.yfilter)) leaf_name_data.push_back(current_maximum_autobackups.get_name_leafdata());
    if (current_maximum_destinations.is_set || is_set(current_maximum_destinations.yfilter)) leaf_name_data.push_back(current_maximum_destinations.get_name_leafdata());
    if (current_maximum_gmpls_unitunnels.is_set || is_set(current_maximum_gmpls_unitunnels.yfilter)) leaf_name_data.push_back(current_maximum_gmpls_unitunnels.get_name_leafdata());
    if (current_maximum_p2mp_destnation_per_tunnel.is_set || is_set(current_maximum_p2mp_destnation_per_tunnel.yfilter)) leaf_name_data.push_back(current_maximum_p2mp_destnation_per_tunnel.get_name_leafdata());
    if (current_maximum_p2mp_tunnels.is_set || is_set(current_maximum_p2mp_tunnels.yfilter)) leaf_name_data.push_back(current_maximum_p2mp_tunnels.get_name_leafdata());
    if (current_maximum_tunnels.is_set || is_set(current_maximum_tunnels.yfilter)) leaf_name_data.push_back(current_maximum_tunnels.get_name_leafdata());
    if (current_p2mp_destnation_per_tunnel_count.is_set || is_set(current_p2mp_destnation_per_tunnel_count.yfilter)) leaf_name_data.push_back(current_p2mp_destnation_per_tunnel_count.get_name_leafdata());
    if (current_p2mp_tunnel_count.is_set || is_set(current_p2mp_tunnel_count.yfilter)) leaf_name_data.push_back(current_p2mp_tunnel_count.get_name_leafdata());
    if (current_tunnel_count.is_set || is_set(current_tunnel_count.yfilter)) leaf_name_data.push_back(current_tunnel_count.get_name_leafdata());
    if (is_auto_mesh_range_configured.is_set || is_set(is_auto_mesh_range_configured.yfilter)) leaf_name_data.push_back(is_auto_mesh_range_configured.get_name_leafdata());
    if (is_autobackup_range_configured.is_set || is_set(is_autobackup_range_configured.yfilter)) leaf_name_data.push_back(is_autobackup_range_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::MaximumTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::MaximumTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::MaximumTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-maximum")
    {
        absolute_maximum = value;
        absolute_maximum.value_namespace = name_space;
        absolute_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-auto-mesh")
    {
        current_auto_mesh = value;
        current_auto_mesh.value_namespace = name_space;
        current_auto_mesh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-autobackups")
    {
        current_autobackups = value;
        current_autobackups.value_namespace = name_space;
        current_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-destination-count")
    {
        current_destination_count = value;
        current_destination_count.value_namespace = name_space;
        current_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-gmpls-uni")
    {
        current_gmpls_uni = value;
        current_gmpls_uni.value_namespace = name_space;
        current_gmpls_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-auto-mesh")
    {
        current_maximum_auto_mesh = value;
        current_maximum_auto_mesh.value_namespace = name_space;
        current_maximum_auto_mesh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-autobackups")
    {
        current_maximum_autobackups = value;
        current_maximum_autobackups.value_namespace = name_space;
        current_maximum_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-destinations")
    {
        current_maximum_destinations = value;
        current_maximum_destinations.value_namespace = name_space;
        current_maximum_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-gmpls-unitunnels")
    {
        current_maximum_gmpls_unitunnels = value;
        current_maximum_gmpls_unitunnels.value_namespace = name_space;
        current_maximum_gmpls_unitunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-p2mp-destnation-per-tunnel")
    {
        current_maximum_p2mp_destnation_per_tunnel = value;
        current_maximum_p2mp_destnation_per_tunnel.value_namespace = name_space;
        current_maximum_p2mp_destnation_per_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-p2mp-tunnels")
    {
        current_maximum_p2mp_tunnels = value;
        current_maximum_p2mp_tunnels.value_namespace = name_space;
        current_maximum_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-tunnels")
    {
        current_maximum_tunnels = value;
        current_maximum_tunnels.value_namespace = name_space;
        current_maximum_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-p2mp-destnation-per-tunnel-count")
    {
        current_p2mp_destnation_per_tunnel_count = value;
        current_p2mp_destnation_per_tunnel_count.value_namespace = name_space;
        current_p2mp_destnation_per_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-p2mp-tunnel-count")
    {
        current_p2mp_tunnel_count = value;
        current_p2mp_tunnel_count.value_namespace = name_space;
        current_p2mp_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-tunnel-count")
    {
        current_tunnel_count = value;
        current_tunnel_count.value_namespace = name_space;
        current_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-range-configured")
    {
        is_auto_mesh_range_configured = value;
        is_auto_mesh_range_configured.value_namespace = name_space;
        is_auto_mesh_range_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-autobackup-range-configured")
    {
        is_autobackup_range_configured = value;
        is_autobackup_range_configured.value_namespace = name_space;
        is_autobackup_range_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::MaximumTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-maximum")
    {
        absolute_maximum.yfilter = yfilter;
    }
    if(value_path == "current-auto-mesh")
    {
        current_auto_mesh.yfilter = yfilter;
    }
    if(value_path == "current-autobackups")
    {
        current_autobackups.yfilter = yfilter;
    }
    if(value_path == "current-destination-count")
    {
        current_destination_count.yfilter = yfilter;
    }
    if(value_path == "current-gmpls-uni")
    {
        current_gmpls_uni.yfilter = yfilter;
    }
    if(value_path == "current-maximum-auto-mesh")
    {
        current_maximum_auto_mesh.yfilter = yfilter;
    }
    if(value_path == "current-maximum-autobackups")
    {
        current_maximum_autobackups.yfilter = yfilter;
    }
    if(value_path == "current-maximum-destinations")
    {
        current_maximum_destinations.yfilter = yfilter;
    }
    if(value_path == "current-maximum-gmpls-unitunnels")
    {
        current_maximum_gmpls_unitunnels.yfilter = yfilter;
    }
    if(value_path == "current-maximum-p2mp-destnation-per-tunnel")
    {
        current_maximum_p2mp_destnation_per_tunnel.yfilter = yfilter;
    }
    if(value_path == "current-maximum-p2mp-tunnels")
    {
        current_maximum_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "current-maximum-tunnels")
    {
        current_maximum_tunnels.yfilter = yfilter;
    }
    if(value_path == "current-p2mp-destnation-per-tunnel-count")
    {
        current_p2mp_destnation_per_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "current-p2mp-tunnel-count")
    {
        current_p2mp_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "current-tunnel-count")
    {
        current_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-range-configured")
    {
        is_auto_mesh_range_configured.yfilter = yfilter;
    }
    if(value_path == "is-autobackup-range-configured")
    {
        is_autobackup_range_configured.yfilter = yfilter;
    }
}

bool MplsTe::MaximumTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-maximum" || name == "current-auto-mesh" || name == "current-autobackups" || name == "current-destination-count" || name == "current-gmpls-uni" || name == "current-maximum-auto-mesh" || name == "current-maximum-autobackups" || name == "current-maximum-destinations" || name == "current-maximum-gmpls-unitunnels" || name == "current-maximum-p2mp-destnation-per-tunnel" || name == "current-maximum-p2mp-tunnels" || name == "current-maximum-tunnels" || name == "current-p2mp-destnation-per-tunnel-count" || name == "current-p2mp-tunnel-count" || name == "current-tunnel-count" || name == "is-auto-mesh-range-configured" || name == "is-autobackup-range-configured")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoutes()
{

    yang_name = "next-hop-routes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::~NextHopRoutes()
{
}

bool MplsTe::NextHopRoutes::has_data() const
{
    for (std::size_t index=0; index<next_hop_route.size(); index++)
    {
        if(next_hop_route[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NextHopRoutes::has_operation() const
{
    for (std::size_t index=0; index<next_hop_route.size(); index++)
    {
        if(next_hop_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NextHopRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-route")
    {
        for(auto const & c : next_hop_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute>();
        c->parent = this;
        next_hop_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NextHopRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NextHopRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NextHopRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-route")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::NextHopRoute()
    :
    create_time{YType::uint32, "create-time"},
    exact_match{YType::boolean, "exact-match"},
    expire_time{YType::uint32, "expire-time"},
    installed_tunnel_path_num{YType::uint32, "installed-tunnel-path-num"},
    last_used_time{YType::uint32, "last-used-time"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    prefix_address{YType::str, "prefix-address"},
    prefix_address_xr{YType::str, "prefix-address-xr"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"}
    	,
    active_route(std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute>())
	,backup_route(std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute>())
{
    active_route->parent = this;
    backup_route->parent = this;

    yang_name = "next-hop-route"; yang_parent_name = "next-hop-routes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::~NextHopRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::has_data() const
{
    for (std::size_t index=0; index<tunnel_path.size(); index++)
    {
        if(tunnel_path[index]->has_data())
            return true;
    }
    return create_time.is_set
	|| exact_match.is_set
	|| expire_time.is_set
	|| installed_tunnel_path_num.is_set
	|| last_used_time.is_set
	|| next_hop_type.is_set
	|| prefix_address.is_set
	|| prefix_address_xr.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (active_route !=  nullptr && active_route->has_data())
	|| (backup_route !=  nullptr && backup_route->has_data());
}

bool MplsTe::NextHopRoutes::NextHopRoute::has_operation() const
{
    for (std::size_t index=0; index<tunnel_path.size(); index++)
    {
        if(tunnel_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(exact_match.yfilter)
	|| ydk::is_set(expire_time.yfilter)
	|| ydk::is_set(installed_tunnel_path_num.yfilter)
	|| ydk::is_set(last_used_time.yfilter)
	|| ydk::is_set(next_hop_type.yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_address_xr.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| (active_route !=  nullptr && active_route->has_operation())
	|| (backup_route !=  nullptr && backup_route->has_operation());
}

std::string MplsTe::NextHopRoutes::NextHopRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (exact_match.is_set || is_set(exact_match.yfilter)) leaf_name_data.push_back(exact_match.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (installed_tunnel_path_num.is_set || is_set(installed_tunnel_path_num.yfilter)) leaf_name_data.push_back(installed_tunnel_path_num.get_name_leafdata());
    if (last_used_time.is_set || is_set(last_used_time.yfilter)) leaf_name_data.push_back(last_used_time.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_address_xr.is_set || is_set(prefix_address_xr.yfilter)) leaf_name_data.push_back(prefix_address_xr.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-route")
    {
        if(active_route == nullptr)
        {
            active_route = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute>();
        }
        return active_route;
    }

    if(child_yang_name == "backup-route")
    {
        if(backup_route == nullptr)
        {
            backup_route = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute>();
        }
        return backup_route;
    }

    if(child_yang_name == "tunnel-path")
    {
        for(auto const & c : tunnel_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::TunnelPath>();
        c->parent = this;
        tunnel_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_route != nullptr)
    {
        children["active-route"] = active_route;
    }

    if(backup_route != nullptr)
    {
        children["backup-route"] = backup_route;
    }

    for (auto const & c : tunnel_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-match")
    {
        exact_match = value;
        exact_match.value_namespace = name_space;
        exact_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-tunnel-path-num")
    {
        installed_tunnel_path_num = value;
        installed_tunnel_path_num.value_namespace = name_space;
        installed_tunnel_path_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-used-time")
    {
        last_used_time = value;
        last_used_time.value_namespace = name_space;
        last_used_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-address-xr")
    {
        prefix_address_xr = value;
        prefix_address_xr.value_namespace = name_space;
        prefix_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "exact-match")
    {
        exact_match.yfilter = yfilter;
    }
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
    if(value_path == "installed-tunnel-path-num")
    {
        installed_tunnel_path_num.yfilter = yfilter;
    }
    if(value_path == "last-used-time")
    {
        last_used_time.yfilter = yfilter;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-address-xr")
    {
        prefix_address_xr.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-route" || name == "backup-route" || name == "tunnel-path" || name == "create-time" || name == "exact-match" || name == "expire-time" || name == "installed-tunnel-path-num" || name == "last-used-time" || name == "next-hop-type" || name == "prefix-address" || name == "prefix-address-xr" || name == "prefix-length" || name == "prefix-length-xr")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::ActiveRoute()
    :
    is_connected{YType::boolean, "is-connected"},
    is_default{YType::boolean, "is-default"},
    is_populated{YType::boolean, "is-populated"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    route_distance{YType::uint32, "route-distance"},
    route_metric{YType::uint32, "route-metric"},
    route_protocol_name{YType::str, "route-protocol-name"},
    route_type{YType::uint16, "route-type"}
{

    yang_name = "active-route"; yang_parent_name = "next-hop-route"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::~ActiveRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return is_connected.is_set
	|| is_default.is_set
	|| is_populated.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| route_distance.is_set
	|| route_metric.is_set
	|| route_protocol_name.is_set
	|| route_type.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_populated.yfilter)
	|| ydk::is_set(is_registered.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(route_distance.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_protocol_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_populated.is_set || is_set(is_populated.yfilter)) leaf_name_data.push_back(is_populated.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.yfilter)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.yfilter)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_protocol_name.is_set || is_set(route_protocol_name.yfilter)) leaf_name_data.push_back(route_protocol_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-populated")
    {
        is_populated = value;
        is_populated.value_namespace = name_space;
        is_populated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
        is_registered.value_namespace = name_space;
        is_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
        route_distance.value_namespace = name_space;
        route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name = value;
        route_protocol_name.value_namespace = name_space;
        route_protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-populated")
    {
        is_populated.yfilter = yfilter;
    }
    if(value_path == "is-registered")
    {
        is_registered.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "route-distance")
    {
        route_distance.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-path" || name == "is-connected" || name == "is-default" || name == "is-populated" || name == "is-registered" || name == "is-stale" || name == "last-update-time" || name == "route-distance" || name == "route-metric" || name == "route-protocol-name" || name == "route-type")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::NextHopPath()
    :
    abr_address{YType::str, "abr-address"},
    address{YType::str, "address"},
    interface{YType::str, "interface"}
{

    yang_name = "next-hop-path"; yang_parent_name = "active-route"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::has_data() const
{
    return abr_address.is_set
	|| address.is_set
	|| interface.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_address.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/active-route/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_address.is_set || is_set(abr_address.yfilter)) leaf_name_data.push_back(abr_address.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-address")
    {
        abr_address = value;
        abr_address.value_namespace = name_space;
        abr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-address")
    {
        abr_address.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-address" || name == "address" || name == "interface")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::BackupRoute()
    :
    is_connected{YType::boolean, "is-connected"},
    is_default{YType::boolean, "is-default"},
    is_populated{YType::boolean, "is-populated"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    route_distance{YType::uint32, "route-distance"},
    route_metric{YType::uint32, "route-metric"},
    route_protocol_name{YType::str, "route-protocol-name"},
    route_type{YType::uint16, "route-type"}
{

    yang_name = "backup-route"; yang_parent_name = "next-hop-route"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::~BackupRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return is_connected.is_set
	|| is_default.is_set
	|| is_populated.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| route_distance.is_set
	|| route_metric.is_set
	|| route_protocol_name.is_set
	|| route_type.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_populated.yfilter)
	|| ydk::is_set(is_registered.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(route_distance.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_protocol_name.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_populated.is_set || is_set(is_populated.yfilter)) leaf_name_data.push_back(is_populated.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.yfilter)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.yfilter)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_protocol_name.is_set || is_set(route_protocol_name.yfilter)) leaf_name_data.push_back(route_protocol_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-populated")
    {
        is_populated = value;
        is_populated.value_namespace = name_space;
        is_populated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
        is_registered.value_namespace = name_space;
        is_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
        route_distance.value_namespace = name_space;
        route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name = value;
        route_protocol_name.value_namespace = name_space;
        route_protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-populated")
    {
        is_populated.yfilter = yfilter;
    }
    if(value_path == "is-registered")
    {
        is_registered.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "route-distance")
    {
        route_distance.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-path" || name == "is-connected" || name == "is-default" || name == "is-populated" || name == "is-registered" || name == "is-stale" || name == "last-update-time" || name == "route-distance" || name == "route-metric" || name == "route-protocol-name" || name == "route-type")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::NextHopPath()
    :
    abr_address{YType::str, "abr-address"},
    address{YType::str, "address"},
    interface{YType::str, "interface"}
{

    yang_name = "next-hop-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::has_data() const
{
    return abr_address.is_set
	|| address.is_set
	|| interface.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_address.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/backup-route/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_address.is_set || is_set(abr_address.yfilter)) leaf_name_data.push_back(abr_address.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-address")
    {
        abr_address = value;
        abr_address.value_namespace = name_space;
        abr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-address")
    {
        abr_address.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-address" || name == "address" || name == "interface")
        return true;
    return false;
}

MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::TunnelPath()
    :
    install_time{YType::uint32, "install-time"},
    installed_metric{YType::uint32, "installed-metric"},
    interface_handle{YType::str, "interface-handle"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "tunnel-path"; yang_parent_name = "next-hop-route"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::~TunnelPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::has_data() const
{
    return install_time.is_set
	|| installed_metric.is_set
	|| interface_handle.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_time.yfilter)
	|| ydk::is_set(installed_metric.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_time.is_set || is_set(install_time.yfilter)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (installed_metric.is_set || is_set(installed_metric.yfilter)) leaf_name_data.push_back(installed_metric.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-time")
    {
        install_time = value;
        install_time.value_namespace = name_space;
        install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-metric")
    {
        installed_metric = value;
        installed_metric.value_namespace = name_space;
        installed_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install-time")
    {
        install_time.yfilter = yfilter;
    }
    if(value_path == "installed-metric")
    {
        installed_metric.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-time" || name == "installed-metric" || name == "interface-handle" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::Nsr::Nsr()
    :
    detail(std::make_shared<MplsTe::Nsr::Detail>())
	,status(std::make_shared<MplsTe::Nsr::Status>())
{
    detail->parent = this;
    status->parent = this;

    yang_name = "nsr"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::~Nsr()
{
}

bool MplsTe::Nsr::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTe::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTe::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTe::Nsr::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTe::Nsr::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::get_children() const
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

void MplsTe::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "status")
        return true;
    return false;
}

MplsTe::Nsr::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::~Detail()
{
}

bool MplsTe::Nsr::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Nsr::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Nsr::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Nsr::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::get_children() const
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

void MplsTe::Nsr::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-sync-information" || name == "slave-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
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
        auto c = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
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
        auto c = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "s2l-pending" || name == "vif-pending" || name == "insync-sub-ls-ps" || name == "insync-tunnels" || name == "pending-sub-ls-ps" || name == "pending-tunnels")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(s2l_role.yfilter)
	|| ydk::is_set(signaled_name.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "s2l-role" || name == "signaled-name")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::~Status()
{
}

bool MplsTe::Nsr::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Nsr::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Nsr::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Nsr::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::get_children() const
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

void MplsTe::Nsr::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-sync-information" || name == "slave-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
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
        auto c = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
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
        auto c = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "s2l-pending" || name == "vif-pending" || name == "insync-sub-ls-ps" || name == "insync-tunnels" || name == "pending-sub-ls-ps" || name == "pending-tunnels")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(s2l_role.yfilter)
	|| ydk::is_set(signaled_name.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "s2l-role" || name == "signaled-name")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::OpenConfig::OpenConfig()
    :
    lsp_counters(std::make_shared<MplsTe::OpenConfig::LspCounters>())
	,lsp_states(std::make_shared<MplsTe::OpenConfig::LspStates>())
{
    lsp_counters->parent = this;
    lsp_states->parent = this;

    yang_name = "open-config"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::~OpenConfig()
{
}

bool MplsTe::OpenConfig::has_data() const
{
    return (lsp_counters !=  nullptr && lsp_counters->has_data())
	|| (lsp_states !=  nullptr && lsp_states->has_data());
}

bool MplsTe::OpenConfig::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_counters !=  nullptr && lsp_counters->has_operation())
	|| (lsp_states !=  nullptr && lsp_states->has_operation());
}

std::string MplsTe::OpenConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-counters")
    {
        if(lsp_counters == nullptr)
        {
            lsp_counters = std::make_shared<MplsTe::OpenConfig::LspCounters>();
        }
        return lsp_counters;
    }

    if(child_yang_name == "lsp-states")
    {
        if(lsp_states == nullptr)
        {
            lsp_states = std::make_shared<MplsTe::OpenConfig::LspStates>();
        }
        return lsp_states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_counters != nullptr)
    {
        children["lsp-counters"] = lsp_counters;
    }

    if(lsp_states != nullptr)
    {
        children["lsp-states"] = lsp_states;
    }

    return children;
}

void MplsTe::OpenConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-counters" || name == "lsp-states")
        return true;
    return false;
}

MplsTe::OpenConfig::LspCounters::LspCounters()
{

    yang_name = "lsp-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspCounters::~LspCounters()
{
}

bool MplsTe::OpenConfig::LspCounters::has_data() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::OpenConfig::LspCounters::has_operation() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::OpenConfig::LspCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-counter")
    {
        for(auto const & c : lsp_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::OpenConfig::LspCounters::LspCounter>();
        c->parent = this;
        lsp_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::OpenConfig::LspCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::LspCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::LspCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-counter")
        return true;
    return false;
}

MplsTe::OpenConfig::LspCounters::LspCounter::LspCounter()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    bytes{YType::uint64, "bytes"},
    current_path_time{YType::str, "current-path-time"},
    name{YType::str, "name"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"},
    online_time{YType::str, "online-time"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"},
    type{YType::enumeration, "type"}
{

    yang_name = "lsp-counter"; yang_parent_name = "lsp-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspCounters::LspCounter::~LspCounter()
{
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| bytes.is_set
	|| current_path_time.is_set
	|| name.is_set
	|| next_reoptimization_time.is_set
	|| online_time.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set
	|| type.is_set;
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(current_path_time.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(next_reoptimization_time.yfilter)
	|| ydk::is_set(online_time.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(path_changes.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTe::OpenConfig::LspCounters::LspCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/lsp-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspCounters::LspCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counter" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspCounters::LspCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.yfilter)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.yfilter)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.yfilter)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.yfilter)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspCounters::LspCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspCounters::LspCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::OpenConfig::LspCounters::LspCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
        current_path_time.value_namespace = name_space;
        current_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
        next_reoptimization_time.value_namespace = name_space;
        next_reoptimization_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "online-time")
    {
        online_time = value;
        online_time.value_namespace = name_space;
        online_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
        path_changes.value_namespace = name_space;
        path_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::OpenConfig::LspCounters::LspCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "current-path-time")
    {
        current_path_time.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time.yfilter = yfilter;
    }
    if(value_path == "online-time")
    {
        online_time.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "path-changes")
    {
        path_changes.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "tunnel-type" || name == "bytes" || name == "current-path-time" || name == "name" || name == "next-reoptimization-time" || name == "online-time" || name == "packets" || name == "path-changes" || name == "state-changes" || name == "type")
        return true;
    return false;
}

MplsTe::OpenConfig::LspStates::LspStates()
{

    yang_name = "lsp-states"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspStates::~LspStates()
{
}

bool MplsTe::OpenConfig::LspStates::has_data() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::OpenConfig::LspStates::has_operation() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::OpenConfig::LspStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-state")
    {
        for(auto const & c : lsp_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::OpenConfig::LspStates::LspState>();
        c->parent = this;
        lsp_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::OpenConfig::LspStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::LspStates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::LspStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state")
        return true;
    return false;
}

MplsTe::OpenConfig::LspStates::LspState::LspState()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    hold_priority{YType::uint8, "hold-priority"},
    local_id{YType::uint32, "local-id"},
    metric{YType::enumeration, "metric"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"},
    protection_style_requested{YType::enumeration, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    role{YType::enumeration, "role"},
    setup_priority{YType::uint8, "setup-priority"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    soft_preemption{YType::boolean, "soft-preemption"},
    source{YType::str, "source"},
    type{YType::enumeration, "type"}
{

    yang_name = "lsp-state"; yang_parent_name = "lsp-states"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspStates::LspState::~LspState()
{
}

bool MplsTe::OpenConfig::LspStates::LspState::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| oper_status.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| role.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set;
}

bool MplsTe::OpenConfig::LspStates::LspState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTe::OpenConfig::LspStates::LspState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/lsp-states/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspStates::LspState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-state" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspStates::LspState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspStates::LspState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspStates::LspState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::OpenConfig::LspStates::LspState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::OpenConfig::LspStates::LspState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::OpenConfig::LspStates::LspState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "tunnel-type" || name == "admin-status" || name == "description" || name == "hold-priority" || name == "local-id" || name == "metric" || name == "name" || name == "oper-status" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "role" || name == "setup-priority" || name == "signaling-protocol" || name == "soft-preemption" || name == "source" || name == "type")
        return true;
    return false;
}

MplsTe::P2Mp::P2Mp()
    :
    collaborator_timers(std::make_shared<MplsTe::P2Mp::CollaboratorTimers>())
	,forwarding_output_label_rewrites(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites>())
	,tunnel_rewrites(std::make_shared<MplsTe::P2Mp::TunnelRewrites>())
{
    collaborator_timers->parent = this;
    forwarding_output_label_rewrites->parent = this;
    tunnel_rewrites->parent = this;

    yang_name = "p2mp"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::~P2Mp()
{
}

bool MplsTe::P2Mp::has_data() const
{
    return (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (forwarding_output_label_rewrites !=  nullptr && forwarding_output_label_rewrites->has_data())
	|| (tunnel_rewrites !=  nullptr && tunnel_rewrites->has_data());
}

bool MplsTe::P2Mp::has_operation() const
{
    return is_set(yfilter)
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (forwarding_output_label_rewrites !=  nullptr && forwarding_output_label_rewrites->has_operation())
	|| (tunnel_rewrites !=  nullptr && tunnel_rewrites->has_operation());
}

std::string MplsTe::P2Mp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers == nullptr)
        {
            collaborator_timers = std::make_shared<MplsTe::P2Mp::CollaboratorTimers>();
        }
        return collaborator_timers;
    }

    if(child_yang_name == "forwarding-output-label-rewrites")
    {
        if(forwarding_output_label_rewrites == nullptr)
        {
            forwarding_output_label_rewrites = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites>();
        }
        return forwarding_output_label_rewrites;
    }

    if(child_yang_name == "tunnel-rewrites")
    {
        if(tunnel_rewrites == nullptr)
        {
            tunnel_rewrites = std::make_shared<MplsTe::P2Mp::TunnelRewrites>();
        }
        return tunnel_rewrites;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collaborator_timers != nullptr)
    {
        children["collaborator-timers"] = collaborator_timers;
    }

    if(forwarding_output_label_rewrites != nullptr)
    {
        children["forwarding-output-label-rewrites"] = forwarding_output_label_rewrites;
    }

    if(tunnel_rewrites != nullptr)
    {
        children["tunnel-rewrites"] = tunnel_rewrites;
    }

    return children;
}

void MplsTe::P2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-timers" || name == "forwarding-output-label-rewrites" || name == "tunnel-rewrites")
        return true;
    return false;
}

MplsTe::P2Mp::CollaboratorTimers::CollaboratorTimers()
{

    yang_name = "collaborator-timers"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTe::P2Mp::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2Mp::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2Mp::CollaboratorTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::CollaboratorTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2Mp::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2mp_timer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    duration{YType::uint32, "duration"},
    expiry_time{YType::uint32, "expiry-time"},
    is_running{YType::boolean, "is-running"},
    start_time{YType::uint32, "start-time"},
    stop_time{YType::uint32, "stop-time"},
    timer_name{YType::str, "timer-name"},
    timer_type{YType::enumeration, "timer-type"}
{

    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(is_running.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(stop_time.yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/collaborator-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "expiry-time" || name == "is-running" || name == "start-time" || name == "stop-time" || name == "timer-name" || name == "timer-type")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrites()
{

    yang_name = "forwarding-output-label-rewrites"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::~ForwardingOutputLabelRewrites()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_data() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_operation() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-output-label-rewrite")
    {
        for(auto const & c : forwarding_output_label_rewrite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite>();
        c->parent = this;
        forwarding_output_label_rewrite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_output_label_rewrite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-output-label-rewrite")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::ForwardingOutputLabelRewrite()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    source_address{YType::str, "source-address"},
    p2mp_id{YType::int32, "p2mp-id"},
    destination_address{YType::str, "destination-address"},
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    ctype{YType::enumeration, "ctype"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"}
    	,
    s2l_output_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>())
{
    s2l_output_rewrite->parent = this;

    yang_name = "forwarding-output-label-rewrite"; yang_parent_name = "forwarding-output-label-rewrites"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::~ForwardingOutputLabelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.size(); index++)
    {
        if(s2lsr_path[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| extended_tunnel_id.is_set
	|| source_address.is_set
	|| p2mp_id.is_set
	|| destination_address.is_set
	|| next_hop_address.is_set
	|| previous_hop_address.is_set
	|| ctype.is_set
	|| backup_tunnel_name.is_set
	|| is_segment_routing.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.size(); index++)
    {
        if(s2lsr_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/forwarding-output-label-rewrites/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrite" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[previous-hop-address='" <<previous_hop_address <<"']" <<"[ctype='" <<ctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L>();
        c->parent = this;
        s2l.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-output-rewrite")
    {
        if(s2l_output_rewrite == nullptr)
        {
            s2l_output_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>();
        }
        return s2l_output_rewrite;
    }

    if(child_yang_name == "s2lsr-path")
    {
        for(auto const & c : s2lsr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath>();
        c->parent = this;
        s2lsr_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l)
    {
        children[c->get_segment_path()] = c;
    }

    if(s2l_output_rewrite != nullptr)
    {
        children["s2l-output-rewrite"] = s2l_output_rewrite;
    }

    for (auto const & c : s2lsr_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l" || name == "s2l-output-rewrite" || name == "s2lsr-path" || name == "tunnel-id" || name == "lsp-id" || name == "extended-tunnel-id" || name == "source-address" || name == "p2mp-id" || name == "destination-address" || name == "next-hop-address" || name == "previous-hop-address" || name == "ctype" || name == "backup-tunnel-name" || name == "is-segment-routing" || name == "original-input-interface" || name == "output-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::S2L()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_original_id{YType::str, "sub-group-original-id"}
{

    yang_name = "s2l"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::~S2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_original_id.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "sub-group-id" || name == "sub-group-original-id")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::S2LOutputRewrite()
    :
    failed_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>())
	,pending_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>())
	,subfamily(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>())
	,successful_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>())
{
    failed_rewrite->parent = this;
    pending_rewrite->parent = this;
    subfamily->parent = this;
    successful_rewrite->parent = this;

    yang_name = "s2l-output-rewrite"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::~S2LOutputRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_data() const
{
    return (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data())
	|| (subfamily !=  nullptr && subfamily->has_data())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_operation() const
{
    return is_set(yfilter)
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation())
	|| (subfamily !=  nullptr && subfamily->has_operation())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-output-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite == nullptr)
        {
            failed_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>();
        }
        return failed_rewrite;
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite == nullptr)
        {
            pending_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>();
        }
        return pending_rewrite;
    }

    if(child_yang_name == "subfamily")
    {
        if(subfamily == nullptr)
        {
            subfamily = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>();
        }
        return subfamily;
    }

    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite == nullptr)
        {
            successful_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>();
        }
        return successful_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failed_rewrite != nullptr)
    {
        children["failed-rewrite"] = failed_rewrite;
    }

    if(pending_rewrite != nullptr)
    {
        children["pending-rewrite"] = pending_rewrite;
    }

    if(subfamily != nullptr)
    {
        children["subfamily"] = subfamily;
    }

    if(successful_rewrite != nullptr)
    {
        children["successful-rewrite"] = successful_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failed-rewrite" || name == "pending-rewrite" || name == "subfamily" || name == "successful-rewrite")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::FailedRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "failed-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "explicit-null" || name == "label" || name == "out-rewrite-role" || name == "protocol-transported" || name == "s2l-source" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PendingRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "explicit-null" || name == "label" || name == "out-rewrite-role" || name == "protocol-transported" || name == "s2l-source" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::Subfamily()
    :
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "subfamily"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::~Subfamily()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_data() const
{
    return next_hop_address.is_set
	|| previous_hop_address.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subfamily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "next-hop-address" || name == "previous-hop-address")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "subfamily"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::~LspFec()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "successful-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "explicit-null" || name == "label" || name == "out-rewrite-role" || name == "protocol-transported" || name == "s2l-source" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::S2LsrPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    is_backup{YType::boolean, "is-backup"},
    is_primary{YType::boolean, "is-primary"},
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"},
    path_id{YType::uint32, "path-id"}
{

    yang_name = "s2lsr-path"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::~S2LsrPath()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_data() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_data())
            return true;
    }
    return backup_path_id.is_set
	|| is_backup.is_set
	|| is_primary.is_set
	|| next_hop.is_set
	|| outgoing_interface.is_set
	|| path_id.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_operation() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(is_backup.yfilter)
	|| ydk::is_set(is_primary.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2lsr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (is_backup.is_set || is_set(is_backup.yfilter)) leaf_name_data.push_back(is_backup.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.yfilter)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-labels-stack")
    {
        for(auto const & c : outgoing_labels_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack>();
        c->parent = this;
        outgoing_labels_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : outgoing_labels_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backup")
    {
        is_backup = value;
        is_backup.value_namespace = name_space;
        is_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
        is_primary.value_namespace = name_space;
        is_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "is-backup")
    {
        is_backup.yfilter = yfilter;
    }
    if(value_path == "is-primary")
    {
        is_primary.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-labels-stack" || name == "backup-path-id" || name == "is-backup" || name == "is-primary" || name == "next-hop" || name == "outgoing-interface" || name == "path-id")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::OutgoingLabelsStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "outgoing-labels-stack"; yang_parent_name = "s2lsr-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::~OutgoingLabelsStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-labels-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrites()
{

    yang_name = "tunnel-rewrites"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::TunnelRewrites::~TunnelRewrites()
{
}

bool MplsTe::P2Mp::TunnelRewrites::has_data() const
{
    for (std::size_t index=0; index<tunnel_rewrite.size(); index++)
    {
        if(tunnel_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2Mp::TunnelRewrites::has_operation() const
{
    for (std::size_t index=0; index<tunnel_rewrite.size(); index++)
    {
        if(tunnel_rewrite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::TunnelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        for(auto const & c : tunnel_rewrite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite>();
        c->parent = this;
        tunnel_rewrite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_rewrite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::TunnelRewrites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::TunnelRewrites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::TunnelRewrite()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    ctype{YType::enumeration, "ctype"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_signal_name{YType::str, "tunnel-signal-name"}
    	,
    failed_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite>())
	,pending_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite>())
	,successful_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite>())
{
    failed_rewrite->parent = this;
    pending_rewrite->parent = this;
    successful_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "tunnel-rewrites"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::~TunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::has_data() const
{
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| ctype.is_set
	|| is_segment_routing.is_set
	|| tunnel_interface.is_set
	|| tunnel_signal_name.is_set
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tunnel_signal_name.yfilter)
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/tunnel-rewrites/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[ctype='" <<ctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_signal_name.is_set || is_set(tunnel_signal_name.yfilter)) leaf_name_data.push_back(tunnel_signal_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite == nullptr)
        {
            failed_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite>();
        }
        return failed_rewrite;
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite == nullptr)
        {
            pending_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite>();
        }
        return pending_rewrite;
    }

    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite == nullptr)
        {
            successful_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite>();
        }
        return successful_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failed_rewrite != nullptr)
    {
        children["failed-rewrite"] = failed_rewrite;
    }

    if(pending_rewrite != nullptr)
    {
        children["pending-rewrite"] = pending_rewrite;
    }

    if(successful_rewrite != nullptr)
    {
        children["successful-rewrite"] = successful_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-signal-name")
    {
        tunnel_signal_name = value;
        tunnel_signal_name.value_namespace = name_space;
        tunnel_signal_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-signal-name")
    {
        tunnel_signal_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failed-rewrite" || name == "pending-rewrite" || name == "successful-rewrite" || name == "tunnel-id" || name == "lsp-id" || name == "ctype" || name == "is-segment-routing" || name == "tunnel-interface" || name == "tunnel-signal-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::FailedRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
    	,
    tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "failed-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_data() const
{
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_rewrite != nullptr)
    {
        children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
	,p2p_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite>())
{
    p2mp_tunnel_rewrite->parent = this;
    p2p_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_tunnel_rewrite != nullptr)
    {
        children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    if(p2p_tunnel_rewrite != nullptr)
    {
        children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-tunnel-rewrite" || name == "p2p-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    local_label{YType::uint32, "local-label"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_pe{YType::str, "source-pe"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return backup_active.is_set
	|| backup_tunnel_name.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| local_label.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| previous_hop_address.is_set
	|| source_pe.is_set
	|| tunnel_id.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "backup-tunnel-name" || name == "destination-address" || name == "extended-tunnel-id" || name == "local-label" || name == "original-input-interface" || name == "output-interface-name" || name == "previous-hop-address" || name == "source-pe" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
    	,
    tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_data() const
{
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_rewrite != nullptr)
    {
        children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
	,p2p_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>())
{
    p2mp_tunnel_rewrite->parent = this;
    p2p_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_tunnel_rewrite != nullptr)
    {
        children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    if(p2p_tunnel_rewrite != nullptr)
    {
        children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-tunnel-rewrite" || name == "p2p-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    local_label{YType::uint32, "local-label"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_pe{YType::str, "source-pe"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return backup_active.is_set
	|| backup_tunnel_name.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| local_label.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| previous_hop_address.is_set
	|| source_pe.is_set
	|| tunnel_id.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "backup-tunnel-name" || name == "destination-address" || name == "extended-tunnel-id" || name == "local-label" || name == "original-input-interface" || name == "output-interface-name" || name == "previous-hop-address" || name == "source-pe" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
    	,
    tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "successful-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_data() const
{
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_rewrite != nullptr)
    {
        children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
	,p2p_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite>())
{
    p2mp_tunnel_rewrite->parent = this;
    p2p_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_tunnel_rewrite != nullptr)
    {
        children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    if(p2p_tunnel_rewrite != nullptr)
    {
        children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-tunnel-rewrite" || name == "p2p-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    local_label{YType::uint32, "local-label"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_pe{YType::str, "source-pe"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    primary_s2l->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return backup_active.is_set
	|| backup_tunnel_name.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| local_label.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| previous_hop_address.is_set
	|| source_pe.is_set
	|| tunnel_id.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-rewrite" || name == "primary-s2l" || name == "backup-active" || name == "backup-tunnel-name" || name == "destination-address" || name == "extended-tunnel-id" || name == "local-label" || name == "original-input-interface" || name == "output-interface-name" || name == "previous-hop-address" || name == "source-pe" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        for(auto const & c : sr_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "next-hop-address" || name == "out-label" || name == "parent-interface-name" || name == "physica-interface-name" || name == "tunnel-interface-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::P2PP2MpTunnel()
    :
    nni_tunnels(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels>())
	,tunnel_heads(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads>())
	,tunnel_remote_briefs(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs>())
	,tunnel_remotes(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes>())
{
    nni_tunnels->parent = this;
    tunnel_heads->parent = this;
    tunnel_remote_briefs->parent = this;
    tunnel_remotes->parent = this;

    yang_name = "p2p-p2mp-tunnel"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2PP2MpTunnel::~P2PP2MpTunnel()
{
}

bool MplsTe::P2PP2MpTunnel::has_data() const
{
    return (nni_tunnels !=  nullptr && nni_tunnels->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data())
	|| (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_data())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_data());
}

bool MplsTe::P2PP2MpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (nni_tunnels !=  nullptr && nni_tunnels->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation())
	|| (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_operation())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2PP2MpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-p2mp-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni-tunnels")
    {
        if(nni_tunnels == nullptr)
        {
            nni_tunnels = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels>();
        }
        return nni_tunnels;
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads == nullptr)
        {
            tunnel_heads = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads>();
        }
        return tunnel_heads;
    }

    if(child_yang_name == "tunnel-remote-briefs")
    {
        if(tunnel_remote_briefs == nullptr)
        {
            tunnel_remote_briefs = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs>();
        }
        return tunnel_remote_briefs;
    }

    if(child_yang_name == "tunnel-remotes")
    {
        if(tunnel_remotes == nullptr)
        {
            tunnel_remotes = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes>();
        }
        return tunnel_remotes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nni_tunnels != nullptr)
    {
        children["nni-tunnels"] = nni_tunnels;
    }

    if(tunnel_heads != nullptr)
    {
        children["tunnel-heads"] = tunnel_heads;
    }

    if(tunnel_remote_briefs != nullptr)
    {
        children["tunnel-remote-briefs"] = tunnel_remote_briefs;
    }

    if(tunnel_remotes != nullptr)
    {
        children["tunnel-remotes"] = tunnel_remotes;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni-tunnels" || name == "tunnel-heads" || name == "tunnel-remote-briefs" || name == "tunnel-remotes")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnels()
{

    yang_name = "nni-tunnels"; yang_parent_name = "p2p-p2mp-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::~NniTunnels()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::has_data() const
{
    for (std::size_t index=0; index<nni_tunnel.size(); index++)
    {
        if(nni_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::has_operation() const
{
    for (std::size_t index=0; index<nni_tunnel.size(); index++)
    {
        if(nni_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni-tunnel")
    {
        for(auto const & c : nni_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel>();
        c->parent = this;
        nni_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nni_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::NniTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni-tunnel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::NniTunnel()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    admin_state{YType::enumeration, "admin-state"},
    affinity_failure_delayed_tear_time_remained{YType::uint32, "affinity-failure-delayed-tear-time-remained"},
    affinity_failure_reopt_disabled{YType::boolean, "affinity-failure-reopt-disabled"},
    affinity_failure_reopt_time_remained{YType::uint32, "affinity-failure-reopt-time-remained"},
    area_id{YType::str, "area-id"},
    auto_route{YType::boolean, "auto-route"},
    autoroute_announce_exclude_segment_routing{YType::boolean, "autoroute-announce-exclude-segment-routing"},
    bandwidth_requested{YType::uint32, "bandwidth-requested"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    binding_label{YType::uint32, "binding-label"},
    binding_label_exists{YType::boolean, "binding-label-exists"},
    create_time{YType::uint32, "create-time"},
    destination_disabled_count{YType::uint32, "destination-disabled-count"},
    destination_down_count{YType::uint32, "destination-down-count"},
    destination_up_count{YType::uint32, "destination-up-count"},
    drop_mode{YType::boolean, "drop-mode"},
    explicit_path_change{YType::boolean, "explicit-path-change"},
    fail_reason{YType::enumeration, "fail-reason"},
    forwarding_adjacency{YType::boolean, "forwarding-adjacency"},
    hop_limit_ignored_reason{YType::enumeration, "hop-limit-ignored-reason"},
    invalidation_time_remained{YType::uint32, "invalidation-time-remained"},
    is_auto_backup{YType::boolean, "is-auto-backup"},
    is_auto_pcc{YType::boolean, "is-auto-pcc"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_hop_limit_ignore{YType::boolean, "is-hop-limit-ignore"},
    is_inter_area_tunnel{YType::boolean, "is-inter-area-tunnel"},
    is_interface{YType::boolean, "is-interface"},
    is_named{YType::boolean, "is-named"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_passive{YType::boolean, "is-passive"},
    is_pce_delegated{YType::boolean, "is-pce-delegated"},
    last_hop_ifindex{YType::uint32, "last-hop-ifindex"},
    last_path_change{YType::uint32, "last-path-change"},
    load_share_factor{YType::uint32, "load-share-factor"},
    load_share_type{YType::enumeration, "load-share-type"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    lsp_wrap_protection_enabled{YType::boolean, "lsp-wrap-protection-enabled"},
    metric_qualifier{YType::enumeration, "metric-qualifier"},
    metric_type{YType::enumeration, "metric-type"},
    operational_state{YType::enumeration, "operational-state"},
    operational_state_changes{YType::uint32, "operational-state-changes"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    passive_tunnel_name{YType::str, "passive-tunnel-name"},
    path_option_change{YType::boolean, "path-option-change"},
    pce_fail_reason{YType::enumeration, "pce-fail-reason"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"},
    re_opt_hold_down_timer_remaining{YType::uint32, "re-opt-hold-down-timer-remaining"},
    reroute_pending{YType::boolean, "reroute-pending"},
    role_standby{YType::boolean, "role-standby"},
    signaled_name{YType::str, "signaled-name"},
    snmp_index{YType::uint32, "snmp-index"},
    tie_breaker{YType::enumeration, "tie-breaker"},
    tiebreaker_qualifier{YType::enumeration, "tiebreaker-qualifier"},
    tiebreaker_type{YType::uint32, "tiebreaker-type"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    tunnel_recovering{YType::boolean, "tunnel-recovering"},
    uptime{YType::uint32, "uptime"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"}
    	,
    auto_backup(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup>())
	,auto_mesh(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh>())
	,auto_pcc(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc>())
	,bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo>())
	,bidir(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir>())
	,cleaned_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp>())
	,config(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Config>())
	,delay_clean_pp_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp>())
	,flex_info(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo>())
	,history(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::History>())
	,otn_bidir(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir>())
	,p2p_info(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo>())
	,path_protection(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection>())
	,pce_delegation(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation>())
	,reoptimized_p2mp_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp>())
	,reoptimized_standby_p2mp_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp>())
	,soft_preemption(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption>())
	,te_tunnel_convergence(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence>())
	,transport_tunnel_info(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo>())
	,tunnel_current_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp>())
	,tunnel_restoration_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp>())
	,tunnel_standby_lsp(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp>())
	,wdm_unitunnel(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel>())
	,xro_attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet>())
{
    auto_backup->parent = this;
    auto_mesh->parent = this;
    auto_pcc->parent = this;
    bfd_info->parent = this;
    bidir->parent = this;
    cleaned_lsp->parent = this;
    config->parent = this;
    delay_clean_pp_lsp->parent = this;
    flex_info->parent = this;
    history->parent = this;
    otn_bidir->parent = this;
    p2p_info->parent = this;
    path_protection->parent = this;
    pce_delegation->parent = this;
    reoptimized_p2mp_lsp->parent = this;
    reoptimized_standby_p2mp_lsp->parent = this;
    soft_preemption->parent = this;
    te_tunnel_convergence->parent = this;
    transport_tunnel_info->parent = this;
    tunnel_current_lsp->parent = this;
    tunnel_restoration_lsp->parent = this;
    tunnel_standby_lsp->parent = this;
    wdm_unitunnel->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "nni-tunnel"; yang_parent_name = "nni-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::~NniTunnel()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| admin_state.is_set
	|| affinity_failure_delayed_tear_time_remained.is_set
	|| affinity_failure_reopt_disabled.is_set
	|| affinity_failure_reopt_time_remained.is_set
	|| area_id.is_set
	|| auto_route.is_set
	|| autoroute_announce_exclude_segment_routing.is_set
	|| bandwidth_requested.is_set
	|| bandwidth_type.is_set
	|| binding_label.is_set
	|| binding_label_exists.is_set
	|| create_time.is_set
	|| destination_disabled_count.is_set
	|| destination_down_count.is_set
	|| destination_up_count.is_set
	|| drop_mode.is_set
	|| explicit_path_change.is_set
	|| fail_reason.is_set
	|| forwarding_adjacency.is_set
	|| hop_limit_ignored_reason.is_set
	|| invalidation_time_remained.is_set
	|| is_auto_backup.is_set
	|| is_auto_pcc.is_set
	|| is_bandwidth_protect.is_set
	|| is_hop_limit_ignore.is_set
	|| is_inter_area_tunnel.is_set
	|| is_interface.is_set
	|| is_named.is_set
	|| is_node_protected.is_set
	|| is_passive.is_set
	|| is_pce_delegated.is_set
	|| last_hop_ifindex.is_set
	|| last_path_change.is_set
	|| load_share_factor.is_set
	|| load_share_type.is_set
	|| lsp_wrap_label.is_set
	|| lsp_wrap_protection_enabled.is_set
	|| metric_qualifier.is_set
	|| metric_type.is_set
	|| operational_state.is_set
	|| operational_state_changes.is_set
	|| outbound_frr_state.is_set
	|| passive_tunnel_name.is_set
	|| path_option_change.is_set
	|| pce_fail_reason.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| re_opt_hold_down_timer_remaining.is_set
	|| reroute_pending.is_set
	|| role_standby.is_set
	|| signaled_name.is_set
	|| snmp_index.is_set
	|| tie_breaker.is_set
	|| tiebreaker_qualifier.is_set
	|| tiebreaker_type.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_type.is_set
	|| tunnel_interface_name.is_set
	|| tunnel_recovering.is_set
	|| uptime.is_set
	|| xro_attribute_set_name.is_set
	|| (auto_backup !=  nullptr && auto_backup->has_data())
	|| (auto_mesh !=  nullptr && auto_mesh->has_data())
	|| (auto_pcc !=  nullptr && auto_pcc->has_data())
	|| (bfd_info !=  nullptr && bfd_info->has_data())
	|| (bidir !=  nullptr && bidir->has_data())
	|| (cleaned_lsp !=  nullptr && cleaned_lsp->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (delay_clean_pp_lsp !=  nullptr && delay_clean_pp_lsp->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (otn_bidir !=  nullptr && otn_bidir->has_data())
	|| (p2p_info !=  nullptr && p2p_info->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (pce_delegation !=  nullptr && pce_delegation->has_data())
	|| (reoptimized_p2mp_lsp !=  nullptr && reoptimized_p2mp_lsp->has_data())
	|| (reoptimized_standby_p2mp_lsp !=  nullptr && reoptimized_standby_p2mp_lsp->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (te_tunnel_convergence !=  nullptr && te_tunnel_convergence->has_data())
	|| (transport_tunnel_info !=  nullptr && transport_tunnel_info->has_data())
	|| (tunnel_current_lsp !=  nullptr && tunnel_current_lsp->has_data())
	|| (tunnel_restoration_lsp !=  nullptr && tunnel_restoration_lsp->has_data())
	|| (tunnel_standby_lsp !=  nullptr && tunnel_standby_lsp->has_data())
	|| (wdm_unitunnel !=  nullptr && wdm_unitunnel->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(affinity_failure_delayed_tear_time_remained.yfilter)
	|| ydk::is_set(affinity_failure_reopt_disabled.yfilter)
	|| ydk::is_set(affinity_failure_reopt_time_remained.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(auto_route.yfilter)
	|| ydk::is_set(autoroute_announce_exclude_segment_routing.yfilter)
	|| ydk::is_set(bandwidth_requested.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(binding_label_exists.yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(destination_disabled_count.yfilter)
	|| ydk::is_set(destination_down_count.yfilter)
	|| ydk::is_set(destination_up_count.yfilter)
	|| ydk::is_set(drop_mode.yfilter)
	|| ydk::is_set(explicit_path_change.yfilter)
	|| ydk::is_set(fail_reason.yfilter)
	|| ydk::is_set(forwarding_adjacency.yfilter)
	|| ydk::is_set(hop_limit_ignored_reason.yfilter)
	|| ydk::is_set(invalidation_time_remained.yfilter)
	|| ydk::is_set(is_auto_backup.yfilter)
	|| ydk::is_set(is_auto_pcc.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_hop_limit_ignore.yfilter)
	|| ydk::is_set(is_inter_area_tunnel.yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(is_named.yfilter)
	|| ydk::is_set(is_node_protected.yfilter)
	|| ydk::is_set(is_passive.yfilter)
	|| ydk::is_set(is_pce_delegated.yfilter)
	|| ydk::is_set(last_hop_ifindex.yfilter)
	|| ydk::is_set(last_path_change.yfilter)
	|| ydk::is_set(load_share_factor.yfilter)
	|| ydk::is_set(load_share_type.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_enabled.yfilter)
	|| ydk::is_set(metric_qualifier.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(operational_state_changes.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(passive_tunnel_name.yfilter)
	|| ydk::is_set(path_option_change.yfilter)
	|| ydk::is_set(pce_fail_reason.yfilter)
	|| ydk::is_set(persistent_bytes.yfilter)
	|| ydk::is_set(persistent_packets.yfilter)
	|| ydk::is_set(re_opt_hold_down_timer_remaining.yfilter)
	|| ydk::is_set(reroute_pending.yfilter)
	|| ydk::is_set(role_standby.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(snmp_index.yfilter)
	|| ydk::is_set(tie_breaker.yfilter)
	|| ydk::is_set(tiebreaker_qualifier.yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(tunnel_recovering.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(xro_attribute_set_name.yfilter)
	|| (auto_backup !=  nullptr && auto_backup->has_operation())
	|| (auto_mesh !=  nullptr && auto_mesh->has_operation())
	|| (auto_pcc !=  nullptr && auto_pcc->has_operation())
	|| (bfd_info !=  nullptr && bfd_info->has_operation())
	|| (bidir !=  nullptr && bidir->has_operation())
	|| (cleaned_lsp !=  nullptr && cleaned_lsp->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (delay_clean_pp_lsp !=  nullptr && delay_clean_pp_lsp->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (otn_bidir !=  nullptr && otn_bidir->has_operation())
	|| (p2p_info !=  nullptr && p2p_info->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (pce_delegation !=  nullptr && pce_delegation->has_operation())
	|| (reoptimized_p2mp_lsp !=  nullptr && reoptimized_p2mp_lsp->has_operation())
	|| (reoptimized_standby_p2mp_lsp !=  nullptr && reoptimized_standby_p2mp_lsp->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (te_tunnel_convergence !=  nullptr && te_tunnel_convergence->has_operation())
	|| (transport_tunnel_info !=  nullptr && transport_tunnel_info->has_operation())
	|| (tunnel_current_lsp !=  nullptr && tunnel_current_lsp->has_operation())
	|| (tunnel_restoration_lsp !=  nullptr && tunnel_restoration_lsp->has_operation())
	|| (tunnel_standby_lsp !=  nullptr && tunnel_standby_lsp->has_operation())
	|| (wdm_unitunnel !=  nullptr && wdm_unitunnel->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/nni-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni-tunnel" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (affinity_failure_delayed_tear_time_remained.is_set || is_set(affinity_failure_delayed_tear_time_remained.yfilter)) leaf_name_data.push_back(affinity_failure_delayed_tear_time_remained.get_name_leafdata());
    if (affinity_failure_reopt_disabled.is_set || is_set(affinity_failure_reopt_disabled.yfilter)) leaf_name_data.push_back(affinity_failure_reopt_disabled.get_name_leafdata());
    if (affinity_failure_reopt_time_remained.is_set || is_set(affinity_failure_reopt_time_remained.yfilter)) leaf_name_data.push_back(affinity_failure_reopt_time_remained.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (auto_route.is_set || is_set(auto_route.yfilter)) leaf_name_data.push_back(auto_route.get_name_leafdata());
    if (autoroute_announce_exclude_segment_routing.is_set || is_set(autoroute_announce_exclude_segment_routing.yfilter)) leaf_name_data.push_back(autoroute_announce_exclude_segment_routing.get_name_leafdata());
    if (bandwidth_requested.is_set || is_set(bandwidth_requested.yfilter)) leaf_name_data.push_back(bandwidth_requested.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (binding_label_exists.is_set || is_set(binding_label_exists.yfilter)) leaf_name_data.push_back(binding_label_exists.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (destination_disabled_count.is_set || is_set(destination_disabled_count.yfilter)) leaf_name_data.push_back(destination_disabled_count.get_name_leafdata());
    if (destination_down_count.is_set || is_set(destination_down_count.yfilter)) leaf_name_data.push_back(destination_down_count.get_name_leafdata());
    if (destination_up_count.is_set || is_set(destination_up_count.yfilter)) leaf_name_data.push_back(destination_up_count.get_name_leafdata());
    if (drop_mode.is_set || is_set(drop_mode.yfilter)) leaf_name_data.push_back(drop_mode.get_name_leafdata());
    if (explicit_path_change.is_set || is_set(explicit_path_change.yfilter)) leaf_name_data.push_back(explicit_path_change.get_name_leafdata());
    if (fail_reason.is_set || is_set(fail_reason.yfilter)) leaf_name_data.push_back(fail_reason.get_name_leafdata());
    if (forwarding_adjacency.is_set || is_set(forwarding_adjacency.yfilter)) leaf_name_data.push_back(forwarding_adjacency.get_name_leafdata());
    if (hop_limit_ignored_reason.is_set || is_set(hop_limit_ignored_reason.yfilter)) leaf_name_data.push_back(hop_limit_ignored_reason.get_name_leafdata());
    if (invalidation_time_remained.is_set || is_set(invalidation_time_remained.yfilter)) leaf_name_data.push_back(invalidation_time_remained.get_name_leafdata());
    if (is_auto_backup.is_set || is_set(is_auto_backup.yfilter)) leaf_name_data.push_back(is_auto_backup.get_name_leafdata());
    if (is_auto_pcc.is_set || is_set(is_auto_pcc.yfilter)) leaf_name_data.push_back(is_auto_pcc.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_hop_limit_ignore.is_set || is_set(is_hop_limit_ignore.yfilter)) leaf_name_data.push_back(is_hop_limit_ignore.get_name_leafdata());
    if (is_inter_area_tunnel.is_set || is_set(is_inter_area_tunnel.yfilter)) leaf_name_data.push_back(is_inter_area_tunnel.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_named.is_set || is_set(is_named.yfilter)) leaf_name_data.push_back(is_named.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.yfilter)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.yfilter)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (is_pce_delegated.is_set || is_set(is_pce_delegated.yfilter)) leaf_name_data.push_back(is_pce_delegated.get_name_leafdata());
    if (last_hop_ifindex.is_set || is_set(last_hop_ifindex.yfilter)) leaf_name_data.push_back(last_hop_ifindex.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.yfilter)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (load_share_factor.is_set || is_set(load_share_factor.yfilter)) leaf_name_data.push_back(load_share_factor.get_name_leafdata());
    if (load_share_type.is_set || is_set(load_share_type.yfilter)) leaf_name_data.push_back(load_share_type.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (lsp_wrap_protection_enabled.is_set || is_set(lsp_wrap_protection_enabled.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enabled.get_name_leafdata());
    if (metric_qualifier.is_set || is_set(metric_qualifier.yfilter)) leaf_name_data.push_back(metric_qualifier.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (operational_state_changes.is_set || is_set(operational_state_changes.yfilter)) leaf_name_data.push_back(operational_state_changes.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (passive_tunnel_name.is_set || is_set(passive_tunnel_name.yfilter)) leaf_name_data.push_back(passive_tunnel_name.get_name_leafdata());
    if (path_option_change.is_set || is_set(path_option_change.yfilter)) leaf_name_data.push_back(path_option_change.get_name_leafdata());
    if (pce_fail_reason.is_set || is_set(pce_fail_reason.yfilter)) leaf_name_data.push_back(pce_fail_reason.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.yfilter)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.yfilter)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());
    if (re_opt_hold_down_timer_remaining.is_set || is_set(re_opt_hold_down_timer_remaining.yfilter)) leaf_name_data.push_back(re_opt_hold_down_timer_remaining.get_name_leafdata());
    if (reroute_pending.is_set || is_set(reroute_pending.yfilter)) leaf_name_data.push_back(reroute_pending.get_name_leafdata());
    if (role_standby.is_set || is_set(role_standby.yfilter)) leaf_name_data.push_back(role_standby.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (snmp_index.is_set || is_set(snmp_index.yfilter)) leaf_name_data.push_back(snmp_index.get_name_leafdata());
    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());
    if (tiebreaker_qualifier.is_set || is_set(tiebreaker_qualifier.yfilter)) leaf_name_data.push_back(tiebreaker_qualifier.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (tunnel_recovering.is_set || is_set(tunnel_recovering.yfilter)) leaf_name_data.push_back(tunnel_recovering.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.yfilter)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-backup")
    {
        if(auto_backup == nullptr)
        {
            auto_backup = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup>();
        }
        return auto_backup;
    }

    if(child_yang_name == "auto-mesh")
    {
        if(auto_mesh == nullptr)
        {
            auto_mesh = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh>();
        }
        return auto_mesh;
    }

    if(child_yang_name == "auto-pcc")
    {
        if(auto_pcc == nullptr)
        {
            auto_pcc = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc>();
        }
        return auto_pcc;
    }

    if(child_yang_name == "bfd-info")
    {
        if(bfd_info == nullptr)
        {
            bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo>();
        }
        return bfd_info;
    }

    if(child_yang_name == "bidir")
    {
        if(bidir == nullptr)
        {
            bidir = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir>();
        }
        return bidir;
    }

    if(child_yang_name == "cleaned-lsp")
    {
        if(cleaned_lsp == nullptr)
        {
            cleaned_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp>();
        }
        return cleaned_lsp;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Config>();
        }
        return config;
    }

    if(child_yang_name == "delay-clean-pp-lsp")
    {
        if(delay_clean_pp_lsp == nullptr)
        {
            delay_clean_pp_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp>();
        }
        return delay_clean_pp_lsp;
    }

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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::History>();
        }
        return history;
    }

    if(child_yang_name == "otn-bidir")
    {
        if(otn_bidir == nullptr)
        {
            otn_bidir = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir>();
        }
        return otn_bidir;
    }

    if(child_yang_name == "p2p-info")
    {
        if(p2p_info == nullptr)
        {
            p2p_info = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo>();
        }
        return p2p_info;
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection == nullptr)
        {
            path_protection = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection>();
        }
        return path_protection;
    }

    if(child_yang_name == "pce-delegation")
    {
        if(pce_delegation == nullptr)
        {
            pce_delegation = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation>();
        }
        return pce_delegation;
    }

    if(child_yang_name == "reoptimized-p2mp-lsp")
    {
        if(reoptimized_p2mp_lsp == nullptr)
        {
            reoptimized_p2mp_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp>();
        }
        return reoptimized_p2mp_lsp;
    }

    if(child_yang_name == "reoptimized-standby-p2mp-lsp")
    {
        if(reoptimized_standby_p2mp_lsp == nullptr)
        {
            reoptimized_standby_p2mp_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp>();
        }
        return reoptimized_standby_p2mp_lsp;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "te-tunnel-convergence")
    {
        if(te_tunnel_convergence == nullptr)
        {
            te_tunnel_convergence = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence>();
        }
        return te_tunnel_convergence;
    }

    if(child_yang_name == "transport-tunnel-info")
    {
        if(transport_tunnel_info == nullptr)
        {
            transport_tunnel_info = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo>();
        }
        return transport_tunnel_info;
    }

    if(child_yang_name == "tunnel-current-lsp")
    {
        if(tunnel_current_lsp == nullptr)
        {
            tunnel_current_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp>();
        }
        return tunnel_current_lsp;
    }

    if(child_yang_name == "tunnel-restoration-lsp")
    {
        if(tunnel_restoration_lsp == nullptr)
        {
            tunnel_restoration_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp>();
        }
        return tunnel_restoration_lsp;
    }

    if(child_yang_name == "tunnel-standby-lsp")
    {
        if(tunnel_standby_lsp == nullptr)
        {
            tunnel_standby_lsp = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp>();
        }
        return tunnel_standby_lsp;
    }

    if(child_yang_name == "wdm-unitunnel")
    {
        if(wdm_unitunnel == nullptr)
        {
            wdm_unitunnel = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel>();
        }
        return wdm_unitunnel;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_backup != nullptr)
    {
        children["auto-backup"] = auto_backup;
    }

    if(auto_mesh != nullptr)
    {
        children["auto-mesh"] = auto_mesh;
    }

    if(auto_pcc != nullptr)
    {
        children["auto-pcc"] = auto_pcc;
    }

    if(bfd_info != nullptr)
    {
        children["bfd-info"] = bfd_info;
    }

    if(bidir != nullptr)
    {
        children["bidir"] = bidir;
    }

    if(cleaned_lsp != nullptr)
    {
        children["cleaned-lsp"] = cleaned_lsp;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(delay_clean_pp_lsp != nullptr)
    {
        children["delay-clean-pp-lsp"] = delay_clean_pp_lsp;
    }

    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(otn_bidir != nullptr)
    {
        children["otn-bidir"] = otn_bidir;
    }

    if(p2p_info != nullptr)
    {
        children["p2p-info"] = p2p_info;
    }

    if(path_protection != nullptr)
    {
        children["path-protection"] = path_protection;
    }

    if(pce_delegation != nullptr)
    {
        children["pce-delegation"] = pce_delegation;
    }

    if(reoptimized_p2mp_lsp != nullptr)
    {
        children["reoptimized-p2mp-lsp"] = reoptimized_p2mp_lsp;
    }

    if(reoptimized_standby_p2mp_lsp != nullptr)
    {
        children["reoptimized-standby-p2mp-lsp"] = reoptimized_standby_p2mp_lsp;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(te_tunnel_convergence != nullptr)
    {
        children["te-tunnel-convergence"] = te_tunnel_convergence;
    }

    if(transport_tunnel_info != nullptr)
    {
        children["transport-tunnel-info"] = transport_tunnel_info;
    }

    if(tunnel_current_lsp != nullptr)
    {
        children["tunnel-current-lsp"] = tunnel_current_lsp;
    }

    if(tunnel_restoration_lsp != nullptr)
    {
        children["tunnel-restoration-lsp"] = tunnel_restoration_lsp;
    }

    if(tunnel_standby_lsp != nullptr)
    {
        children["tunnel-standby-lsp"] = tunnel_standby_lsp;
    }

    if(wdm_unitunnel != nullptr)
    {
        children["wdm-unitunnel"] = wdm_unitunnel;
    }

    if(xro_attribute_set != nullptr)
    {
        children["xro-attribute-set"] = xro_attribute_set;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-failure-delayed-tear-time-remained")
    {
        affinity_failure_delayed_tear_time_remained = value;
        affinity_failure_delayed_tear_time_remained.value_namespace = name_space;
        affinity_failure_delayed_tear_time_remained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-failure-reopt-disabled")
    {
        affinity_failure_reopt_disabled = value;
        affinity_failure_reopt_disabled.value_namespace = name_space;
        affinity_failure_reopt_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-failure-reopt-time-remained")
    {
        affinity_failure_reopt_time_remained = value;
        affinity_failure_reopt_time_remained.value_namespace = name_space;
        affinity_failure_reopt_time_remained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route")
    {
        auto_route = value;
        auto_route.value_namespace = name_space;
        auto_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoroute-announce-exclude-segment-routing")
    {
        autoroute_announce_exclude_segment_routing = value;
        autoroute_announce_exclude_segment_routing.value_namespace = name_space;
        autoroute_announce_exclude_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-requested")
    {
        bandwidth_requested = value;
        bandwidth_requested.value_namespace = name_space;
        bandwidth_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label-exists")
    {
        binding_label_exists = value;
        binding_label_exists.value_namespace = name_space;
        binding_label_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-disabled-count")
    {
        destination_disabled_count = value;
        destination_disabled_count.value_namespace = name_space;
        destination_disabled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-down-count")
    {
        destination_down_count = value;
        destination_down_count.value_namespace = name_space;
        destination_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-up-count")
    {
        destination_up_count = value;
        destination_up_count.value_namespace = name_space;
        destination_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-mode")
    {
        drop_mode = value;
        drop_mode.value_namespace = name_space;
        drop_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-change")
    {
        explicit_path_change = value;
        explicit_path_change.value_namespace = name_space;
        explicit_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fail-reason")
    {
        fail_reason = value;
        fail_reason.value_namespace = name_space;
        fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-adjacency")
    {
        forwarding_adjacency = value;
        forwarding_adjacency.value_namespace = name_space;
        forwarding_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit-ignored-reason")
    {
        hop_limit_ignored_reason = value;
        hop_limit_ignored_reason.value_namespace = name_space;
        hop_limit_ignored_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidation-time-remained")
    {
        invalidation_time_remained = value;
        invalidation_time_remained.value_namespace = name_space;
        invalidation_time_remained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-backup")
    {
        is_auto_backup = value;
        is_auto_backup.value_namespace = name_space;
        is_auto_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-pcc")
    {
        is_auto_pcc = value;
        is_auto_pcc.value_namespace = name_space;
        is_auto_pcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hop-limit-ignore")
    {
        is_hop_limit_ignore = value;
        is_hop_limit_ignore.value_namespace = name_space;
        is_hop_limit_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-inter-area-tunnel")
    {
        is_inter_area_tunnel = value;
        is_inter_area_tunnel.value_namespace = name_space;
        is_inter_area_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-named")
    {
        is_named = value;
        is_named.value_namespace = name_space;
        is_named.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
        is_node_protected.value_namespace = name_space;
        is_node_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
        is_passive.value_namespace = name_space;
        is_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-delegated")
    {
        is_pce_delegated = value;
        is_pce_delegated.value_namespace = name_space;
        is_pce_delegated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop-ifindex")
    {
        last_hop_ifindex = value;
        last_hop_ifindex.value_namespace = name_space;
        last_hop_ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
        last_path_change.value_namespace = name_space;
        last_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share-factor")
    {
        load_share_factor = value;
        load_share_factor.value_namespace = name_space;
        load_share_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share-type")
    {
        load_share_type = value;
        load_share_type.value_namespace = name_space;
        load_share_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-enabled")
    {
        lsp_wrap_protection_enabled = value;
        lsp_wrap_protection_enabled.value_namespace = name_space;
        lsp_wrap_protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-qualifier")
    {
        metric_qualifier = value;
        metric_qualifier.value_namespace = name_space;
        metric_qualifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state-changes")
    {
        operational_state_changes = value;
        operational_state_changes.value_namespace = name_space;
        operational_state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-tunnel-name")
    {
        passive_tunnel_name = value;
        passive_tunnel_name.value_namespace = name_space;
        passive_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-change")
    {
        path_option_change = value;
        path_option_change.value_namespace = name_space;
        path_option_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-fail-reason")
    {
        pce_fail_reason = value;
        pce_fail_reason.value_namespace = name_space;
        pce_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
        persistent_bytes.value_namespace = name_space;
        persistent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
        persistent_packets.value_namespace = name_space;
        persistent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-hold-down-timer-remaining")
    {
        re_opt_hold_down_timer_remaining = value;
        re_opt_hold_down_timer_remaining.value_namespace = name_space;
        re_opt_hold_down_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-pending")
    {
        reroute_pending = value;
        reroute_pending.value_namespace = name_space;
        reroute_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-standby")
    {
        role_standby = value;
        role_standby.value_namespace = name_space;
        role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-index")
    {
        snmp_index = value;
        snmp_index.value_namespace = name_space;
        snmp_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-qualifier")
    {
        tiebreaker_qualifier = value;
        tiebreaker_qualifier.value_namespace = name_space;
        tiebreaker_qualifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-recovering")
    {
        tunnel_recovering = value;
        tunnel_recovering.value_namespace = name_space;
        tunnel_recovering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
        xro_attribute_set_name.value_namespace = name_space;
        xro_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "affinity-failure-delayed-tear-time-remained")
    {
        affinity_failure_delayed_tear_time_remained.yfilter = yfilter;
    }
    if(value_path == "affinity-failure-reopt-disabled")
    {
        affinity_failure_reopt_disabled.yfilter = yfilter;
    }
    if(value_path == "affinity-failure-reopt-time-remained")
    {
        affinity_failure_reopt_time_remained.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "auto-route")
    {
        auto_route.yfilter = yfilter;
    }
    if(value_path == "autoroute-announce-exclude-segment-routing")
    {
        autoroute_announce_exclude_segment_routing.yfilter = yfilter;
    }
    if(value_path == "bandwidth-requested")
    {
        bandwidth_requested.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "binding-label-exists")
    {
        binding_label_exists.yfilter = yfilter;
    }
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "destination-disabled-count")
    {
        destination_disabled_count.yfilter = yfilter;
    }
    if(value_path == "destination-down-count")
    {
        destination_down_count.yfilter = yfilter;
    }
    if(value_path == "destination-up-count")
    {
        destination_up_count.yfilter = yfilter;
    }
    if(value_path == "drop-mode")
    {
        drop_mode.yfilter = yfilter;
    }
    if(value_path == "explicit-path-change")
    {
        explicit_path_change.yfilter = yfilter;
    }
    if(value_path == "fail-reason")
    {
        fail_reason.yfilter = yfilter;
    }
    if(value_path == "forwarding-adjacency")
    {
        forwarding_adjacency.yfilter = yfilter;
    }
    if(value_path == "hop-limit-ignored-reason")
    {
        hop_limit_ignored_reason.yfilter = yfilter;
    }
    if(value_path == "invalidation-time-remained")
    {
        invalidation_time_remained.yfilter = yfilter;
    }
    if(value_path == "is-auto-backup")
    {
        is_auto_backup.yfilter = yfilter;
    }
    if(value_path == "is-auto-pcc")
    {
        is_auto_pcc.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "is-hop-limit-ignore")
    {
        is_hop_limit_ignore.yfilter = yfilter;
    }
    if(value_path == "is-inter-area-tunnel")
    {
        is_inter_area_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "is-named")
    {
        is_named.yfilter = yfilter;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected.yfilter = yfilter;
    }
    if(value_path == "is-passive")
    {
        is_passive.yfilter = yfilter;
    }
    if(value_path == "is-pce-delegated")
    {
        is_pce_delegated.yfilter = yfilter;
    }
    if(value_path == "last-hop-ifindex")
    {
        last_hop_ifindex.yfilter = yfilter;
    }
    if(value_path == "last-path-change")
    {
        last_path_change.yfilter = yfilter;
    }
    if(value_path == "load-share-factor")
    {
        load_share_factor.yfilter = yfilter;
    }
    if(value_path == "load-share-type")
    {
        load_share_type.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-enabled")
    {
        lsp_wrap_protection_enabled.yfilter = yfilter;
    }
    if(value_path == "metric-qualifier")
    {
        metric_qualifier.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "operational-state-changes")
    {
        operational_state_changes.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "passive-tunnel-name")
    {
        passive_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "path-option-change")
    {
        path_option_change.yfilter = yfilter;
    }
    if(value_path == "pce-fail-reason")
    {
        pce_fail_reason.yfilter = yfilter;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes.yfilter = yfilter;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets.yfilter = yfilter;
    }
    if(value_path == "re-opt-hold-down-timer-remaining")
    {
        re_opt_hold_down_timer_remaining.yfilter = yfilter;
    }
    if(value_path == "reroute-pending")
    {
        reroute_pending.yfilter = yfilter;
    }
    if(value_path == "role-standby")
    {
        role_standby.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "snmp-index")
    {
        snmp_index.yfilter = yfilter;
    }
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-qualifier")
    {
        tiebreaker_qualifier.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-recovering")
    {
        tunnel_recovering.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-backup" || name == "auto-mesh" || name == "auto-pcc" || name == "bfd-info" || name == "bidir" || name == "cleaned-lsp" || name == "config" || name == "delay-clean-pp-lsp" || name == "destination" || name == "flex-info" || name == "history" || name == "otn-bidir" || name == "p2p-info" || name == "path-protection" || name == "pce-delegation" || name == "reoptimized-p2mp-lsp" || name == "reoptimized-standby-p2mp-lsp" || name == "soft-preemption" || name == "te-tunnel-convergence" || name == "transport-tunnel-info" || name == "tunnel-current-lsp" || name == "tunnel-restoration-lsp" || name == "tunnel-standby-lsp" || name == "wdm-unitunnel" || name == "xro-attribute-set" || name == "tunnel-id" || name == "source-address" || name == "destination-address" || name == "admin-state" || name == "affinity-failure-delayed-tear-time-remained" || name == "affinity-failure-reopt-disabled" || name == "affinity-failure-reopt-time-remained" || name == "area-id" || name == "auto-route" || name == "autoroute-announce-exclude-segment-routing" || name == "bandwidth-requested" || name == "bandwidth-type" || name == "binding-label" || name == "binding-label-exists" || name == "create-time" || name == "destination-disabled-count" || name == "destination-down-count" || name == "destination-up-count" || name == "drop-mode" || name == "explicit-path-change" || name == "fail-reason" || name == "forwarding-adjacency" || name == "hop-limit-ignored-reason" || name == "invalidation-time-remained" || name == "is-auto-backup" || name == "is-auto-pcc" || name == "is-bandwidth-protect" || name == "is-hop-limit-ignore" || name == "is-inter-area-tunnel" || name == "is-interface" || name == "is-named" || name == "is-node-protected" || name == "is-passive" || name == "is-pce-delegated" || name == "last-hop-ifindex" || name == "last-path-change" || name == "load-share-factor" || name == "load-share-type" || name == "lsp-wrap-label" || name == "lsp-wrap-protection-enabled" || name == "metric-qualifier" || name == "metric-type" || name == "operational-state" || name == "operational-state-changes" || name == "outbound-frr-state" || name == "passive-tunnel-name" || name == "path-option-change" || name == "pce-fail-reason" || name == "persistent-bytes" || name == "persistent-packets" || name == "re-opt-hold-down-timer-remaining" || name == "reroute-pending" || name == "role-standby" || name == "signaled-name" || name == "snmp-index" || name == "tie-breaker" || name == "tiebreaker-qualifier" || name == "tiebreaker-type" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-type" || name == "tunnel-interface-name" || name == "tunnel-recovering" || name == "uptime" || name == "xro-attribute-set-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::AutoBackup()
    :
    ab_protected_interface{YType::str, "ab-protected-interface"},
    ab_protection_type{YType::enumeration, "ab-protection-type"},
    is_unused_removal_timer_running{YType::boolean, "is-unused-removal-timer-running"},
    is_using_srlg{YType::boolean, "is-using-srlg"},
    protected_address{YType::str, "protected-address"},
    protected_ls_ps{YType::uint32, "protected-ls-ps"},
    protected_s2_ls{YType::uint32, "protected-s2-ls"},
    sharing_families{YType::uint32, "sharing-families"},
    srlg_prot_type{YType::enumeration, "srlg-prot-type"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    unused_removal_remaining_time{YType::uint32, "unused-removal-remaining-time"}
    	,
    weighted_srlg_info(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo>())
{
    weighted_srlg_info->parent = this;

    yang_name = "auto-backup"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::~AutoBackup()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::has_data() const
{
    for (std::size_t index=0; index<iep.size(); index++)
    {
        if(iep[index]->has_data())
            return true;
    }
    return ab_protected_interface.is_set
	|| ab_protection_type.is_set
	|| is_unused_removal_timer_running.is_set
	|| is_using_srlg.is_set
	|| protected_address.is_set
	|| protected_ls_ps.is_set
	|| protected_s2_ls.is_set
	|| sharing_families.is_set
	|| srlg_prot_type.is_set
	|| tunnel_attribute_set_name.is_set
	|| unused_removal_remaining_time.is_set
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::has_operation() const
{
    for (std::size_t index=0; index<iep.size(); index++)
    {
        if(iep[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ab_protected_interface.yfilter)
	|| ydk::is_set(ab_protection_type.yfilter)
	|| ydk::is_set(is_unused_removal_timer_running.yfilter)
	|| ydk::is_set(is_using_srlg.yfilter)
	|| ydk::is_set(protected_address.yfilter)
	|| ydk::is_set(protected_ls_ps.yfilter)
	|| ydk::is_set(protected_s2_ls.yfilter)
	|| ydk::is_set(sharing_families.yfilter)
	|| ydk::is_set(srlg_prot_type.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(unused_removal_remaining_time.yfilter)
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ab_protected_interface.is_set || is_set(ab_protected_interface.yfilter)) leaf_name_data.push_back(ab_protected_interface.get_name_leafdata());
    if (ab_protection_type.is_set || is_set(ab_protection_type.yfilter)) leaf_name_data.push_back(ab_protection_type.get_name_leafdata());
    if (is_unused_removal_timer_running.is_set || is_set(is_unused_removal_timer_running.yfilter)) leaf_name_data.push_back(is_unused_removal_timer_running.get_name_leafdata());
    if (is_using_srlg.is_set || is_set(is_using_srlg.yfilter)) leaf_name_data.push_back(is_using_srlg.get_name_leafdata());
    if (protected_address.is_set || is_set(protected_address.yfilter)) leaf_name_data.push_back(protected_address.get_name_leafdata());
    if (protected_ls_ps.is_set || is_set(protected_ls_ps.yfilter)) leaf_name_data.push_back(protected_ls_ps.get_name_leafdata());
    if (protected_s2_ls.is_set || is_set(protected_s2_ls.yfilter)) leaf_name_data.push_back(protected_s2_ls.get_name_leafdata());
    if (sharing_families.is_set || is_set(sharing_families.yfilter)) leaf_name_data.push_back(sharing_families.get_name_leafdata());
    if (srlg_prot_type.is_set || is_set(srlg_prot_type.yfilter)) leaf_name_data.push_back(srlg_prot_type.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (unused_removal_remaining_time.is_set || is_set(unused_removal_remaining_time.yfilter)) leaf_name_data.push_back(unused_removal_remaining_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep")
    {
        for(auto const & c : iep)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep>();
        c->parent = this;
        iep.push_back(c);
        return c;
    }

    if(child_yang_name == "weighted-srlg-info")
    {
        if(weighted_srlg_info == nullptr)
        {
            weighted_srlg_info = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo>();
        }
        return weighted_srlg_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iep)
    {
        children[c->get_segment_path()] = c;
    }

    if(weighted_srlg_info != nullptr)
    {
        children["weighted-srlg-info"] = weighted_srlg_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface = value;
        ab_protected_interface.value_namespace = name_space;
        ab_protected_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type = value;
        ab_protection_type.value_namespace = name_space;
        ab_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running = value;
        is_unused_removal_timer_running.value_namespace = name_space;
        is_unused_removal_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg = value;
        is_using_srlg.value_namespace = name_space;
        is_using_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-address")
    {
        protected_address = value;
        protected_address.value_namespace = name_space;
        protected_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps = value;
        protected_ls_ps.value_namespace = name_space;
        protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls = value;
        protected_s2_ls.value_namespace = name_space;
        protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-families")
    {
        sharing_families = value;
        sharing_families.value_namespace = name_space;
        sharing_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type = value;
        srlg_prot_type.value_namespace = name_space;
        srlg_prot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time = value;
        unused_removal_remaining_time.value_namespace = name_space;
        unused_removal_remaining_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface.yfilter = yfilter;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type.yfilter = yfilter;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running.yfilter = yfilter;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg.yfilter = yfilter;
    }
    if(value_path == "protected-address")
    {
        protected_address.yfilter = yfilter;
    }
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "sharing-families")
    {
        sharing_families.yfilter = yfilter;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iep" || name == "weighted-srlg-info" || name == "ab-protected-interface" || name == "ab-protection-type" || name == "is-unused-removal-timer-running" || name == "is-using-srlg" || name == "protected-address" || name == "protected-ls-ps" || name == "protected-s2-ls" || name == "sharing-families" || name == "srlg-prot-type" || name == "tunnel-attribute-set-name" || name == "unused-removal-remaining-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::Iep()
    :
    path_option_id{YType::uint32, "path-option-id"}
{

    yang_name = "iep"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::~Iep()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_data() const
{
    for (std::size_t index=0; index<iep_hop.size(); index++)
    {
        if(iep_hop[index]->has_data())
            return true;
    }
    return path_option_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_operation() const
{
    for (std::size_t index=0; index<iep_hop.size(); index++)
    {
        if(iep_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(path_option_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_id.is_set || is_set(path_option_id.yfilter)) leaf_name_data.push_back(path_option_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep-hop")
    {
        for(auto const & c : iep_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop>();
        c->parent = this;
        iep_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iep_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-id")
    {
        path_option_id = value;
        path_option_id.value_namespace = name_space;
        path_option_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-id")
    {
        path_option_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iep-hop" || name == "path-option-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::IepHop()
    :
    hop_index{YType::uint32, "hop-index"},
    iep_hop_address{YType::str, "iep-hop-address"},
    iep_hop_type{YType::enumeration, "iep-hop-type"}
{

    yang_name = "iep-hop"; yang_parent_name = "iep"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::~IepHop()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_data() const
{
    return hop_index.is_set
	|| iep_hop_address.is_set
	|| iep_hop_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| ydk::is_set(iep_hop_address.yfilter)
	|| ydk::is_set(iep_hop_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (iep_hop_address.is_set || is_set(iep_hop_address.yfilter)) leaf_name_data.push_back(iep_hop_address.get_name_leafdata());
    if (iep_hop_type.is_set || is_set(iep_hop_type.yfilter)) leaf_name_data.push_back(iep_hop_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address = value;
        iep_hop_address.value_namespace = name_space;
        iep_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type = value;
        iep_hop_type.value_namespace = name_space;
        iep_hop_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address.yfilter = yfilter;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-index" || name == "iep-hop-address" || name == "iep-hop-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgInfo()
{

    yang_name = "weighted-srlg-info"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::~WeightedSrlgInfo()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_data() const
{
    for (std::size_t index=0; index<protected_interface_srlg.size(); index++)
    {
        if(protected_interface_srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.size(); index++)
    {
        if(weighted_srlg_hop[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<protected_interface_srlg.size(); index++)
    {
        if(protected_interface_srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.size(); index++)
    {
        if(weighted_srlg_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface-srlg")
    {
        for(auto const & c : protected_interface_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg>();
        c->parent = this;
        protected_interface_srlg.push_back(c);
        return c;
    }

    if(child_yang_name == "weighted-srlg-hop")
    {
        for(auto const & c : weighted_srlg_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop>();
        c->parent = this;
        weighted_srlg_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protected_interface_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : weighted_srlg_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface-srlg" || name == "weighted-srlg-hop")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::ProtectedInterfaceSrlg()
    :
    admin_weight{YType::uint32, "admin-weight"},
    srlg{YType::uint32, "srlg"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "protected-interface-srlg"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::~ProtectedInterfaceSrlg()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_data() const
{
    return admin_weight.is_set
	|| srlg.is_set
	|| srlg_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-weight" || name == "srlg" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::WeightedSrlgHop()
    :
    aggregate_admin_weight{YType::uint64, "aggregate-admin-weight"},
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "weighted-srlg-hop"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::~WeightedSrlgHop()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_data() const
{
    for (std::size_t index=0; index<common_srlg.size(); index++)
    {
        if(common_srlg[index]->has_data())
            return true;
    }
    return aggregate_admin_weight.is_set
	|| from_address.is_set
	|| to_address.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_operation() const
{
    for (std::size_t index=0; index<common_srlg.size(); index++)
    {
        if(common_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregate_admin_weight.yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_admin_weight.is_set || is_set(aggregate_admin_weight.yfilter)) leaf_name_data.push_back(aggregate_admin_weight.get_name_leafdata());
    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-srlg")
    {
        for(auto const & c : common_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg>();
        c->parent = this;
        common_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : common_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight = value;
        aggregate_admin_weight.value_namespace = name_space;
        aggregate_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight.yfilter = yfilter;
    }
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-srlg" || name == "aggregate-admin-weight" || name == "from-address" || name == "to-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::CommonSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "common-srlg"; yang_parent_name = "weighted-srlg-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::~CommonSrlg()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::AutoMesh()
    :
    is_tunnel_unused_timer_running{YType::boolean, "is-tunnel-unused-timer-running"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    mesh_group_type{YType::enumeration, "mesh-group-type"},
    remaining_unused_time{YType::uint32, "remaining-unused-time"},
    tunnel_destination_list_name{YType::str, "tunnel-destination-list-name"}
{

    yang_name = "auto-mesh"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::~AutoMesh()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::has_data() const
{
    return is_tunnel_unused_timer_running.is_set
	|| mesh_group_id.is_set
	|| mesh_group_type.is_set
	|| remaining_unused_time.is_set
	|| tunnel_destination_list_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_tunnel_unused_timer_running.yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(mesh_group_type.yfilter)
	|| ydk::is_set(remaining_unused_time.yfilter)
	|| ydk::is_set(tunnel_destination_list_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tunnel_unused_timer_running.is_set || is_set(is_tunnel_unused_timer_running.yfilter)) leaf_name_data.push_back(is_tunnel_unused_timer_running.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (mesh_group_type.is_set || is_set(mesh_group_type.yfilter)) leaf_name_data.push_back(mesh_group_type.get_name_leafdata());
    if (remaining_unused_time.is_set || is_set(remaining_unused_time.yfilter)) leaf_name_data.push_back(remaining_unused_time.get_name_leafdata());
    if (tunnel_destination_list_name.is_set || is_set(tunnel_destination_list_name.yfilter)) leaf_name_data.push_back(tunnel_destination_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running = value;
        is_tunnel_unused_timer_running.value_namespace = name_space;
        is_tunnel_unused_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type = value;
        mesh_group_type.value_namespace = name_space;
        mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time = value;
        remaining_unused_time.value_namespace = name_space;
        remaining_unused_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name = value;
        tunnel_destination_list_name.value_namespace = name_space;
        tunnel_destination_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type.yfilter = yfilter;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time.yfilter = yfilter;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-tunnel-unused-timer-running" || name == "mesh-group-id" || name == "mesh-group-type" || name == "remaining-unused-time" || name == "tunnel-destination-list-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::AutoPcc()
    :
    creator_address{YType::str, "creator-address"},
    creator_id{YType::str, "creator-id"},
    has_creator_id{YType::boolean, "has-creator-id"},
    operationally_up{YType::boolean, "operationally-up"},
    owner_address{YType::str, "owner-address"},
    plspid{YType::uint32, "plspid"},
    symbolic_name{YType::str, "symbolic-name"}
{

    yang_name = "auto-pcc"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::~AutoPcc()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::has_data() const
{
    return creator_address.is_set
	|| creator_id.is_set
	|| has_creator_id.is_set
	|| operationally_up.is_set
	|| owner_address.is_set
	|| plspid.is_set
	|| symbolic_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creator_address.yfilter)
	|| ydk::is_set(creator_id.yfilter)
	|| ydk::is_set(has_creator_id.yfilter)
	|| ydk::is_set(operationally_up.yfilter)
	|| ydk::is_set(owner_address.yfilter)
	|| ydk::is_set(plspid.yfilter)
	|| ydk::is_set(symbolic_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creator_address.is_set || is_set(creator_address.yfilter)) leaf_name_data.push_back(creator_address.get_name_leafdata());
    if (creator_id.is_set || is_set(creator_id.yfilter)) leaf_name_data.push_back(creator_id.get_name_leafdata());
    if (has_creator_id.is_set || is_set(has_creator_id.yfilter)) leaf_name_data.push_back(has_creator_id.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.yfilter)) leaf_name_data.push_back(operationally_up.get_name_leafdata());
    if (owner_address.is_set || is_set(owner_address.yfilter)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (plspid.is_set || is_set(plspid.yfilter)) leaf_name_data.push_back(plspid.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creator-address")
    {
        creator_address = value;
        creator_address.value_namespace = name_space;
        creator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator-id")
    {
        creator_id = value;
        creator_id.value_namespace = name_space;
        creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id = value;
        has_creator_id.value_namespace = name_space;
        has_creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
        operationally_up.value_namespace = name_space;
        operationally_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner-address")
    {
        owner_address = value;
        owner_address.value_namespace = name_space;
        owner_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plspid")
    {
        plspid = value;
        plspid.value_namespace = name_space;
        plspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creator-address")
    {
        creator_address.yfilter = yfilter;
    }
    if(value_path == "creator-id")
    {
        creator_id.yfilter = yfilter;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id.yfilter = yfilter;
    }
    if(value_path == "operationally-up")
    {
        operationally_up.yfilter = yfilter;
    }
    if(value_path == "owner-address")
    {
        owner_address.yfilter = yfilter;
    }
    if(value_path == "plspid")
    {
        plspid.yfilter = yfilter;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creator-address" || name == "creator-id" || name == "has-creator-id" || name == "operationally-up" || name == "owner-address" || name == "plspid" || name == "symbolic-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::BfdInfo()
    :
    bfd_session_up{YType::boolean, "bfd-session-up"},
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    maximum_session_up_interval{YType::uint32, "maximum-session-up-interval"},
    minimum_session_up_interval{YType::uint32, "minimum-session-up-interval"},
    session_up_time{YType::uint32, "session-up-time"}
    	,
    event_counters(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>())
{
    event_counters->parent = this;

    yang_name = "bfd-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::~BfdInfo()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_data() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_data())
            return true;
    }
    return bfd_session_up.is_set
	|| failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| maximum_session_up_interval.is_set
	|| minimum_session_up_interval.is_set
	|| session_up_time.is_set
	|| (event_counters !=  nullptr && event_counters->has_data());
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_operation() const
{
    for (std::size_t index=0; index<dampening_info.size(); index++)
    {
        if(dampening_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_up.yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(maximum_session_up_interval.yfilter)
	|| ydk::is_set(minimum_session_up_interval.yfilter)
	|| ydk::is_set(session_up_time.yfilter)
	|| (event_counters !=  nullptr && event_counters->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_up.is_set || is_set(bfd_session_up.yfilter)) leaf_name_data.push_back(bfd_session_up.get_name_leafdata());
    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (maximum_session_up_interval.is_set || is_set(maximum_session_up_interval.yfilter)) leaf_name_data.push_back(maximum_session_up_interval.get_name_leafdata());
    if (minimum_session_up_interval.is_set || is_set(minimum_session_up_interval.yfilter)) leaf_name_data.push_back(minimum_session_up_interval.get_name_leafdata());
    if (session_up_time.is_set || is_set(session_up_time.yfilter)) leaf_name_data.push_back(session_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-info")
    {
        for(auto const & c : dampening_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo>();
        c->parent = this;
        dampening_info.push_back(c);
        return c;
    }

    if(child_yang_name == "event-counters")
    {
        if(event_counters == nullptr)
        {
            event_counters = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>();
        }
        return event_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dampening_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(event_counters != nullptr)
    {
        children["event-counters"] = event_counters;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up = value;
        bfd_session_up.value_namespace = name_space;
        bfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval = value;
        maximum_session_up_interval.value_namespace = name_space;
        maximum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval = value;
        minimum_session_up_interval.value_namespace = name_space;
        minimum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-time")
    {
        session_up_time = value;
        session_up_time.value_namespace = name_space;
        session_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up.yfilter = yfilter;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval.yfilter = yfilter;
    }
    if(value_path == "session-up-time")
    {
        session_up_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-info" || name == "event-counters" || name == "bfd-session-up" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "maximum-session-up-interval" || name == "minimum-session-up-interval" || name == "session-up-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::DampeningInfo()
    :
    backoff_count{YType::uint32, "backoff-count"},
    hold_down_time{YType::uint32, "hold-down-time"},
    option_index{YType::uint32, "option-index"},
    remained_time{YType::uint32, "remained-time"}
{

    yang_name = "dampening-info"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::~DampeningInfo()
{
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_data() const
{
    return backoff_count.is_set
	|| hold_down_time.is_set
	|| option_index.is_set
	|| remained_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_count.yfilter)
	|| ydk::is_set(hold_down_time.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(remained_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_count.is_set || is_set(backoff_count.yfilter)) leaf_name_data.push_back(backoff_count.get_name_leafdata());
    if (hold_down_time.is_set || is_set(hold_down_time.yfilter)) leaf_name_data.push_back(hold_down_time.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (remained_time.is_set || is_set(remained_time.yfilter)) leaf_name_data.push_back(remained_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-count")
    {
        backoff_count = value;
        backoff_count.value_namespace = name_space;
        backoff_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time = value;
        hold_down_time.value_namespace = name_space;
        hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remained-time")
    {
        remained_time = value;
        remained_time.value_namespace = name_space;
        remained_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-count")
    {
        backoff_count.yfilter = yfilter;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "remained-time")
    {
        remained_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-count" || name == "hold-down-time" || name == "option-index" || name == "remained-time")
        return true;
    return false;
}


}
}

