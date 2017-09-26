
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_69.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::Tunnels::Summary::GmplsNniSummary::GmplsNniSummary()
    :
    heads_down{YType::uint32, "heads-down"},
    heads_up{YType::uint32, "heads-up"},
    mids_down{YType::uint32, "mids-down"},
    mids_up{YType::uint32, "mids-up"},
    tails_down{YType::uint32, "tails-down"},
    tails_up{YType::uint32, "tails-up"}
{

    yang_name = "gmpls-nni-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::GmplsNniSummary::~GmplsNniSummary()
{
}

bool MplsTeStandby::Tunnels::Summary::GmplsNniSummary::has_data() const
{
    return heads_down.is_set
	|| heads_up.is_set
	|| mids_down.is_set
	|| mids_up.is_set
	|| tails_down.is_set
	|| tails_up.is_set;
}

bool MplsTeStandby::Tunnels::Summary::GmplsNniSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(heads_down.yfilter)
	|| ydk::is_set(heads_up.yfilter)
	|| ydk::is_set(mids_down.yfilter)
	|| ydk::is_set(mids_up.yfilter)
	|| ydk::is_set(tails_down.yfilter)
	|| ydk::is_set(tails_up.yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::GmplsNniSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::GmplsNniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::GmplsNniSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_down.is_set || is_set(heads_down.yfilter)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (heads_up.is_set || is_set(heads_up.yfilter)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (mids_down.is_set || is_set(mids_down.yfilter)) leaf_name_data.push_back(mids_down.get_name_leafdata());
    if (mids_up.is_set || is_set(mids_up.yfilter)) leaf_name_data.push_back(mids_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.yfilter)) leaf_name_data.push_back(tails_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.yfilter)) leaf_name_data.push_back(tails_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::GmplsNniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::GmplsNniSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::GmplsNniSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "heads-down")
    {
        heads_down = value;
        heads_down.value_namespace = name_space;
        heads_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heads-up")
    {
        heads_up = value;
        heads_up.value_namespace = name_space;
        heads_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mids-down")
    {
        mids_down = value;
        mids_down.value_namespace = name_space;
        mids_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mids-up")
    {
        mids_up = value;
        mids_up.value_namespace = name_space;
        mids_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
        tails_down.value_namespace = name_space;
        tails_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
        tails_up.value_namespace = name_space;
        tails_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::Summary::GmplsNniSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "heads-down")
    {
        heads_down.yfilter = yfilter;
    }
    if(value_path == "heads-up")
    {
        heads_up.yfilter = yfilter;
    }
    if(value_path == "mids-down")
    {
        mids_down.yfilter = yfilter;
    }
    if(value_path == "mids-up")
    {
        mids_up.yfilter = yfilter;
    }
    if(value_path == "tails-down")
    {
        tails_down.yfilter = yfilter;
    }
    if(value_path == "tails-up")
    {
        tails_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::Summary::GmplsNniSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "heads-down" || name == "heads-up" || name == "mids-down" || name == "mids-up" || name == "tails-down" || name == "tails-up")
        return true;
    return false;
}

MplsTeStandby::Tunnels::Summary::GmplsUniSummary::GmplsUniSummary()
    :
    heads_down{YType::uint32, "heads-down"},
    heads_up{YType::uint32, "heads-up"},
    tails_down{YType::uint32, "tails-down"},
    tails_up{YType::uint32, "tails-up"}
{

    yang_name = "gmpls-uni-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::GmplsUniSummary::~GmplsUniSummary()
{
}

bool MplsTeStandby::Tunnels::Summary::GmplsUniSummary::has_data() const
{
    return heads_down.is_set
	|| heads_up.is_set
	|| tails_down.is_set
	|| tails_up.is_set;
}

bool MplsTeStandby::Tunnels::Summary::GmplsUniSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(heads_down.yfilter)
	|| ydk::is_set(heads_up.yfilter)
	|| ydk::is_set(tails_down.yfilter)
	|| ydk::is_set(tails_up.yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::GmplsUniSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::GmplsUniSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::GmplsUniSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heads_down.is_set || is_set(heads_down.yfilter)) leaf_name_data.push_back(heads_down.get_name_leafdata());
    if (heads_up.is_set || is_set(heads_up.yfilter)) leaf_name_data.push_back(heads_up.get_name_leafdata());
    if (tails_down.is_set || is_set(tails_down.yfilter)) leaf_name_data.push_back(tails_down.get_name_leafdata());
    if (tails_up.is_set || is_set(tails_up.yfilter)) leaf_name_data.push_back(tails_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::GmplsUniSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::GmplsUniSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::GmplsUniSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "heads-down")
    {
        heads_down = value;
        heads_down.value_namespace = name_space;
        heads_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heads-up")
    {
        heads_up = value;
        heads_up.value_namespace = name_space;
        heads_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-down")
    {
        tails_down = value;
        tails_down.value_namespace = name_space;
        tails_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tails-up")
    {
        tails_up = value;
        tails_up.value_namespace = name_space;
        tails_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::Summary::GmplsUniSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "heads-down")
    {
        heads_down.yfilter = yfilter;
    }
    if(value_path == "heads-up")
    {
        heads_up.yfilter = yfilter;
    }
    if(value_path == "tails-down")
    {
        tails_down.yfilter = yfilter;
    }
    if(value_path == "tails-up")
    {
        tails_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::Summary::GmplsUniSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "heads-down" || name == "heads-up" || name == "tails-down" || name == "tails-up")
        return true;
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::LastTunnelConvergenceSummary()
    :
    tunnel_converged_count{YType::uint32, "tunnel-converged-count"},
    tunnel_frr_active_count{YType::uint32, "tunnel-frr-active-count"},
    tunnel_frr_total_count{YType::uint32, "tunnel-frr-total-count"},
    tunnel_total_convergence_complete_time{YType::uint64, "tunnel-total-convergence-complete-time"}
    	,
    table_frr_trigger(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>())
	,table_label_rewrite(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>())
	,table_path_out(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>())
	,table_pcalc(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>())
	,table_resv_in(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>())
	,table_tunnel_rewrite(std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>())
{
    table_frr_trigger->parent = this;
    table_label_rewrite->parent = this;
    table_path_out->parent = this;
    table_pcalc->parent = this;
    table_resv_in->parent = this;
    table_tunnel_rewrite->parent = this;

    yang_name = "last-tunnel-convergence-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::~LastTunnelConvergenceSummary()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::has_data() const
{
    return tunnel_converged_count.is_set
	|| tunnel_frr_active_count.is_set
	|| tunnel_frr_total_count.is_set
	|| tunnel_total_convergence_complete_time.is_set
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_data())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_data())
	|| (table_path_out !=  nullptr && table_path_out->has_data())
	|| (table_pcalc !=  nullptr && table_pcalc->has_data())
	|| (table_resv_in !=  nullptr && table_resv_in->has_data())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_data());
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_converged_count.yfilter)
	|| ydk::is_set(tunnel_frr_active_count.yfilter)
	|| ydk::is_set(tunnel_frr_total_count.yfilter)
	|| ydk::is_set(tunnel_total_convergence_complete_time.yfilter)
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_operation())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_operation())
	|| (table_path_out !=  nullptr && table_path_out->has_operation())
	|| (table_pcalc !=  nullptr && table_pcalc->has_operation())
	|| (table_resv_in !=  nullptr && table_resv_in->has_operation())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_operation());
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tunnel-convergence-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_converged_count.is_set || is_set(tunnel_converged_count.yfilter)) leaf_name_data.push_back(tunnel_converged_count.get_name_leafdata());
    if (tunnel_frr_active_count.is_set || is_set(tunnel_frr_active_count.yfilter)) leaf_name_data.push_back(tunnel_frr_active_count.get_name_leafdata());
    if (tunnel_frr_total_count.is_set || is_set(tunnel_frr_total_count.yfilter)) leaf_name_data.push_back(tunnel_frr_total_count.get_name_leafdata());
    if (tunnel_total_convergence_complete_time.is_set || is_set(tunnel_total_convergence_complete_time.yfilter)) leaf_name_data.push_back(tunnel_total_convergence_complete_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-frr-trigger")
    {
        if(table_frr_trigger == nullptr)
        {
            table_frr_trigger = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>();
        }
        return table_frr_trigger;
    }

    if(child_yang_name == "table-label-rewrite")
    {
        if(table_label_rewrite == nullptr)
        {
            table_label_rewrite = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>();
        }
        return table_label_rewrite;
    }

    if(child_yang_name == "table-path-out")
    {
        if(table_path_out == nullptr)
        {
            table_path_out = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>();
        }
        return table_path_out;
    }

    if(child_yang_name == "table-pcalc")
    {
        if(table_pcalc == nullptr)
        {
            table_pcalc = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>();
        }
        return table_pcalc;
    }

    if(child_yang_name == "table-resv-in")
    {
        if(table_resv_in == nullptr)
        {
            table_resv_in = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>();
        }
        return table_resv_in;
    }

    if(child_yang_name == "table-tunnel-rewrite")
    {
        if(table_tunnel_rewrite == nullptr)
        {
            table_tunnel_rewrite = std::make_shared<MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>();
        }
        return table_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(table_frr_trigger != nullptr)
    {
        children["table-frr-trigger"] = table_frr_trigger;
    }

    if(table_label_rewrite != nullptr)
    {
        children["table-label-rewrite"] = table_label_rewrite;
    }

    if(table_path_out != nullptr)
    {
        children["table-path-out"] = table_path_out;
    }

    if(table_pcalc != nullptr)
    {
        children["table-pcalc"] = table_pcalc;
    }

    if(table_resv_in != nullptr)
    {
        children["table-resv-in"] = table_resv_in;
    }

    if(table_tunnel_rewrite != nullptr)
    {
        children["table-tunnel-rewrite"] = table_tunnel_rewrite;
    }

    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count = value;
        tunnel_converged_count.value_namespace = name_space;
        tunnel_converged_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count = value;
        tunnel_frr_active_count.value_namespace = name_space;
        tunnel_frr_active_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count = value;
        tunnel_frr_total_count.value_namespace = name_space;
        tunnel_frr_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time = value;
        tunnel_total_convergence_complete_time.value_namespace = name_space;
        tunnel_total_convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-frr-trigger" || name == "table-label-rewrite" || name == "table-path-out" || name == "table-pcalc" || name == "table-resv-in" || name == "table-tunnel-rewrite" || name == "tunnel-converged-count" || name == "tunnel-frr-active-count" || name == "tunnel-frr-total-count" || name == "tunnel-total-convergence-complete-time")
        return true;
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::TableFrrTrigger()
{

    yang_name = "table-frr-trigger"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::~TableFrrTrigger()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-frr-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::TableLabelRewrite()
{

    yang_name = "table-label-rewrite"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::~TableLabelRewrite()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::TablePathOut()
{

    yang_name = "table-path-out"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::~TablePathOut()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-path-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::TablePcalc()
{

    yang_name = "table-pcalc"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::~TablePcalc()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-pcalc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::TableResvIn()
{

    yang_name = "table-resv-in"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::~TableResvIn()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-resv-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::TableTunnelRewrite()
{

    yang_name = "table-tunnel-rewrite"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::~TableTunnelRewrite()
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_data() const
{
    return false;
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidths()
{

    yang_name = "tunnel-auto-bandwidths"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::~TunnelAutoBandwidths()
{
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::has_data() const
{
    for (std::size_t index=0; index<tunnel_auto_bandwidth.size(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::has_operation() const
{
    for (std::size_t index=0; index<tunnel_auto_bandwidth.size(); index++)
    {
        if(tunnel_auto_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelAutoBandwidths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelAutoBandwidths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelAutoBandwidths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelAutoBandwidths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-auto-bandwidth")
    {
        for(auto const & c : tunnel_auto_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth>();
        c->parent = this;
        tunnel_auto_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelAutoBandwidths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_auto_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-auto-bandwidth")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::TunnelAutoBandwidth()
    :
    tunnel_name{YType::str, "tunnel-name"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    last_sample_bandwidth{YType::uint32, "last-sample-bandwidth"},
    samples_collected{YType::uint32, "samples-collected"},
    signaled_name{YType::str, "signaled-name"},
    signalled_bandwidth{YType::uint32, "signalled-bandwidth"},
    time_left_application{YType::uint32, "time-left-application"},
    tunnel_lsp_id{YType::uint32, "tunnel-lsp-id"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    tunnel_requested_bandwidth{YType::uint32, "tunnel-requested-bandwidth"}
    	,
    auto_bandwidth_status(std::make_shared<MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>())
{
    auto_bandwidth_status->parent = this;

    yang_name = "tunnel-auto-bandwidth"; yang_parent_name = "tunnel-auto-bandwidths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::~TunnelAutoBandwidth()
{
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_data() const
{
    return tunnel_name.is_set
	|| bandwidth_applications.is_set
	|| highest_bandwidth.is_set
	|| last_bandwidth_applied.is_set
	|| last_sample_bandwidth.is_set
	|| samples_collected.is_set
	|| signaled_name.is_set
	|| signalled_bandwidth.is_set
	|| time_left_application.is_set
	|| tunnel_lsp_id.is_set
	|| tunnel_name_xr.is_set
	|| tunnel_requested_bandwidth.is_set
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data());
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(bandwidth_applications.yfilter)
	|| ydk::is_set(highest_bandwidth.yfilter)
	|| ydk::is_set(last_bandwidth_applied.yfilter)
	|| ydk::is_set(last_sample_bandwidth.yfilter)
	|| ydk::is_set(samples_collected.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(signalled_bandwidth.yfilter)
	|| ydk::is_set(time_left_application.yfilter)
	|| ydk::is_set(tunnel_lsp_id.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(tunnel_requested_bandwidth.yfilter)
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-auto-bandwidths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-auto-bandwidth" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.yfilter)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.yfilter)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.yfilter)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (last_sample_bandwidth.is_set || is_set(last_sample_bandwidth.yfilter)) leaf_name_data.push_back(last_sample_bandwidth.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.yfilter)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (signalled_bandwidth.is_set || is_set(signalled_bandwidth.yfilter)) leaf_name_data.push_back(signalled_bandwidth.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.yfilter)) leaf_name_data.push_back(time_left_application.get_name_leafdata());
    if (tunnel_lsp_id.is_set || is_set(tunnel_lsp_id.yfilter)) leaf_name_data.push_back(tunnel_lsp_id.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (tunnel_requested_bandwidth.is_set || is_set(tunnel_requested_bandwidth.yfilter)) leaf_name_data.push_back(tunnel_requested_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status == nullptr)
        {
            auto_bandwidth_status = std::make_shared<MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus>();
        }
        return auto_bandwidth_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bandwidth_status != nullptr)
    {
        children["auto-bandwidth-status"] = auto_bandwidth_status;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
        bandwidth_applications.value_namespace = name_space;
        bandwidth_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
        highest_bandwidth.value_namespace = name_space;
        highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
        last_bandwidth_applied.value_namespace = name_space;
        last_bandwidth_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-bandwidth")
    {
        last_sample_bandwidth = value;
        last_sample_bandwidth.value_namespace = name_space;
        last_sample_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
        samples_collected.value_namespace = name_space;
        samples_collected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-bandwidth")
    {
        signalled_bandwidth = value;
        signalled_bandwidth.value_namespace = name_space;
        signalled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
        time_left_application.value_namespace = name_space;
        time_left_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id = value;
        tunnel_lsp_id.value_namespace = name_space;
        tunnel_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-requested-bandwidth")
    {
        tunnel_requested_bandwidth = value;
        tunnel_requested_bandwidth.value_namespace = name_space;
        tunnel_requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications.yfilter = yfilter;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied.yfilter = yfilter;
    }
    if(value_path == "last-sample-bandwidth")
    {
        last_sample_bandwidth.yfilter = yfilter;
    }
    if(value_path == "samples-collected")
    {
        samples_collected.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "signalled-bandwidth")
    {
        signalled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "time-left-application")
    {
        time_left_application.yfilter = yfilter;
    }
    if(value_path == "tunnel-lsp-id")
    {
        tunnel_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-requested-bandwidth")
    {
        tunnel_requested_bandwidth.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth-status" || name == "tunnel-name" || name == "bandwidth-applications" || name == "highest-bandwidth" || name == "last-bandwidth-applied" || name == "last-sample-bandwidth" || name == "samples-collected" || name == "signaled-name" || name == "signalled-bandwidth" || name == "time-left-application" || name == "tunnel-lsp-id" || name == "tunnel-name-xr" || name == "tunnel-requested-bandwidth")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{

    yang_name = "auto-bandwidth-status"; yang_parent_name = "tunnel-auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_data() const
{
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_enabled.yfilter)
	|| ydk::is_set(reactivation_time.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.yfilter)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
        is_auto_bandwidth_enabled.value_namespace = name_space;
        is_auto_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
        reactivation_time.value_namespace = name_space;
        reactivation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-enabled" || name == "reactivation-time")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsps()
{

    yang_name = "tunnel-flex-lsps"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::~TunnelFlexLsps()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::has_data() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.size(); index++)
    {
        if(tunnel_flex_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::has_operation() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.size(); index++)
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

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-flex-lsp")
    {
        for(auto const & c : tunnel_flex_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp>();
        c->parent = this;
        tunnel_flex_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_flex_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    source_address{YType::str, "source-address"},
    tun_id{YType::uint16, "tun-id"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>())
{
    protect_lsp->parent = this;
    working_lsp->parent = this;

    yang_name = "tunnel-flex-lsp"; yang_parent_name = "tunnel-flex-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::~TunnelFlexLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| is_tunnel_up.is_set
	|| source_address.is_set
	|| tun_id.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tun_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
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
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tun_id.is_set || is_set(tun_id.yfilter)) leaf_name_data.push_back(tun_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>();
        }
        return working_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tun-id")
    {
        tun_id = value;
        tun_id.value_namespace = name_space;
        tun_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tun-id")
    {
        tun_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-lsp" || name == "working-lsp" || name == "ctype" || name == "destination-address" || name == "extended-tunnel-id" || name == "is-tunnel-up" || name == "source-address" || name == "tun-id" || name == "tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ProtectLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
    	,
    association(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>())
	,flex_info(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>())
	,protection(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>())
	,reverse_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>())
{
    association->parent = this;
    flex_info->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "protect-lsp"; yang_parent_name = "tunnel-flex-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::~ProtectLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_local_label.is_set
	|| lsp_mode.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| (association !=  nullptr && association->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp>();
        }
        return reverse_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    for (auto const & c : lsp_hop)
    {
        children[c->get_segment_path()] = c;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
        lsp_local_label.value_namespace = name_space;
        lsp_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
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
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
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
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "flex-info" || name == "lsp-hop" || name == "protection" || name == "reverse-lsp" || name == "is-operational" || name == "lsp-local-label" || name == "lsp-mode" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state" || name == "lsp-uptime" || name == "path-protection-lsp-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::~Association()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-association-tie-role" || name == "s2l-association-type" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::S2LExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::~S2LExtendedId()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexInfo()
    :
    bfd_created{YType::boolean, "bfd-created"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_up{YType::boolean, "bfd-up"},
    entry_exists{YType::boolean, "entry-exists"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    in_label{YType::uint32, "in-label"},
    oam_created{YType::boolean, "oam-created"}
    	,
    flex_fec(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_data() const
{
    return bfd_created.is_set
	|| bfd_egress_label.is_set
	|| bfd_int_label.is_set
	|| bfd_next_hop.is_set
	|| bfd_out_ifh.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_up.is_set
	|| entry_exists.is_set
	|| fault_ais.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| in_label.is_set
	|| oam_created.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_fec != nullptr)
    {
        children["flex-fec"] = flex_fec;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "bfd-created" || name == "bfd-egress-label" || name == "bfd-int-label" || name == "bfd-next-hop" || name == "bfd-out-ifh" || name == "bfd-tun-ifh" || name == "bfd-up" || name == "entry-exists" || name == "fault-ais" || name == "fault-ldi" || name == "fault-ldi-lockout" || name == "fault-lkr" || name == "fault-time" || name == "in-label" || name == "oam-created")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/flex-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-ctype" || name == "s2l-fec-dest" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-source" || name == "s2l-fec-subgroup-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::~LspHop()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{

    yang_name = "protection"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::~Protection()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(shared.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "link-unprotected" || name == "lsp-unprotected" || name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et" || name == "s2l-notification" || name == "s2l-operational" || name == "s2l-protecting" || name == "s2l-secondary" || name == "shared")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"}
    	,
    association(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>())
	,protection(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>())
{
    association->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_data() const
{
    return reverse_lsp_connected.is_set
	|| reverse_lsp_present.is_set
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "protection" || name == "reverse-lsp-fec" || name == "reverse-lsp-connected" || name == "reverse-lsp-present")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-association-tie-role" || name == "s2l-association-type" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::S2LExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::~S2LExtendedId()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{

    yang_name = "protection"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(shared.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "link-unprotected" || name == "lsp-unprotected" || name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et" || name == "s2l-notification" || name == "s2l-operational" || name == "s2l-protecting" || name == "s2l-secondary" || name == "shared")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/protect-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::WorkingLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
    	,
    association(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>())
	,flex_info(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>())
	,protection(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>())
	,reverse_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>())
{
    association->parent = this;
    flex_info->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tunnel-flex-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::~WorkingLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_local_label.is_set
	|| lsp_mode.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| (association !=  nullptr && association->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
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
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(c);
        return c;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    for (auto const & c : lsp_hop)
    {
        children[c->get_segment_path()] = c;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
        lsp_local_label.value_namespace = name_space;
        lsp_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
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
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
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
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "flex-info" || name == "lsp-hop" || name == "protection" || name == "reverse-lsp" || name == "is-operational" || name == "lsp-local-label" || name == "lsp-mode" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state" || name == "lsp-uptime" || name == "path-protection-lsp-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::~Association()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-association-tie-role" || name == "s2l-association-type" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::S2LExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::~S2LExtendedId()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexInfo()
    :
    bfd_created{YType::boolean, "bfd-created"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_up{YType::boolean, "bfd-up"},
    entry_exists{YType::boolean, "entry-exists"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_time{YType::uint32, "fault-time"},
    in_label{YType::uint32, "in-label"},
    oam_created{YType::boolean, "oam-created"}
    	,
    flex_fec(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::~FlexInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_data() const
{
    return bfd_created.is_set
	|| bfd_egress_label.is_set
	|| bfd_int_label.is_set
	|| bfd_next_hop.is_set
	|| bfd_out_ifh.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_up.is_set
	|| entry_exists.is_set
	|| fault_ais.is_set
	|| fault_ldi.is_set
	|| fault_ldi_lockout.is_set
	|| fault_lkr.is_set
	|| fault_time.is_set
	|| in_label.is_set
	|| oam_created.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_fec != nullptr)
    {
        children["flex-fec"] = flex_fec;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "bfd-created" || name == "bfd-egress-label" || name == "bfd-int-label" || name == "bfd-next-hop" || name == "bfd-out-ifh" || name == "bfd-tun-ifh" || name == "bfd-up" || name == "entry-exists" || name == "fault-ais" || name == "fault-ldi" || name == "fault-ldi-lockout" || name == "fault-lkr" || name == "fault-time" || name == "in-label" || name == "oam-created")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/flex-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-ctype" || name == "s2l-fec-dest" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-source" || name == "s2l-fec-subgroup-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::~LspHop()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{

    yang_name = "protection"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::~Protection()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(shared.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "link-unprotected" || name == "lsp-unprotected" || name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et" || name == "s2l-notification" || name == "s2l-operational" || name == "s2l-protecting" || name == "s2l-secondary" || name == "shared")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLsp()
    :
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"}
    	,
    association(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>())
	,protection(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>())
{
    association->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::~ReverseLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_data() const
{
    return reverse_lsp_connected.is_set
	|| reverse_lsp_present.is_set
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "protection" || name == "reverse-lsp-fec" || name == "reverse-lsp-connected" || name == "reverse-lsp-present")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::Association()
    :
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::~Association()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_type.is_set
	|| s2l_global_source.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-association-tie-role" || name == "s2l-association-type" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::S2LExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::~S2LExtendedId()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/association/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::Protection()
    :
    any{YType::boolean, "any"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    link_unprotected{YType::boolean, "link-unprotected"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_secondary{YType::boolean, "s2l-secondary"},
    shared{YType::boolean, "shared"}
{

    yang_name = "protection"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::~Protection()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_data() const
{
    return any.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| link_unprotected.is_set
	|| lsp_unprotected.is_set
	|| one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| s2l_protecting.is_set
	|| s2l_secondary.is_set
	|| shared.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(shared.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "link-unprotected" || name == "lsp-unprotected" || name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et" || name == "s2l-notification" || name == "s2l-operational" || name == "s2l-protecting" || name == "s2l-secondary" || name == "shared")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::ReverseLspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/working-lsp/reverse-lsp/reverse-lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtections()
{

    yang_name = "tunnel-path-protections"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::~TunnelPathProtections()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::has_data() const
{
    for (std::size_t index=0; index<tunnel_path_protection.size(); index++)
    {
        if(tunnel_path_protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::has_operation() const
{
    for (std::size_t index=0; index<tunnel_path_protection.size(); index++)
    {
        if(tunnel_path_protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-path-protection")
    {
        for(auto const & c : tunnel_path_protection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection>();
        c->parent = this;
        tunnel_path_protection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_path_protection)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::TunnelPathProtections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-path-protection")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::TunnelPathProtection()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    current_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp>())
	,path_protection(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection>())
	,standby_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp>())
{
    current_lsp->parent = this;
    path_protection->parent = this;
    standby_lsp->parent = this;

    yang_name = "tunnel-path-protection"; yang_parent_name = "tunnel-path-protections"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::~TunnelPathProtection()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| is_tunnel_up.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (current_lsp !=  nullptr && current_lsp->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (standby_lsp !=  nullptr && standby_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (current_lsp !=  nullptr && current_lsp->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (standby_lsp !=  nullptr && standby_lsp->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-lsp")
    {
        if(current_lsp == nullptr)
        {
            current_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp>();
        }
        return current_lsp;
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection == nullptr)
        {
            path_protection = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection>();
        }
        return path_protection;
    }

    if(child_yang_name == "standby-lsp")
    {
        if(standby_lsp == nullptr)
        {
            standby_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp>();
        }
        return standby_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_lsp != nullptr)
    {
        children["current-lsp"] = current_lsp;
    }

    if(path_protection != nullptr)
    {
        children["path-protection"] = path_protection;
    }

    if(standby_lsp != nullptr)
    {
        children["standby-lsp"] = standby_lsp;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
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
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lsp" || name == "path-protection" || name == "standby-lsp" || name == "ctype" || name == "destination-address" || name == "extended-tunnel-id" || name == "is-tunnel-up" || name == "source-address" || name == "tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::CurrentLsp()
    :
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
{

    yang_name = "current-lsp"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::~CurrentLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srlsp_outgoing_info.size(); index++)
    {
        if(srlsp_outgoing_info[index]->has_data())
            return true;
    }
    return lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srlsp_outgoing_info.size(); index++)
    {
        if(srlsp_outgoing_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "srlsp-outgoing-info")
    {
        for(auto const & c : srlsp_outgoing_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo>();
        c->parent = this;
        srlsp_outgoing_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_hop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srlsp_outgoing_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-hop" || name == "srlsp-outgoing-info" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state" || name == "lsp-uptime" || name == "path-protection-lsp-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "current-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::~LspHop()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::SrlspOutgoingInfo()
    :
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"}
{

    yang_name = "srlsp-outgoing-info"; yang_parent_name = "current-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::~SrlspOutgoingInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_data() const
{
    return lsp_output_interface.is_set
	|| lsp_output_label.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlsp-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface.yfilter = yfilter;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-output-interface" || name == "lsp-output-label")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::PathProtection()
    :
    diversity_type{YType::enumeration, "diversity-type"},
    is_path_protect_configured{YType::boolean, "is-path-protect-configured"},
    is_path_protect_switch_over_underway{YType::boolean, "is-path-protect-switch-over-underway"},
    path_protection_protected_by_id{YType::uint32, "path-protection-protected-by-id"},
    reoptimization_time_remaining{YType::uint32, "reoptimization-time-remaining"},
    standby_reoptimized_number{YType::uint16, "standby-reoptimized-number"},
    switchover_ready{YType::uint16, "switchover-ready"},
    switchover_reason{YType::uint16, "switchover-reason"},
    switchover_total{YType::uint16, "switchover-total"},
    time_of_switchover_sec{YType::uint32, "time-of-switchover-sec"},
    valid_path_protection_path_option_exists{YType::boolean, "valid-path-protection-path-option-exists"}
    	,
    switchover(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover>())
{
    switchover->parent = this;

    yang_name = "path-protection"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::~PathProtection()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_data() const
{
    return diversity_type.is_set
	|| is_path_protect_configured.is_set
	|| is_path_protect_switch_over_underway.is_set
	|| path_protection_protected_by_id.is_set
	|| reoptimization_time_remaining.is_set
	|| standby_reoptimized_number.is_set
	|| switchover_ready.is_set
	|| switchover_reason.is_set
	|| switchover_total.is_set
	|| time_of_switchover_sec.is_set
	|| valid_path_protection_path_option_exists.is_set
	|| (switchover !=  nullptr && switchover->has_data());
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| ydk::is_set(is_path_protect_configured.yfilter)
	|| ydk::is_set(is_path_protect_switch_over_underway.yfilter)
	|| ydk::is_set(path_protection_protected_by_id.yfilter)
	|| ydk::is_set(reoptimization_time_remaining.yfilter)
	|| ydk::is_set(standby_reoptimized_number.yfilter)
	|| ydk::is_set(switchover_ready.yfilter)
	|| ydk::is_set(switchover_reason.yfilter)
	|| ydk::is_set(switchover_total.yfilter)
	|| ydk::is_set(time_of_switchover_sec.yfilter)
	|| ydk::is_set(valid_path_protection_path_option_exists.yfilter)
	|| (switchover !=  nullptr && switchover->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (is_path_protect_configured.is_set || is_set(is_path_protect_configured.yfilter)) leaf_name_data.push_back(is_path_protect_configured.get_name_leafdata());
    if (is_path_protect_switch_over_underway.is_set || is_set(is_path_protect_switch_over_underway.yfilter)) leaf_name_data.push_back(is_path_protect_switch_over_underway.get_name_leafdata());
    if (path_protection_protected_by_id.is_set || is_set(path_protection_protected_by_id.yfilter)) leaf_name_data.push_back(path_protection_protected_by_id.get_name_leafdata());
    if (reoptimization_time_remaining.is_set || is_set(reoptimization_time_remaining.yfilter)) leaf_name_data.push_back(reoptimization_time_remaining.get_name_leafdata());
    if (standby_reoptimized_number.is_set || is_set(standby_reoptimized_number.yfilter)) leaf_name_data.push_back(standby_reoptimized_number.get_name_leafdata());
    if (switchover_ready.is_set || is_set(switchover_ready.yfilter)) leaf_name_data.push_back(switchover_ready.get_name_leafdata());
    if (switchover_reason.is_set || is_set(switchover_reason.yfilter)) leaf_name_data.push_back(switchover_reason.get_name_leafdata());
    if (switchover_total.is_set || is_set(switchover_total.yfilter)) leaf_name_data.push_back(switchover_total.get_name_leafdata());
    if (time_of_switchover_sec.is_set || is_set(time_of_switchover_sec.yfilter)) leaf_name_data.push_back(time_of_switchover_sec.get_name_leafdata());
    if (valid_path_protection_path_option_exists.is_set || is_set(valid_path_protection_path_option_exists.yfilter)) leaf_name_data.push_back(valid_path_protection_path_option_exists.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover")
    {
        if(switchover == nullptr)
        {
            switchover = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover>();
        }
        return switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchover != nullptr)
    {
        children["switchover"] = switchover;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured = value;
        is_path_protect_configured.value_namespace = name_space;
        is_path_protect_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway = value;
        is_path_protect_switch_over_underway.value_namespace = name_space;
        is_path_protect_switch_over_underway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id = value;
        path_protection_protected_by_id.value_namespace = name_space;
        path_protection_protected_by_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining = value;
        reoptimization_time_remaining.value_namespace = name_space;
        reoptimization_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number = value;
        standby_reoptimized_number.value_namespace = name_space;
        standby_reoptimized_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready = value;
        switchover_ready.value_namespace = name_space;
        switchover_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason = value;
        switchover_reason.value_namespace = name_space;
        switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-total")
    {
        switchover_total = value;
        switchover_total.value_namespace = name_space;
        switchover_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec = value;
        time_of_switchover_sec.value_namespace = name_space;
        time_of_switchover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists = value;
        valid_path_protection_path_option_exists.value_namespace = name_space;
        valid_path_protection_path_option_exists.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway.yfilter = yfilter;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id.yfilter = yfilter;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining.yfilter = yfilter;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number.yfilter = yfilter;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready.yfilter = yfilter;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason.yfilter = yfilter;
    }
    if(value_path == "switchover-total")
    {
        switchover_total.yfilter = yfilter;
    }
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec.yfilter = yfilter;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "diversity-type" || name == "is-path-protect-configured" || name == "is-path-protect-switch-over-underway" || name == "path-protection-protected-by-id" || name == "reoptimization-time-remaining" || name == "standby-reoptimized-number" || name == "switchover-ready" || name == "switchover-reason" || name == "switchover-total" || name == "time-of-switchover-sec" || name == "valid-path-protection-path-option-exists")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::Switchover()
    :
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    to_lsp_id{YType::uint16, "to-lsp-id"}
{

    yang_name = "switchover"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::~Switchover()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_data() const
{
    return date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| from_lsp_id.is_set
	|| path_protection_switchover_event_index.is_set
	|| path_protection_switchover_reason.is_set
	|| path_protection_tunnel_id.is_set
	|| switchover_duration_millisec.is_set
	|| to_lsp_id.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection = value;
        date_of_error_detection.value_namespace = name_space;
        date_of_error_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec = value;
        date_of_error_detection_millisec.value_namespace = name_space;
        date_of_error_detection_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "from-lsp-id" || name == "path-protection-switchover-event-index" || name == "path-protection-switchover-reason" || name == "path-protection-tunnel-id" || name == "switchover-duration-millisec" || name == "to-lsp-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::StandbyLsp()
    :
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"}
{

    yang_name = "standby-lsp"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::~StandbyLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_data() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srlsp_outgoing_info.size(); index++)
    {
        if(srlsp_outgoing_info[index]->has_data())
            return true;
    }
    return lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.size(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srlsp_outgoing_info.size(); index++)
    {
        if(srlsp_outgoing_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-hop")
    {
        for(auto const & c : lsp_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop>();
        c->parent = this;
        lsp_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "srlsp-outgoing-info")
    {
        for(auto const & c : srlsp_outgoing_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo>();
        c->parent = this;
        srlsp_outgoing_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_hop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srlsp_outgoing_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-hop" || name == "srlsp-outgoing-info" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state" || name == "lsp-uptime" || name == "path-protection-lsp-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "standby-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::~LspHop()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::SrlspOutgoingInfo()
    :
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"}
{

    yang_name = "srlsp-outgoing-info"; yang_parent_name = "standby-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::~SrlspOutgoingInfo()
{
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_data() const
{
    return lsp_output_interface.is_set
	|| lsp_output_label.is_set;
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlsp-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface.yfilter = yfilter;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-output-interface" || name == "lsp-output-label")
        return true;
    return false;
}

MplsTeStandby::WrapProtection::WrapProtection()
    :
    protected_lsps(std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps>())
{
    protected_lsps->parent = this;

    yang_name = "wrap-protection"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (protected_lsps !=  nullptr && protected_lsps->has_operation());
}

std::string MplsTeStandby::WrapProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wrap-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsTeStandby::WrapProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::WrapProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::WrapProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsps")
        return true;
    return false;
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsps()
{

    yang_name = "protected-lsps"; yang_parent_name = "wrap-protection"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::ProtectedLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void MplsTeStandby::WrapProtection::ProtectedLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::WrapProtection::ProtectedLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsp")
        return true;
    return false;
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

    yang_name = "protected-lsp"; yang_parent_name = "protected-lsps"; is_top_level_class = false; has_list_ancestor = false;
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
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(lsp_wrap_protection_enable.yfilter)
	|| ydk::is_set(lsp_wrap_protection_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_state.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter)
	|| ydk::is_set(reverse_egress_interface.yfilter)
	|| ydk::is_set(reverse_lsp_label.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/protected-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsp" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[session-type='" <<session_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_name_leaf_data() const
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
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.yfilter)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.yfilter)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

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

void MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
        lsp_wrap_protection_enable.value_namespace = name_space;
        lsp_wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
        lsp_wrap_protection_label.value_namespace = name_space;
        lsp_wrap_protection_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
        lsp_wrap_protection_state.value_namespace = name_space;
        lsp_wrap_protection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
        reverse_egress_interface.value_namespace = name_space;
        reverse_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
        reverse_lsp_label.value_namespace = name_space;
        reverse_lsp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "destination-address-xr" || name == "extended-tunnel-id-xr" || name == "lsp-wrap-protection-enable" || name == "lsp-wrap-protection-label" || name == "lsp-wrap-protection-state" || name == "p2mp-id-xr" || name == "reverse-egress-interface" || name == "reverse-lsp-label" || name == "source-address-xr" || name == "sub-group-id-xr" || name == "sub-group-original-id" || name == "tunnel-id-xr" || name == "tunnel-instance" || name == "tunnel-name")
        return true;
    return false;
}

MplsTp::MplsTp()
    :
    tp_global_parameters(std::make_shared<MplsTp::TpGlobalParameters>())
	,tp_links(std::make_shared<MplsTp::TpLinks>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels>())
{
    tp_global_parameters->parent = this;
    tp_links->parent = this;
    tp_midpoints->parent = this;
    tp_tunnels->parent = this;

    yang_name = "mpls-tp"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsTp::~MplsTp()
{
}

bool MplsTp::has_data() const
{
    return (tp_global_parameters !=  nullptr && tp_global_parameters->has_data())
	|| (tp_links !=  nullptr && tp_links->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::has_operation() const
{
    return is_set(yfilter)
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-global-parameters")
    {
        if(tp_global_parameters == nullptr)
        {
            tp_global_parameters = std::make_shared<MplsTp::TpGlobalParameters>();
        }
        return tp_global_parameters;
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks>();
        }
        return tp_links;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints>();
        }
        return tp_midpoints;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels>();
        }
        return tp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tp_global_parameters != nullptr)
    {
        children["tp-global-parameters"] = tp_global_parameters;
    }

    if(tp_links != nullptr)
    {
        children["tp-links"] = tp_links;
    }

    if(tp_midpoints != nullptr)
    {
        children["tp-midpoints"] = tp_midpoints;
    }

    if(tp_tunnels != nullptr)
    {
        children["tp-tunnels"] = tp_tunnels;
    }

    return children;
}

void MplsTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsTp::clone_ptr() const
{
    return std::make_shared<MplsTp>();
}

std::string MplsTp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-global-parameters" || name == "tp-links" || name == "tp-midpoints" || name == "tp-tunnels")
        return true;
    return false;
}

MplsTp::TpGlobalParameters::TpGlobalParameters()
    :
    alarm_suppression{YType::boolean, "alarm-suppression"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_interval_in_micro_sec{YType::boolean, "bfd-interval-in-micro-sec"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    oam_refresh{YType::uint32, "oam-refresh"},
    soak_time{YType::uint32, "soak-time"},
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"}
    	,
    oam_protection_triggers(std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>())
{
    oam_protection_triggers->parent = this;

    yang_name = "tp-global-parameters"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpGlobalParameters::~TpGlobalParameters()
{
}

bool MplsTp::TpGlobalParameters::has_data() const
{
    return alarm_suppression.is_set
	|| bfd_interval.is_set
	|| bfd_interval_in_micro_sec.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier.is_set
	|| bfd_multiplier_standby.is_set
	|| global_id.is_set
	|| node_id.is_set
	|| oam_refresh.is_set
	|| soak_time.is_set
	|| wait_to_restore_interval.is_set
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data());
}

bool MplsTp::TpGlobalParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_suppression.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_interval_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_interval_standby.yfilter)
	|| ydk::is_set(bfd_interval_standby_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_multiplier_standby.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(oam_refresh.yfilter)
	|| ydk::is_set(soak_time.yfilter)
	|| ydk::is_set(wait_to_restore_interval.yfilter)
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation());
}

std::string MplsTp::TpGlobalParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpGlobalParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-global-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpGlobalParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_suppression.is_set || is_set(alarm_suppression.yfilter)) leaf_name_data.push_back(alarm_suppression.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_interval_in_micro_sec.is_set || is_set(bfd_interval_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_in_micro_sec.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.yfilter)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.yfilter)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (oam_refresh.is_set || is_set(oam_refresh.yfilter)) leaf_name_data.push_back(oam_refresh.get_name_leafdata());
    if (soak_time.is_set || is_set(soak_time.yfilter)) leaf_name_data.push_back(soak_time.get_name_leafdata());
    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.yfilter)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpGlobalParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers == nullptr)
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>();
        }
        return oam_protection_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpGlobalParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam_protection_triggers != nullptr)
    {
        children["oam-protection-triggers"] = oam_protection_triggers;
    }

    return children;
}

void MplsTp::TpGlobalParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-suppression")
    {
        alarm_suppression = value;
        alarm_suppression.value_namespace = name_space;
        alarm_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-in-micro-sec")
    {
        bfd_interval_in_micro_sec = value;
        bfd_interval_in_micro_sec.value_namespace = name_space;
        bfd_interval_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
        bfd_interval_standby.value_namespace = name_space;
        bfd_interval_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
        bfd_interval_standby_in_micro_sec.value_namespace = name_space;
        bfd_interval_standby_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
        bfd_multiplier_standby.value_namespace = name_space;
        bfd_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh")
    {
        oam_refresh = value;
        oam_refresh.value_namespace = name_space;
        oam_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soak-time")
    {
        soak_time = value;
        soak_time.value_namespace = name_space;
        soak_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
        wait_to_restore_interval.value_namespace = name_space;
        wait_to_restore_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpGlobalParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-suppression")
    {
        alarm_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-in-micro-sec")
    {
        bfd_interval_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "oam-refresh")
    {
        oam_refresh.yfilter = yfilter;
    }
    if(value_path == "soak-time")
    {
        soak_time.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval.yfilter = yfilter;
    }
}

bool MplsTp::TpGlobalParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-protection-triggers" || name == "alarm-suppression" || name == "bfd-interval" || name == "bfd-interval-in-micro-sec" || name == "bfd-interval-standby" || name == "bfd-interval-standby-in-micro-sec" || name == "bfd-multiplier" || name == "bfd-multiplier-standby" || name == "global-id" || name == "node-id" || name == "oam-refresh" || name == "soak-time" || name == "wait-to-restore-interval")
        return true;
    return false;
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-global-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string MplsTp::TpGlobalParameters::OamProtectionTriggers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-global-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpGlobalParameters::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpGlobalParameters::OamProtectionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpGlobalParameters::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpGlobalParameters::OamProtectionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpGlobalParameters::OamProtectionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpGlobalParameters::OamProtectionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks()
    :
    tp_detail_links(std::make_shared<MplsTp::TpLinks::TpDetailLinks>())
	,tp_link_summary(std::make_shared<MplsTp::TpLinks::TpLinkSummary>())
	,tp_links(std::make_shared<MplsTp::TpLinks::TpLinks_>())
{
    tp_detail_links->parent = this;
    tp_link_summary->parent = this;
    tp_links->parent = this;

    yang_name = "tp-links"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::~TpLinks()
{
}

bool MplsTp::TpLinks::has_data() const
{
    return (tp_detail_links !=  nullptr && tp_detail_links->has_data())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_data())
	|| (tp_links !=  nullptr && tp_links->has_data());
}

bool MplsTp::TpLinks::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_links !=  nullptr && tp_detail_links->has_operation())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation());
}

std::string MplsTp::TpLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-links")
    {
        if(tp_detail_links == nullptr)
        {
            tp_detail_links = std::make_shared<MplsTp::TpLinks::TpDetailLinks>();
        }
        return tp_detail_links;
    }

    if(child_yang_name == "tp-link-summary")
    {
        if(tp_link_summary == nullptr)
        {
            tp_link_summary = std::make_shared<MplsTp::TpLinks::TpLinkSummary>();
        }
        return tp_link_summary;
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks::TpLinks_>();
        }
        return tp_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tp_detail_links != nullptr)
    {
        children["tp-detail-links"] = tp_detail_links;
    }

    if(tp_link_summary != nullptr)
    {
        children["tp-link-summary"] = tp_link_summary;
    }

    if(tp_links != nullptr)
    {
        children["tp-links"] = tp_links;
    }

    return children;
}

void MplsTp::TpLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-links" || name == "tp-link-summary" || name == "tp-links")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLinks()
{

    yang_name = "tp-detail-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpDetailLinks::~TpDetailLinks()
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_data() const
{
    for (std::size_t index=0; index<tp_detail_link.size(); index++)
    {
        if(tp_detail_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpDetailLinks::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_link.size(); index++)
    {
        if(tp_detail_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-link")
    {
        for(auto const & c : tp_detail_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpLinks::TpDetailLinks::TpDetailLink>();
        c->parent = this;
        tp_detail_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpDetailLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_detail_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpLinks::TpDetailLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpDetailLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::TpDetailLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    interface{YType::str, "interface"},
    link_id{YType::uint32, "link-id"},
    link_state{YType::enumeration, "link-state"},
    ls_ps{YType::uint32, "ls-ps"},
    next_hop_address{YType::str, "next-hop-address"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    unsupported_linecard{YType::boolean, "unsupported-linecard"}
{

    yang_name = "tp-detail-link"; yang_parent_name = "tp-detail-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::~TpDetailLink()
{
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_data() const
{
    return tp_link_id.is_set
	|| available_bandwidth.is_set
	|| interface.is_set
	|| link_id.is_set
	|| link_state.is_set
	|| ls_ps.is_set
	|| next_hop_address.is_set
	|| reserved_bandwidth.is_set
	|| unsupported_linecard.is_set;
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(unsupported_linecard.yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-detail-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-link" <<"[tp-link-id='" <<tp_link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (unsupported_linecard.is_set || is_set(unsupported_linecard.yfilter)) leaf_name_data.push_back(unsupported_linecard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard = value;
        unsupported_linecard.value_namespace = name_space;
        unsupported_linecard.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "available-bandwidth" || name == "interface" || name == "link-id" || name == "link-state" || name == "ls-ps" || name == "next-hop-address" || name == "reserved-bandwidth" || name == "unsupported-linecard")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinkSummary::TpLinkSummary()
    :
    links{YType::uint32, "links"}
{

    yang_name = "tp-link-summary"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinkSummary::~TpLinkSummary()
{
}

bool MplsTp::TpLinks::TpLinkSummary::has_data() const
{
    return links.is_set;
}

bool MplsTp::TpLinks::TpLinkSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string MplsTp::TpLinks::TpLinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpLinks::TpLinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLinks_()
{

    yang_name = "tp-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinks_::~TpLinks_()
{
}

bool MplsTp::TpLinks::TpLinks_::has_data() const
{
    for (std::size_t index=0; index<tp_link.size(); index++)
    {
        if(tp_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpLinks_::has_operation() const
{
    for (std::size_t index=0; index<tp_link.size(); index++)
    {
        if(tp_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-link")
    {
        for(auto const & c : tp_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpLinks::TpLinks_::TpLink>();
        c->parent = this;
        tp_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinks_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpLinks::TpLinks_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpLinks_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpLinks_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLink::TpLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    interface{YType::str, "interface"},
    link_id{YType::uint32, "link-id"},
    link_state{YType::enumeration, "link-state"},
    next_hop_address{YType::str, "next-hop-address"}
{

    yang_name = "tp-link"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinks_::TpLink::~TpLink()
{
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_data() const
{
    return tp_link_id.is_set
	|| available_bandwidth.is_set
	|| interface.is_set
	|| link_id.is_set
	|| link_state.is_set
	|| next_hop_address.is_set;
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link" <<"[tp-link-id='" <<tp_link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::TpLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::TpLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinks_::TpLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "available-bandwidth" || name == "interface" || name == "link-id" || name == "link-state" || name == "next-hop-address")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints()
    :
    tp_detail_midpoints(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>())
	,tp_midpoint_summary(std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>())
{
    tp_detail_midpoints->parent = this;
    tp_midpoint_summary->parent = this;
    tp_midpoints->parent = this;

    yang_name = "tp-midpoints"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::~TpMidpoints()
{
}

bool MplsTp::TpMidpoints::has_data() const
{
    return (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_data())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data());
}

bool MplsTp::TpMidpoints::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_operation())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation());
}

std::string MplsTp::TpMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoints")
    {
        if(tp_detail_midpoints == nullptr)
        {
            tp_detail_midpoints = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>();
        }
        return tp_detail_midpoints;
    }

    if(child_yang_name == "tp-midpoint-summary")
    {
        if(tp_midpoint_summary == nullptr)
        {
            tp_midpoint_summary = std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>();
        }
        return tp_midpoint_summary;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>();
        }
        return tp_midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tp_detail_midpoints != nullptr)
    {
        children["tp-detail-midpoints"] = tp_detail_midpoints;
    }

    if(tp_midpoint_summary != nullptr)
    {
        children["tp-midpoint-summary"] = tp_midpoint_summary;
    }

    if(tp_midpoints != nullptr)
    {
        children["tp-midpoints"] = tp_midpoints;
    }

    return children;
}

void MplsTp::TpMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoints" || name == "tp-midpoint-summary" || name == "tp-midpoints")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoints()
{

    yang_name = "tp-detail-midpoints"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::~TpDetailMidpoints()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_data() const
{
    for (std::size_t index=0; index<tp_detail_midpoint.size(); index++)
    {
        if(tp_detail_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_midpoint.size(); index++)
    {
        if(tp_detail_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoint")
    {
        for(auto const & c : tp_detail_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint>();
        c->parent = this;
        tp_detail_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_detail_midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoint")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::TpDetailMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    forward_lsp_reserved_bandwidth{YType::uint32, "forward-lsp-reserved-bandwidth"},
    reverse_lsp_reserved_bandwidth{YType::uint32, "reverse-lsp-reserved-bandwidth"}
    	,
    brief_lsp_information(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>())
	,forward_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>())
	,reverse_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>())
{
    brief_lsp_information->parent = this;
    forward_lsp->parent = this;
    reverse_lsp->parent = this;

    yang_name = "tp-detail-midpoint"; yang_parent_name = "tp-detail-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::~TpDetailMidpoint()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_data() const
{
    return tp_midpoint_name.is_set
	|| forward_lsp_reserved_bandwidth.is_set
	|| reverse_lsp_reserved_bandwidth.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_midpoint_name.yfilter)
	|| ydk::is_set(forward_lsp_reserved_bandwidth.yfilter)
	|| ydk::is_set(reverse_lsp_reserved_bandwidth.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-detail-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoint" <<"[tp-midpoint-name='" <<tp_midpoint_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.yfilter)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (forward_lsp_reserved_bandwidth.is_set || is_set(forward_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(forward_lsp_reserved_bandwidth.get_name_leafdata());
    if (reverse_lsp_reserved_bandwidth.is_set || is_set(reverse_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(reverse_lsp_reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp == nullptr)
        {
            forward_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>();
        }
        return forward_lsp;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>();
        }
        return reverse_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_lsp_information != nullptr)
    {
        children["brief-lsp-information"] = brief_lsp_information;
    }

    if(forward_lsp != nullptr)
    {
        children["forward-lsp"] = forward_lsp;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
        tp_midpoint_name.value_namespace = name_space;
        tp_midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth = value;
        forward_lsp_reserved_bandwidth.value_namespace = name_space;
        forward_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth = value;
        reverse_lsp_reserved_bandwidth.value_namespace = name_space;
        reverse_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "forward-lsp" || name == "reverse-lsp" || name == "tp-midpoint-name" || name == "forward-lsp-reserved-bandwidth" || name == "reverse-lsp-reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::BriefLspInformation()
    :
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    lsp_id{YType::uint32, "lsp-id"},
    midpoint_name{YType::str, "midpoint-name"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::~BriefLspInformation()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_data() const
{
    return destination_global_id.is_set
	|| destination_node_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| lsp_id.is_set
	|| midpoint_name.is_set
	|| reverse_lsp_state.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_tunnel_id.yfilter)
	|| ydk::is_set(forward_lsp_state.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(reverse_lsp_state.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.yfilter)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.yfilter)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.yfilter)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
        destination_tunnel_id.value_namespace = name_space;
        destination_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
        forward_lsp_state.value_namespace = name_space;
        forward_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
        reverse_lsp_state.value_namespace = name_space;
        reverse_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-global-id" || name == "destination-node-id" || name == "destination-tunnel-id" || name == "forward-lsp-state" || name == "lsp-id" || name == "midpoint-name" || name == "reverse-lsp-state" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::ForwardLsp()
    :
    bandwidth{YType::uint32, "bandwidth"},
    in_label{YType::uint32, "in-label"},
    next_hop_address{YType::str, "next-hop-address"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "forward-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_data() const
{
    return bandwidth.is_set
	|| in_label.is_set
	|| next_hop_address.is_set
	|| oam_refresh_interval.is_set
	|| out_label.is_set
	|| out_link.is_set
	|| outgoing_interface.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "in-label" || name == "next-hop-address" || name == "oam-refresh-interval" || name == "out-label" || name == "out-link" || name == "outgoing-interface")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::ReverseLsp()
    :
    bandwidth{YType::uint32, "bandwidth"},
    in_label{YType::uint32, "in-label"},
    next_hop_address{YType::str, "next-hop-address"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "reverse-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_data() const
{
    return bandwidth.is_set
	|| in_label.is_set
	|| next_hop_address.is_set
	|| oam_refresh_interval.is_set
	|| out_label.is_set
	|| out_link.is_set
	|| outgoing_interface.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "in-label" || name == "next-hop-address" || name == "oam-refresh-interval" || name == "out-label" || name == "out-link" || name == "outgoing-interface")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpointSummary::TpMidpointSummary()
    :
    down_forward_ls_ps{YType::uint32, "down-forward-ls-ps"},
    down_reverse_ls_ps{YType::uint32, "down-reverse-ls-ps"},
    mid_points{YType::uint32, "mid-points"},
    up_forward_ls_ps{YType::uint32, "up-forward-ls-ps"},
    up_reverse_ls_ps{YType::uint32, "up-reverse-ls-ps"}
{

    yang_name = "tp-midpoint-summary"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpMidpointSummary::~TpMidpointSummary()
{
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_data() const
{
    return down_forward_ls_ps.is_set
	|| down_reverse_ls_ps.is_set
	|| mid_points.is_set
	|| up_forward_ls_ps.is_set
	|| up_reverse_ls_ps.is_set;
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_forward_ls_ps.yfilter)
	|| ydk::is_set(down_reverse_ls_ps.yfilter)
	|| ydk::is_set(mid_points.yfilter)
	|| ydk::is_set(up_forward_ls_ps.yfilter)
	|| ydk::is_set(up_reverse_ls_ps.yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpointSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpointSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_forward_ls_ps.is_set || is_set(down_forward_ls_ps.yfilter)) leaf_name_data.push_back(down_forward_ls_ps.get_name_leafdata());
    if (down_reverse_ls_ps.is_set || is_set(down_reverse_ls_ps.yfilter)) leaf_name_data.push_back(down_reverse_ls_ps.get_name_leafdata());
    if (mid_points.is_set || is_set(mid_points.yfilter)) leaf_name_data.push_back(mid_points.get_name_leafdata());
    if (up_forward_ls_ps.is_set || is_set(up_forward_ls_ps.yfilter)) leaf_name_data.push_back(up_forward_ls_ps.get_name_leafdata());
    if (up_reverse_ls_ps.is_set || is_set(up_reverse_ls_ps.yfilter)) leaf_name_data.push_back(up_reverse_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpMidpointSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpMidpoints::TpMidpointSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-forward-ls-ps")
    {
        down_forward_ls_ps = value;
        down_forward_ls_ps.value_namespace = name_space;
        down_forward_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-reverse-ls-ps")
    {
        down_reverse_ls_ps = value;
        down_reverse_ls_ps.value_namespace = name_space;
        down_reverse_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid-points")
    {
        mid_points = value;
        mid_points.value_namespace = name_space;
        mid_points.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-forward-ls-ps")
    {
        up_forward_ls_ps = value;
        up_forward_ls_ps.value_namespace = name_space;
        up_forward_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-reverse-ls-ps")
    {
        up_reverse_ls_ps = value;
        up_reverse_ls_ps.value_namespace = name_space;
        up_reverse_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpMidpointSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-forward-ls-ps")
    {
        down_forward_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-reverse-ls-ps")
    {
        down_reverse_ls_ps.yfilter = yfilter;
    }
    if(value_path == "mid-points")
    {
        mid_points.yfilter = yfilter;
    }
    if(value_path == "up-forward-ls-ps")
    {
        up_forward_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-reverse-ls-ps")
    {
        up_reverse_ls_ps.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-forward-ls-ps" || name == "down-reverse-ls-ps" || name == "mid-points" || name == "up-forward-ls-ps" || name == "up-reverse-ls-ps")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoints_()
{

    yang_name = "tp-midpoints"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpMidpoints_::~TpMidpoints_()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_data() const
{
    for (std::size_t index=0; index<tp_midpoint.size(); index++)
    {
        if(tp_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_operation() const
{
    for (std::size_t index=0; index<tp_midpoint.size(); index++)
    {
        if(tp_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpoints_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpoints_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpoints_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-midpoint")
    {
        for(auto const & c : tp_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint>();
        c->parent = this;
        tp_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpMidpoints_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpMidpoints::TpMidpoints_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::TpMidpoints_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-midpoint")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::TpMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    lsp_id{YType::uint32, "lsp-id"},
    midpoint_name{YType::str, "midpoint-name"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "tp-midpoint"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::~TpMidpoint()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_data() const
{
    return tp_midpoint_name.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| lsp_id.is_set
	|| midpoint_name.is_set
	|| reverse_lsp_state.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set;
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_midpoint_name.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_tunnel_id.yfilter)
	|| ydk::is_set(forward_lsp_state.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(reverse_lsp_state.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint" <<"[tp-midpoint-name='" <<tp_midpoint_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.yfilter)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.yfilter)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.yfilter)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.yfilter)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
        tp_midpoint_name.value_namespace = name_space;
        tp_midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
        destination_tunnel_id.value_namespace = name_space;
        destination_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
        forward_lsp_state.value_namespace = name_space;
        forward_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
        reverse_lsp_state.value_namespace = name_space;
        reverse_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-midpoint-name" || name == "destination-global-id" || name == "destination-node-id" || name == "destination-tunnel-id" || name == "forward-lsp-state" || name == "lsp-id" || name == "midpoint-name" || name == "reverse-lsp-state" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels()
    :
    tp_detail_tunnels(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>())
	,tp_tunnel_summary(std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels::TpTunnels_>())
{
    tp_detail_tunnels->parent = this;
    tp_tunnel_summary->parent = this;
    tp_tunnels->parent = this;

    yang_name = "tp-tunnels"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::~TpTunnels()
{
}

bool MplsTp::TpTunnels::has_data() const
{
    return (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_data())
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::TpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_operation())
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::TpTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-tunnels")
    {
        if(tp_detail_tunnels == nullptr)
        {
            tp_detail_tunnels = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>();
        }
        return tp_detail_tunnels;
    }

    if(child_yang_name == "tp-tunnel-summary")
    {
        if(tp_tunnel_summary == nullptr)
        {
            tp_tunnel_summary = std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>();
        }
        return tp_tunnel_summary;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels::TpTunnels_>();
        }
        return tp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tp_detail_tunnels != nullptr)
    {
        children["tp-detail-tunnels"] = tp_detail_tunnels;
    }

    if(tp_tunnel_summary != nullptr)
    {
        children["tp-tunnel-summary"] = tp_tunnel_summary;
    }

    if(tp_tunnels != nullptr)
    {
        children["tp-tunnels"] = tp_tunnels;
    }

    return children;
}

void MplsTp::TpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-tunnels" || name == "tp-tunnel-summary" || name == "tp-tunnels")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnels()
{

    yang_name = "tp-detail-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpDetailTunnels::~TpDetailTunnels()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_data() const
{
    for (std::size_t index=0; index<tp_detail_tunnel.size(); index++)
    {
        if(tp_detail_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_tunnel.size(); index++)
    {
        if(tp_detail_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-tunnel")
    {
        for(auto const & c : tp_detail_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel>();
        c->parent = this;
        tp_detail_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_detail_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpDetailTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::TpDetailTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    bfd_interval_active{YType::uint32, "bfd-interval-active"},
    bfd_interval_active_in_micro_sec{YType::boolean, "bfd-interval-active-in-micro-sec"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier_active{YType::uint32, "bfd-multiplier-active"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    oam_interval{YType::uint32, "oam-interval"},
    req_bandwidth{YType::uint32, "req-bandwidth"},
    switch_over_time{YType::uint32, "switch-over-time"},
    switchover_trig{YType::enumeration, "switchover-trig"},
    tunnel_up_time{YType::uint32, "tunnel-up-time"}
    	,
    oam_protection_triggers(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>())
	,protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>())
	,tunnel(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>())
{
    oam_protection_triggers->parent = this;
    protect_lsp->parent = this;
    tunnel->parent = this;
    working_lsp->parent = this;

    yang_name = "tp-detail-tunnel"; yang_parent_name = "tp-detail-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::~TpDetailTunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| bfd_interval_active.is_set
	|| bfd_interval_active_in_micro_sec.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier_active.is_set
	|| bfd_multiplier_standby.is_set
	|| oam_interval.is_set
	|| req_bandwidth.is_set
	|| switch_over_time.is_set
	|| switchover_trig.is_set
	|| tunnel_up_time.is_set
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(bfd_interval_active.yfilter)
	|| ydk::is_set(bfd_interval_active_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_interval_standby.yfilter)
	|| ydk::is_set(bfd_interval_standby_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier_active.yfilter)
	|| ydk::is_set(bfd_multiplier_standby.yfilter)
	|| ydk::is_set(oam_interval.yfilter)
	|| ydk::is_set(req_bandwidth.yfilter)
	|| ydk::is_set(switch_over_time.yfilter)
	|| ydk::is_set(switchover_trig.yfilter)
	|| ydk::is_set(tunnel_up_time.yfilter)
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-detail-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (bfd_interval_active.is_set || is_set(bfd_interval_active.yfilter)) leaf_name_data.push_back(bfd_interval_active.get_name_leafdata());
    if (bfd_interval_active_in_micro_sec.is_set || is_set(bfd_interval_active_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_active_in_micro_sec.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.yfilter)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_active.is_set || is_set(bfd_multiplier_active.yfilter)) leaf_name_data.push_back(bfd_multiplier_active.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.yfilter)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (oam_interval.is_set || is_set(oam_interval.yfilter)) leaf_name_data.push_back(oam_interval.get_name_leafdata());
    if (req_bandwidth.is_set || is_set(req_bandwidth.yfilter)) leaf_name_data.push_back(req_bandwidth.get_name_leafdata());
    if (switch_over_time.is_set || is_set(switch_over_time.yfilter)) leaf_name_data.push_back(switch_over_time.get_name_leafdata());
    if (switchover_trig.is_set || is_set(switchover_trig.yfilter)) leaf_name_data.push_back(switchover_trig.get_name_leafdata());
    if (tunnel_up_time.is_set || is_set(tunnel_up_time.yfilter)) leaf_name_data.push_back(tunnel_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers == nullptr)
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>();
        }
        return oam_protection_triggers;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam_protection_triggers != nullptr)
    {
        children["oam-protection-triggers"] = oam_protection_triggers;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active = value;
        bfd_interval_active.value_namespace = name_space;
        bfd_interval_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec = value;
        bfd_interval_active_in_micro_sec.value_namespace = name_space;
        bfd_interval_active_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
        bfd_interval_standby.value_namespace = name_space;
        bfd_interval_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
        bfd_interval_standby_in_micro_sec.value_namespace = name_space;
        bfd_interval_standby_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active = value;
        bfd_multiplier_active.value_namespace = name_space;
        bfd_multiplier_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
        bfd_multiplier_standby.value_namespace = name_space;
        bfd_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-interval")
    {
        oam_interval = value;
        oam_interval.value_namespace = name_space;
        oam_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth = value;
        req_bandwidth.value_namespace = name_space;
        req_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time = value;
        switch_over_time.value_namespace = name_space;
        switch_over_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig = value;
        switchover_trig.value_namespace = name_space;
        switchover_trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time = value;
        tunnel_up_time.value_namespace = name_space;
        tunnel_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "oam-interval")
    {
        oam_interval.yfilter = yfilter;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth.yfilter = yfilter;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time.yfilter = yfilter;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig.yfilter = yfilter;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-protection-triggers" || name == "protect-lsp" || name == "tunnel" || name == "working-lsp" || name == "tp-tunnel-name" || name == "bfd-interval-active" || name == "bfd-interval-active-in-micro-sec" || name == "bfd-interval-standby" || name == "bfd-interval-standby-in-micro-sec" || name == "bfd-multiplier-active" || name == "bfd-multiplier-standby" || name == "oam-interval" || name == "req-bandwidth" || name == "switch-over-time" || name == "switchover-trig" || name == "tunnel-up-time")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    link_id{YType::uint32, "link-id"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    tp_out_label{YType::uint32, "tp-out-label"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "protect-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_data() const
{
    return in_label.is_set
	|| link_id.is_set
	|| oam_refresh_interval.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| reserved_bandwidth.is_set
	|| tp_out_label.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_information != nullptr)
    {
        children["brief-information"] = brief_information;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "in-label" || name == "link-id" || name == "oam-refresh-interval" || name == "out-interface-name" || name == "out-next-hop" || name == "reserved-bandwidth" || name == "tp-out-label")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::BriefInformation()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "brief-information"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::Tunnel()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    admin_status{YType::enumeration, "admin-status"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    operation_status{YType::enumeration, "operation-status"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>())
{
    protect_lsp->parent = this;
    working_lsp->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::~Tunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_data() const
{
    return active_lsp.is_set
	|| admin_status.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| operation_status.is_set
	|| remote_tunnel_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-lsp" || name == "working-lsp" || name == "active-lsp" || name == "admin-status" || name == "destination-global-id" || name == "destination-node-id" || name == "operation-status" || name == "remote-tunnel-id" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::ProtectLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::WorkingLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    link_id{YType::uint32, "link-id"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    tp_out_label{YType::uint32, "tp-out-label"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_data() const
{
    return in_label.is_set
	|| link_id.is_set
	|| oam_refresh_interval.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| reserved_bandwidth.is_set
	|| tp_out_label.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_information != nullptr)
    {
        children["brief-information"] = brief_information;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "in-label" || name == "link-id" || name == "oam-refresh-interval" || name == "out-interface-name" || name == "out-next-hop" || name == "reserved-bandwidth" || name == "tp-out-label")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::BriefInformation()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "brief-information"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnelSummary::TpTunnelSummary()
    :
    active_protect_ls_ps{YType::uint32, "active-protect-ls-ps"},
    active_working_ls_ps{YType::uint32, "active-working-ls-ps"},
    admin_down_tunnels{YType::uint32, "admin-down-tunnels"},
    bfd_session_protect_ls_ps{YType::uint32, "bfd-session-protect-ls-ps"},
    bfd_session_working_ls_ps{YType::uint32, "bfd-session-working-ls-ps"},
    complete_fec_protect_ls_ps{YType::uint32, "complete-fec-protect-ls-ps"},
    complete_fec_working_ls_ps{YType::uint32, "complete-fec-working-ls-ps"},
    down_protect_ls_ps{YType::uint32, "down-protect-ls-ps"},
    down_tunnels{YType::uint32, "down-tunnels"},
    down_working_ls_ps{YType::uint32, "down-working-ls-ps"},
    locked_protect_ls_ps{YType::uint32, "locked-protect-ls-ps"},
    locked_working_ls_ps{YType::uint32, "locked-working-ls-ps"},
    up_protect_ls_ps{YType::uint32, "up-protect-ls-ps"},
    up_tunnels{YType::uint32, "up-tunnels"},
    up_working_ls_ps{YType::uint32, "up-working-ls-ps"}
{

    yang_name = "tp-tunnel-summary"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnelSummary::~TpTunnelSummary()
{
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_data() const
{
    return active_protect_ls_ps.is_set
	|| active_working_ls_ps.is_set
	|| admin_down_tunnels.is_set
	|| bfd_session_protect_ls_ps.is_set
	|| bfd_session_working_ls_ps.is_set
	|| complete_fec_protect_ls_ps.is_set
	|| complete_fec_working_ls_ps.is_set
	|| down_protect_ls_ps.is_set
	|| down_tunnels.is_set
	|| down_working_ls_ps.is_set
	|| locked_protect_ls_ps.is_set
	|| locked_working_ls_ps.is_set
	|| up_protect_ls_ps.is_set
	|| up_tunnels.is_set
	|| up_working_ls_ps.is_set;
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_protect_ls_ps.yfilter)
	|| ydk::is_set(active_working_ls_ps.yfilter)
	|| ydk::is_set(admin_down_tunnels.yfilter)
	|| ydk::is_set(bfd_session_protect_ls_ps.yfilter)
	|| ydk::is_set(bfd_session_working_ls_ps.yfilter)
	|| ydk::is_set(complete_fec_protect_ls_ps.yfilter)
	|| ydk::is_set(complete_fec_working_ls_ps.yfilter)
	|| ydk::is_set(down_protect_ls_ps.yfilter)
	|| ydk::is_set(down_tunnels.yfilter)
	|| ydk::is_set(down_working_ls_ps.yfilter)
	|| ydk::is_set(locked_protect_ls_ps.yfilter)
	|| ydk::is_set(locked_working_ls_ps.yfilter)
	|| ydk::is_set(up_protect_ls_ps.yfilter)
	|| ydk::is_set(up_tunnels.yfilter)
	|| ydk::is_set(up_working_ls_ps.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_protect_ls_ps.is_set || is_set(active_protect_ls_ps.yfilter)) leaf_name_data.push_back(active_protect_ls_ps.get_name_leafdata());
    if (active_working_ls_ps.is_set || is_set(active_working_ls_ps.yfilter)) leaf_name_data.push_back(active_working_ls_ps.get_name_leafdata());
    if (admin_down_tunnels.is_set || is_set(admin_down_tunnels.yfilter)) leaf_name_data.push_back(admin_down_tunnels.get_name_leafdata());
    if (bfd_session_protect_ls_ps.is_set || is_set(bfd_session_protect_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_protect_ls_ps.get_name_leafdata());
    if (bfd_session_working_ls_ps.is_set || is_set(bfd_session_working_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_working_ls_ps.get_name_leafdata());
    if (complete_fec_protect_ls_ps.is_set || is_set(complete_fec_protect_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_protect_ls_ps.get_name_leafdata());
    if (complete_fec_working_ls_ps.is_set || is_set(complete_fec_working_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_working_ls_ps.get_name_leafdata());
    if (down_protect_ls_ps.is_set || is_set(down_protect_ls_ps.yfilter)) leaf_name_data.push_back(down_protect_ls_ps.get_name_leafdata());
    if (down_tunnels.is_set || is_set(down_tunnels.yfilter)) leaf_name_data.push_back(down_tunnels.get_name_leafdata());
    if (down_working_ls_ps.is_set || is_set(down_working_ls_ps.yfilter)) leaf_name_data.push_back(down_working_ls_ps.get_name_leafdata());
    if (locked_protect_ls_ps.is_set || is_set(locked_protect_ls_ps.yfilter)) leaf_name_data.push_back(locked_protect_ls_ps.get_name_leafdata());
    if (locked_working_ls_ps.is_set || is_set(locked_working_ls_ps.yfilter)) leaf_name_data.push_back(locked_working_ls_ps.get_name_leafdata());
    if (up_protect_ls_ps.is_set || is_set(up_protect_ls_ps.yfilter)) leaf_name_data.push_back(up_protect_ls_ps.get_name_leafdata());
    if (up_tunnels.is_set || is_set(up_tunnels.yfilter)) leaf_name_data.push_back(up_tunnels.get_name_leafdata());
    if (up_working_ls_ps.is_set || is_set(up_working_ls_ps.yfilter)) leaf_name_data.push_back(up_working_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpTunnelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps = value;
        active_protect_ls_ps.value_namespace = name_space;
        active_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps = value;
        active_working_ls_ps.value_namespace = name_space;
        active_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels = value;
        admin_down_tunnels.value_namespace = name_space;
        admin_down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps = value;
        bfd_session_protect_ls_ps.value_namespace = name_space;
        bfd_session_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps = value;
        bfd_session_working_ls_ps.value_namespace = name_space;
        bfd_session_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps = value;
        complete_fec_protect_ls_ps.value_namespace = name_space;
        complete_fec_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps = value;
        complete_fec_working_ls_ps.value_namespace = name_space;
        complete_fec_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps = value;
        down_protect_ls_ps.value_namespace = name_space;
        down_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels = value;
        down_tunnels.value_namespace = name_space;
        down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps = value;
        down_working_ls_ps.value_namespace = name_space;
        down_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps = value;
        locked_protect_ls_ps.value_namespace = name_space;
        locked_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps = value;
        locked_working_ls_ps.value_namespace = name_space;
        locked_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps = value;
        up_protect_ls_ps.value_namespace = name_space;
        up_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels = value;
        up_tunnels.value_namespace = name_space;
        up_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps = value;
        up_working_ls_ps.value_namespace = name_space;
        up_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels.yfilter = yfilter;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-protect-ls-ps" || name == "active-working-ls-ps" || name == "admin-down-tunnels" || name == "bfd-session-protect-ls-ps" || name == "bfd-session-working-ls-ps" || name == "complete-fec-protect-ls-ps" || name == "complete-fec-working-ls-ps" || name == "down-protect-ls-ps" || name == "down-tunnels" || name == "down-working-ls-ps" || name == "locked-protect-ls-ps" || name == "locked-working-ls-ps" || name == "up-protect-ls-ps" || name == "up-tunnels" || name == "up-working-ls-ps")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnels_()
{

    yang_name = "tp-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnels_::~TpTunnels_()
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_data() const
{
    for (std::size_t index=0; index<tp_tunnel.size(); index++)
    {
        if(tp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpTunnels_::has_operation() const
{
    for (std::size_t index=0; index<tp_tunnel.size(); index++)
    {
        if(tp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-tunnel")
    {
        for(auto const & c : tp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel>();
        c->parent = this;
        tp_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tp_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpTunnels_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::TpTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    active_lsp{YType::enumeration, "active-lsp"},
    admin_status{YType::enumeration, "admin-status"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    operation_status{YType::enumeration, "operation-status"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>())
{
    protect_lsp->parent = this;
    working_lsp->parent = this;

    yang_name = "tp-tunnel"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::~TpTunnel()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| active_lsp.is_set
	|| admin_status.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| operation_status.is_set
	|| remote_tunnel_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-lsp" || name == "working-lsp" || name == "tp-tunnel-name" || name == "active-lsp" || name == "admin-status" || name == "destination-global-id" || name == "destination-node-id" || name == "operation-status" || name == "remote-tunnel-id" || name == "source-global-id" || name == "source-node-id" || name == "source-tunnel-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::ProtectLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::WorkingLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-state" || name == "lock-out" || name == "lsp-id" || name == "rx-oam-state" || name == "state" || name == "tx-oam-state")
        return true;
    return false;
}


}
}

