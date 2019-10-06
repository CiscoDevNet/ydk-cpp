
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_33.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::TableLabelRewrite()
{

    yang_name = "table-label-rewrite"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::~TableLabelRewrite()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::TablePcalc()
{

    yang_name = "table-pcalc"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::~TablePcalc()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-pcalc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::TableTunnelRewrite()
{

    yang_name = "table-tunnel-rewrite"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::~TableTunnelRewrite()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::TableFrrTrigger()
{

    yang_name = "table-frr-trigger"; yang_parent_name = "current-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::~TableFrrTrigger()
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/current-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-frr-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::LastTunnelConvergenceSummary()
    :
    tunnel_frr_active_count{YType::uint32, "tunnel-frr-active-count"},
    tunnel_frr_total_count{YType::uint32, "tunnel-frr-total-count"},
    tunnel_converged_count{YType::uint32, "tunnel-converged-count"},
    tunnel_total_convergence_complete_time{YType::uint64, "tunnel-total-convergence-complete-time"}
        ,
    table_path_out(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>())
    , table_resv_in(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>())
    , table_label_rewrite(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>())
    , table_pcalc(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>())
    , table_tunnel_rewrite(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>())
    , table_frr_trigger(std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>())
{
    table_path_out->parent = this;
    table_resv_in->parent = this;
    table_label_rewrite->parent = this;
    table_pcalc->parent = this;
    table_tunnel_rewrite->parent = this;
    table_frr_trigger->parent = this;

    yang_name = "last-tunnel-convergence-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::~LastTunnelConvergenceSummary()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_frr_active_count.is_set
	|| tunnel_frr_total_count.is_set
	|| tunnel_converged_count.is_set
	|| tunnel_total_convergence_complete_time.is_set
	|| (table_path_out !=  nullptr && table_path_out->has_data())
	|| (table_resv_in !=  nullptr && table_resv_in->has_data())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_data())
	|| (table_pcalc !=  nullptr && table_pcalc->has_data())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_data())
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_data());
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_frr_active_count.yfilter)
	|| ydk::is_set(tunnel_frr_total_count.yfilter)
	|| ydk::is_set(tunnel_converged_count.yfilter)
	|| ydk::is_set(tunnel_total_convergence_complete_time.yfilter)
	|| (table_path_out !=  nullptr && table_path_out->has_operation())
	|| (table_resv_in !=  nullptr && table_resv_in->has_operation())
	|| (table_label_rewrite !=  nullptr && table_label_rewrite->has_operation())
	|| (table_pcalc !=  nullptr && table_pcalc->has_operation())
	|| (table_tunnel_rewrite !=  nullptr && table_tunnel_rewrite->has_operation())
	|| (table_frr_trigger !=  nullptr && table_frr_trigger->has_operation());
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tunnel-convergence-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_frr_active_count.is_set || is_set(tunnel_frr_active_count.yfilter)) leaf_name_data.push_back(tunnel_frr_active_count.get_name_leafdata());
    if (tunnel_frr_total_count.is_set || is_set(tunnel_frr_total_count.yfilter)) leaf_name_data.push_back(tunnel_frr_total_count.get_name_leafdata());
    if (tunnel_converged_count.is_set || is_set(tunnel_converged_count.yfilter)) leaf_name_data.push_back(tunnel_converged_count.get_name_leafdata());
    if (tunnel_total_convergence_complete_time.is_set || is_set(tunnel_total_convergence_complete_time.yfilter)) leaf_name_data.push_back(tunnel_total_convergence_complete_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-path-out")
    {
        if(table_path_out == nullptr)
        {
            table_path_out = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut>();
        }
        return table_path_out;
    }

    if(child_yang_name == "table-resv-in")
    {
        if(table_resv_in == nullptr)
        {
            table_resv_in = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn>();
        }
        return table_resv_in;
    }

    if(child_yang_name == "table-label-rewrite")
    {
        if(table_label_rewrite == nullptr)
        {
            table_label_rewrite = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite>();
        }
        return table_label_rewrite;
    }

    if(child_yang_name == "table-pcalc")
    {
        if(table_pcalc == nullptr)
        {
            table_pcalc = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc>();
        }
        return table_pcalc;
    }

    if(child_yang_name == "table-tunnel-rewrite")
    {
        if(table_tunnel_rewrite == nullptr)
        {
            table_tunnel_rewrite = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite>();
        }
        return table_tunnel_rewrite;
    }

    if(child_yang_name == "table-frr-trigger")
    {
        if(table_frr_trigger == nullptr)
        {
            table_frr_trigger = std::make_shared<MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger>();
        }
        return table_frr_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(table_path_out != nullptr)
    {
        _children["table-path-out"] = table_path_out;
    }

    if(table_resv_in != nullptr)
    {
        _children["table-resv-in"] = table_resv_in;
    }

    if(table_label_rewrite != nullptr)
    {
        _children["table-label-rewrite"] = table_label_rewrite;
    }

    if(table_pcalc != nullptr)
    {
        _children["table-pcalc"] = table_pcalc;
    }

    if(table_tunnel_rewrite != nullptr)
    {
        _children["table-tunnel-rewrite"] = table_tunnel_rewrite;
    }

    if(table_frr_trigger != nullptr)
    {
        _children["table-frr-trigger"] = table_frr_trigger;
    }

    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count = value;
        tunnel_converged_count.value_namespace = name_space;
        tunnel_converged_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time = value;
        tunnel_total_convergence_complete_time.value_namespace = name_space;
        tunnel_total_convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-frr-active-count")
    {
        tunnel_frr_active_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-frr-total-count")
    {
        tunnel_frr_total_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-converged-count")
    {
        tunnel_converged_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-total-convergence-complete-time")
    {
        tunnel_total_convergence_complete_time.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-path-out" || name == "table-resv-in" || name == "table-label-rewrite" || name == "table-pcalc" || name == "table-tunnel-rewrite" || name == "table-frr-trigger" || name == "tunnel-frr-active-count" || name == "tunnel-frr-total-count" || name == "tunnel-converged-count" || name == "tunnel-total-convergence-complete-time")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::TablePathOut()
{

    yang_name = "table-path-out"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::~TablePathOut()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-path-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::TableResvIn()
{

    yang_name = "table-resv-in"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::~TableResvIn()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-resv-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::TableLabelRewrite()
{

    yang_name = "table-label-rewrite"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::~TableLabelRewrite()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-label-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::TablePcalc()
{

    yang_name = "table-pcalc"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::~TablePcalc()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-pcalc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::TableTunnelRewrite()
{

    yang_name = "table-tunnel-rewrite"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::~TableTunnelRewrite()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::TableFrrTrigger()
{

    yang_name = "table-frr-trigger"; yang_parent_name = "last-tunnel-convergence-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::~TableFrrTrigger()
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/last-tunnel-convergence-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-frr-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::AutoTunServerSummary()
    :
    total_auto_p2mp_tunnels(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels>())
    , total_auto_p2p_tunnels(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels>())
    , clients_summary(this, {})
{
    total_auto_p2mp_tunnels->parent = this;
    total_auto_p2p_tunnels->parent = this;

    yang_name = "auto-tun-server-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::~AutoTunServerSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients_summary.len(); index++)
    {
        if(clients_summary[index]->has_data())
            return true;
    }
    return (total_auto_p2mp_tunnels !=  nullptr && total_auto_p2mp_tunnels->has_data())
	|| (total_auto_p2p_tunnels !=  nullptr && total_auto_p2p_tunnels->has_data());
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::has_operation() const
{
    for (std::size_t index=0; index<clients_summary.len(); index++)
    {
        if(clients_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (total_auto_p2mp_tunnels !=  nullptr && total_auto_p2mp_tunnels->has_operation())
	|| (total_auto_p2p_tunnels !=  nullptr && total_auto_p2p_tunnels->has_operation());
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tun-server-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-auto-p2mp-tunnels")
    {
        if(total_auto_p2mp_tunnels == nullptr)
        {
            total_auto_p2mp_tunnels = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels>();
        }
        return total_auto_p2mp_tunnels;
    }

    if(child_yang_name == "total-auto-p2p-tunnels")
    {
        if(total_auto_p2p_tunnels == nullptr)
        {
            total_auto_p2p_tunnels = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels>();
        }
        return total_auto_p2p_tunnels;
    }

    if(child_yang_name == "clients-summary")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary>();
        ent_->parent = this;
        clients_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total_auto_p2mp_tunnels != nullptr)
    {
        _children["total-auto-p2mp-tunnels"] = total_auto_p2mp_tunnels;
    }

    if(total_auto_p2p_tunnels != nullptr)
    {
        _children["total-auto-p2p-tunnels"] = total_auto_p2p_tunnels;
    }

    count_ = 0;
    for (auto ent_ : clients_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-auto-p2mp-tunnels" || name == "total-auto-p2p-tunnels" || name == "clients-summary")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::TotalAutoP2mpTunnels()
    :
    auto_p2mp_tunnel{YType::uint32, "auto-p2mp-tunnel"},
    auto_p2mp_destinations{YType::uint32, "auto-p2mp-destinations"},
    up_auto_p2mp_destinations{YType::uint32, "up-auto-p2mp-destinations"},
    down_auto_p2mp_destinations{YType::uint32, "down-auto-p2mp-destinations"},
    up_auto_p2mp_tunnels{YType::uint32, "up-auto-p2mp-tunnels"},
    down_auto_p2mp_tunnels{YType::uint32, "down-auto-p2mp-tunnels"},
    frr_auto_p2mp_tunnels{YType::uint32, "frr-auto-p2mp-tunnels"}
{

    yang_name = "total-auto-p2mp-tunnels"; yang_parent_name = "auto-tun-server-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::~TotalAutoP2mpTunnels()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::has_data() const
{
    if (is_presence_container) return true;
    return auto_p2mp_tunnel.is_set
	|| auto_p2mp_destinations.is_set
	|| up_auto_p2mp_destinations.is_set
	|| down_auto_p2mp_destinations.is_set
	|| up_auto_p2mp_tunnels.is_set
	|| down_auto_p2mp_tunnels.is_set
	|| frr_auto_p2mp_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_p2mp_tunnel.yfilter)
	|| ydk::is_set(auto_p2mp_destinations.yfilter)
	|| ydk::is_set(up_auto_p2mp_destinations.yfilter)
	|| ydk::is_set(down_auto_p2mp_destinations.yfilter)
	|| ydk::is_set(up_auto_p2mp_tunnels.yfilter)
	|| ydk::is_set(down_auto_p2mp_tunnels.yfilter)
	|| ydk::is_set(frr_auto_p2mp_tunnels.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/auto-tun-server-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-auto-p2mp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_p2mp_tunnel.is_set || is_set(auto_p2mp_tunnel.yfilter)) leaf_name_data.push_back(auto_p2mp_tunnel.get_name_leafdata());
    if (auto_p2mp_destinations.is_set || is_set(auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(auto_p2mp_destinations.get_name_leafdata());
    if (up_auto_p2mp_destinations.is_set || is_set(up_auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(up_auto_p2mp_destinations.get_name_leafdata());
    if (down_auto_p2mp_destinations.is_set || is_set(down_auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(down_auto_p2mp_destinations.get_name_leafdata());
    if (up_auto_p2mp_tunnels.is_set || is_set(up_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(up_auto_p2mp_tunnels.get_name_leafdata());
    if (down_auto_p2mp_tunnels.is_set || is_set(down_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(down_auto_p2mp_tunnels.get_name_leafdata());
    if (frr_auto_p2mp_tunnels.is_set || is_set(frr_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_p2mp_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-p2mp-tunnel")
    {
        auto_p2mp_tunnel = value;
        auto_p2mp_tunnel.value_namespace = name_space;
        auto_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-p2mp-destinations")
    {
        auto_p2mp_destinations = value;
        auto_p2mp_destinations.value_namespace = name_space;
        auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2mp-destinations")
    {
        up_auto_p2mp_destinations = value;
        up_auto_p2mp_destinations.value_namespace = name_space;
        up_auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2mp-destinations")
    {
        down_auto_p2mp_destinations = value;
        down_auto_p2mp_destinations.value_namespace = name_space;
        down_auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2mp-tunnels")
    {
        up_auto_p2mp_tunnels = value;
        up_auto_p2mp_tunnels.value_namespace = name_space;
        up_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2mp-tunnels")
    {
        down_auto_p2mp_tunnels = value;
        down_auto_p2mp_tunnels.value_namespace = name_space;
        down_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-p2mp-tunnels")
    {
        frr_auto_p2mp_tunnels = value;
        frr_auto_p2mp_tunnels.value_namespace = name_space;
        frr_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-p2mp-tunnel")
    {
        auto_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "auto-p2mp-destinations")
    {
        auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2mp-destinations")
    {
        up_auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2mp-destinations")
    {
        down_auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2mp-tunnels")
    {
        up_auto_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2mp-tunnels")
    {
        down_auto_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-p2mp-tunnels")
    {
        frr_auto_p2mp_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2mpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-p2mp-tunnel" || name == "auto-p2mp-destinations" || name == "up-auto-p2mp-destinations" || name == "down-auto-p2mp-destinations" || name == "up-auto-p2mp-tunnels" || name == "down-auto-p2mp-tunnels" || name == "frr-auto-p2mp-tunnels")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::TotalAutoP2pTunnels()
    :
    auto_p2p_tunnel{YType::uint32, "auto-p2p-tunnel"},
    up_auto_p2p_tunnels{YType::uint32, "up-auto-p2p-tunnels"},
    down_auto_p2p_tunnels{YType::uint32, "down-auto-p2p-tunnels"}
{

    yang_name = "total-auto-p2p-tunnels"; yang_parent_name = "auto-tun-server-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::~TotalAutoP2pTunnels()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::has_data() const
{
    if (is_presence_container) return true;
    return auto_p2p_tunnel.is_set
	|| up_auto_p2p_tunnels.is_set
	|| down_auto_p2p_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_p2p_tunnel.yfilter)
	|| ydk::is_set(up_auto_p2p_tunnels.yfilter)
	|| ydk::is_set(down_auto_p2p_tunnels.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/auto-tun-server-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-auto-p2p-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_p2p_tunnel.is_set || is_set(auto_p2p_tunnel.yfilter)) leaf_name_data.push_back(auto_p2p_tunnel.get_name_leafdata());
    if (up_auto_p2p_tunnels.is_set || is_set(up_auto_p2p_tunnels.yfilter)) leaf_name_data.push_back(up_auto_p2p_tunnels.get_name_leafdata());
    if (down_auto_p2p_tunnels.is_set || is_set(down_auto_p2p_tunnels.yfilter)) leaf_name_data.push_back(down_auto_p2p_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-p2p-tunnel")
    {
        auto_p2p_tunnel = value;
        auto_p2p_tunnel.value_namespace = name_space;
        auto_p2p_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2p-tunnels")
    {
        up_auto_p2p_tunnels = value;
        up_auto_p2p_tunnels.value_namespace = name_space;
        up_auto_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2p-tunnels")
    {
        down_auto_p2p_tunnels = value;
        down_auto_p2p_tunnels.value_namespace = name_space;
        down_auto_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-p2p-tunnel")
    {
        auto_p2p_tunnel.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2p-tunnels")
    {
        up_auto_p2p_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2p-tunnels")
    {
        down_auto_p2p_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2pTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-p2p-tunnel" || name == "up-auto-p2p-tunnels" || name == "down-auto-p2p-tunnels")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::ClientsSummary()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    client_instance_name{YType::str, "client-instance-name"},
    client_id{YType::uint32, "client-id"}
        ,
    p2mp_info(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo>())
    , p2p_info(std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo>())
{
    p2mp_info->parent = this;
    p2p_info->parent = this;

    yang_name = "clients-summary"; yang_parent_name = "auto-tun-server-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::~ClientsSummary()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::has_data() const
{
    if (is_presence_container) return true;
    return protocol_type.is_set
	|| client_instance_name.is_set
	|| client_id.is_set
	|| (p2mp_info !=  nullptr && p2mp_info->has_data())
	|| (p2p_info !=  nullptr && p2p_info->has_data());
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(client_instance_name.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| (p2mp_info !=  nullptr && p2mp_info->has_operation())
	|| (p2p_info !=  nullptr && p2p_info->has_operation());
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/auto-tun-server-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (client_instance_name.is_set || is_set(client_instance_name.yfilter)) leaf_name_data.push_back(client_instance_name.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-info")
    {
        if(p2mp_info == nullptr)
        {
            p2mp_info = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo>();
        }
        return p2mp_info;
    }

    if(child_yang_name == "p2p-info")
    {
        if(p2p_info == nullptr)
        {
            p2p_info = std::make_shared<MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo>();
        }
        return p2p_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2mp_info != nullptr)
    {
        _children["p2mp-info"] = p2mp_info;
    }

    if(p2p_info != nullptr)
    {
        _children["p2p-info"] = p2p_info;
    }

    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-instance-name")
    {
        client_instance_name = value;
        client_instance_name.value_namespace = name_space;
        client_instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "client-instance-name")
    {
        client_instance_name.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-info" || name == "p2p-info" || name == "protocol-type" || name == "client-instance-name" || name == "client-id")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::P2mpInfo()
    :
    auto_p2mp_tunnel{YType::uint32, "auto-p2mp-tunnel"},
    auto_p2mp_destinations{YType::uint32, "auto-p2mp-destinations"},
    up_auto_p2mp_destinations{YType::uint32, "up-auto-p2mp-destinations"},
    down_auto_p2mp_destinations{YType::uint32, "down-auto-p2mp-destinations"},
    up_auto_p2mp_tunnels{YType::uint32, "up-auto-p2mp-tunnels"},
    down_auto_p2mp_tunnels{YType::uint32, "down-auto-p2mp-tunnels"},
    frr_auto_p2mp_tunnels{YType::uint32, "frr-auto-p2mp-tunnels"}
{

    yang_name = "p2mp-info"; yang_parent_name = "clients-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::~P2mpInfo()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::has_data() const
{
    if (is_presence_container) return true;
    return auto_p2mp_tunnel.is_set
	|| auto_p2mp_destinations.is_set
	|| up_auto_p2mp_destinations.is_set
	|| down_auto_p2mp_destinations.is_set
	|| up_auto_p2mp_tunnels.is_set
	|| down_auto_p2mp_tunnels.is_set
	|| frr_auto_p2mp_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_p2mp_tunnel.yfilter)
	|| ydk::is_set(auto_p2mp_destinations.yfilter)
	|| ydk::is_set(up_auto_p2mp_destinations.yfilter)
	|| ydk::is_set(down_auto_p2mp_destinations.yfilter)
	|| ydk::is_set(up_auto_p2mp_tunnels.yfilter)
	|| ydk::is_set(down_auto_p2mp_tunnels.yfilter)
	|| ydk::is_set(frr_auto_p2mp_tunnels.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/auto-tun-server-summary/clients-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_p2mp_tunnel.is_set || is_set(auto_p2mp_tunnel.yfilter)) leaf_name_data.push_back(auto_p2mp_tunnel.get_name_leafdata());
    if (auto_p2mp_destinations.is_set || is_set(auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(auto_p2mp_destinations.get_name_leafdata());
    if (up_auto_p2mp_destinations.is_set || is_set(up_auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(up_auto_p2mp_destinations.get_name_leafdata());
    if (down_auto_p2mp_destinations.is_set || is_set(down_auto_p2mp_destinations.yfilter)) leaf_name_data.push_back(down_auto_p2mp_destinations.get_name_leafdata());
    if (up_auto_p2mp_tunnels.is_set || is_set(up_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(up_auto_p2mp_tunnels.get_name_leafdata());
    if (down_auto_p2mp_tunnels.is_set || is_set(down_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(down_auto_p2mp_tunnels.get_name_leafdata());
    if (frr_auto_p2mp_tunnels.is_set || is_set(frr_auto_p2mp_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_p2mp_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-p2mp-tunnel")
    {
        auto_p2mp_tunnel = value;
        auto_p2mp_tunnel.value_namespace = name_space;
        auto_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-p2mp-destinations")
    {
        auto_p2mp_destinations = value;
        auto_p2mp_destinations.value_namespace = name_space;
        auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2mp-destinations")
    {
        up_auto_p2mp_destinations = value;
        up_auto_p2mp_destinations.value_namespace = name_space;
        up_auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2mp-destinations")
    {
        down_auto_p2mp_destinations = value;
        down_auto_p2mp_destinations.value_namespace = name_space;
        down_auto_p2mp_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2mp-tunnels")
    {
        up_auto_p2mp_tunnels = value;
        up_auto_p2mp_tunnels.value_namespace = name_space;
        up_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2mp-tunnels")
    {
        down_auto_p2mp_tunnels = value;
        down_auto_p2mp_tunnels.value_namespace = name_space;
        down_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-p2mp-tunnels")
    {
        frr_auto_p2mp_tunnels = value;
        frr_auto_p2mp_tunnels.value_namespace = name_space;
        frr_auto_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-p2mp-tunnel")
    {
        auto_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "auto-p2mp-destinations")
    {
        auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2mp-destinations")
    {
        up_auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2mp-destinations")
    {
        down_auto_p2mp_destinations.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2mp-tunnels")
    {
        up_auto_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2mp-tunnels")
    {
        down_auto_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-p2mp-tunnels")
    {
        frr_auto_p2mp_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2mpInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-p2mp-tunnel" || name == "auto-p2mp-destinations" || name == "up-auto-p2mp-destinations" || name == "down-auto-p2mp-destinations" || name == "up-auto-p2mp-tunnels" || name == "down-auto-p2mp-tunnels" || name == "frr-auto-p2mp-tunnels")
        return true;
    return false;
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::P2pInfo()
    :
    auto_p2p_tunnel{YType::uint32, "auto-p2p-tunnel"},
    up_auto_p2p_tunnels{YType::uint32, "up-auto-p2p-tunnels"},
    down_auto_p2p_tunnels{YType::uint32, "down-auto-p2p-tunnels"}
{

    yang_name = "p2p-info"; yang_parent_name = "clients-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::~P2pInfo()
{
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::has_data() const
{
    if (is_presence_container) return true;
    return auto_p2p_tunnel.is_set
	|| up_auto_p2p_tunnels.is_set
	|| down_auto_p2p_tunnels.is_set;
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_p2p_tunnel.yfilter)
	|| ydk::is_set(up_auto_p2p_tunnels.yfilter)
	|| ydk::is_set(down_auto_p2p_tunnels.yfilter);
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/summary/auto-tun-server-summary/clients-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_p2p_tunnel.is_set || is_set(auto_p2p_tunnel.yfilter)) leaf_name_data.push_back(auto_p2p_tunnel.get_name_leafdata());
    if (up_auto_p2p_tunnels.is_set || is_set(up_auto_p2p_tunnels.yfilter)) leaf_name_data.push_back(up_auto_p2p_tunnels.get_name_leafdata());
    if (down_auto_p2p_tunnels.is_set || is_set(down_auto_p2p_tunnels.yfilter)) leaf_name_data.push_back(down_auto_p2p_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-p2p-tunnel")
    {
        auto_p2p_tunnel = value;
        auto_p2p_tunnel.value_namespace = name_space;
        auto_p2p_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-p2p-tunnels")
    {
        up_auto_p2p_tunnels = value;
        up_auto_p2p_tunnels.value_namespace = name_space;
        up_auto_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-p2p-tunnels")
    {
        down_auto_p2p_tunnels = value;
        down_auto_p2p_tunnels.value_namespace = name_space;
        down_auto_p2p_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-p2p-tunnel")
    {
        auto_p2p_tunnel.yfilter = yfilter;
    }
    if(value_path == "up-auto-p2p-tunnels")
    {
        up_auto_p2p_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-p2p-tunnels")
    {
        down_auto_p2p_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2pInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-p2p-tunnel" || name == "up-auto-p2p-tunnels" || name == "down-auto-p2p-tunnels")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtections()
    :
    tunnel_path_protection(this, {})
{

    yang_name = "tunnel-path-protections"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::~TunnelPathProtections()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_path_protection.len(); index++)
    {
        if(tunnel_path_protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Tunnels::TunnelPathProtections::has_operation() const
{
    for (std::size_t index=0; index<tunnel_path_protection.len(); index++)
    {
        if(tunnel_path_protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-path-protection")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection>();
        ent_->parent = this;
        tunnel_path_protection.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_path_protection.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Tunnels::TunnelPathProtections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Tunnels::TunnelPathProtections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-path-protection")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::TunnelPathProtection()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
        ,
    path_protection(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection>())
    , current_lsp(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp>())
    , standby_lsp(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp>())
{
    path_protection->parent = this;
    current_lsp->parent = this;
    standby_lsp->parent = this;

    yang_name = "tunnel-path-protection"; yang_parent_name = "tunnel-path-protections"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::~TunnelPathProtection()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::has_data() const
{
    if (is_presence_container) return true;
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| is_tunnel_up.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (current_lsp !=  nullptr && current_lsp->has_data())
	|| (standby_lsp !=  nullptr && standby_lsp->has_data());
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (current_lsp !=  nullptr && current_lsp->has_operation())
	|| (standby_lsp !=  nullptr && standby_lsp->has_operation());
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protection";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-protection")
    {
        if(path_protection == nullptr)
        {
            path_protection = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection>();
        }
        return path_protection;
    }

    if(child_yang_name == "current-lsp")
    {
        if(current_lsp == nullptr)
        {
            current_lsp = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp>();
        }
        return current_lsp;
    }

    if(child_yang_name == "standby-lsp")
    {
        if(standby_lsp == nullptr)
        {
            standby_lsp = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp>();
        }
        return standby_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_protection != nullptr)
    {
        _children["path-protection"] = path_protection;
    }

    if(current_lsp != nullptr)
    {
        _children["current-lsp"] = current_lsp;
    }

    if(standby_lsp != nullptr)
    {
        _children["standby-lsp"] = standby_lsp;
    }

    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection" || name == "current-lsp" || name == "standby-lsp" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "is-tunnel-up" || name == "source-address" || name == "destination-address" || name == "extended-tunnel-id")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::PathProtection()
    :
    time_of_switchover_sec{YType::uint32, "time-of-switchover-sec"},
    switchover_total{YType::uint16, "switchover-total"},
    switchover_ready{YType::uint16, "switchover-ready"},
    standby_reoptimized_number{YType::uint16, "standby-reoptimized-number"},
    switchover_reason{YType::uint16, "switchover-reason"},
    diversity_type{YType::enumeration, "diversity-type"},
    is_path_protect_configured{YType::boolean, "is-path-protect-configured"},
    path_protection_protected_by_id{YType::uint32, "path-protection-protected-by-id"},
    valid_path_protection_path_option_exists{YType::boolean, "valid-path-protection-path-option-exists"},
    is_path_protect_switch_over_underway{YType::boolean, "is-path-protect-switch-over-underway"},
    reoptimization_time_remaining{YType::uint32, "reoptimization-time-remaining"}
        ,
    switchover(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover>())
{
    switchover->parent = this;

    yang_name = "path-protection"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::~PathProtection()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_data() const
{
    if (is_presence_container) return true;
    return time_of_switchover_sec.is_set
	|| switchover_total.is_set
	|| switchover_ready.is_set
	|| standby_reoptimized_number.is_set
	|| switchover_reason.is_set
	|| diversity_type.is_set
	|| is_path_protect_configured.is_set
	|| path_protection_protected_by_id.is_set
	|| valid_path_protection_path_option_exists.is_set
	|| is_path_protect_switch_over_underway.is_set
	|| reoptimization_time_remaining.is_set
	|| (switchover !=  nullptr && switchover->has_data());
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_of_switchover_sec.yfilter)
	|| ydk::is_set(switchover_total.yfilter)
	|| ydk::is_set(switchover_ready.yfilter)
	|| ydk::is_set(standby_reoptimized_number.yfilter)
	|| ydk::is_set(switchover_reason.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| ydk::is_set(is_path_protect_configured.yfilter)
	|| ydk::is_set(path_protection_protected_by_id.yfilter)
	|| ydk::is_set(valid_path_protection_path_option_exists.yfilter)
	|| ydk::is_set(is_path_protect_switch_over_underway.yfilter)
	|| ydk::is_set(reoptimization_time_remaining.yfilter)
	|| (switchover !=  nullptr && switchover->has_operation());
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_of_switchover_sec.is_set || is_set(time_of_switchover_sec.yfilter)) leaf_name_data.push_back(time_of_switchover_sec.get_name_leafdata());
    if (switchover_total.is_set || is_set(switchover_total.yfilter)) leaf_name_data.push_back(switchover_total.get_name_leafdata());
    if (switchover_ready.is_set || is_set(switchover_ready.yfilter)) leaf_name_data.push_back(switchover_ready.get_name_leafdata());
    if (standby_reoptimized_number.is_set || is_set(standby_reoptimized_number.yfilter)) leaf_name_data.push_back(standby_reoptimized_number.get_name_leafdata());
    if (switchover_reason.is_set || is_set(switchover_reason.yfilter)) leaf_name_data.push_back(switchover_reason.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (is_path_protect_configured.is_set || is_set(is_path_protect_configured.yfilter)) leaf_name_data.push_back(is_path_protect_configured.get_name_leafdata());
    if (path_protection_protected_by_id.is_set || is_set(path_protection_protected_by_id.yfilter)) leaf_name_data.push_back(path_protection_protected_by_id.get_name_leafdata());
    if (valid_path_protection_path_option_exists.is_set || is_set(valid_path_protection_path_option_exists.yfilter)) leaf_name_data.push_back(valid_path_protection_path_option_exists.get_name_leafdata());
    if (is_path_protect_switch_over_underway.is_set || is_set(is_path_protect_switch_over_underway.yfilter)) leaf_name_data.push_back(is_path_protect_switch_over_underway.get_name_leafdata());
    if (reoptimization_time_remaining.is_set || is_set(reoptimization_time_remaining.yfilter)) leaf_name_data.push_back(reoptimization_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover")
    {
        if(switchover == nullptr)
        {
            switchover = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover>();
        }
        return switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchover != nullptr)
    {
        _children["switchover"] = switchover;
    }

    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec = value;
        time_of_switchover_sec.value_namespace = name_space;
        time_of_switchover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-total")
    {
        switchover_total = value;
        switchover_total.value_namespace = name_space;
        switchover_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready = value;
        switchover_ready.value_namespace = name_space;
        switchover_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number = value;
        standby_reoptimized_number.value_namespace = name_space;
        standby_reoptimized_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason = value;
        switchover_reason.value_namespace = name_space;
        switchover_reason.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id = value;
        path_protection_protected_by_id.value_namespace = name_space;
        path_protection_protected_by_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists = value;
        valid_path_protection_path_option_exists.value_namespace = name_space;
        valid_path_protection_path_option_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway = value;
        is_path_protect_switch_over_underway.value_namespace = name_space;
        is_path_protect_switch_over_underway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining = value;
        reoptimization_time_remaining.value_namespace = name_space;
        reoptimization_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec.yfilter = yfilter;
    }
    if(value_path == "switchover-total")
    {
        switchover_total.yfilter = yfilter;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready.yfilter = yfilter;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number.yfilter = yfilter;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured.yfilter = yfilter;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id.yfilter = yfilter;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway.yfilter = yfilter;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "time-of-switchover-sec" || name == "switchover-total" || name == "switchover-ready" || name == "standby-reoptimized-number" || name == "switchover-reason" || name == "diversity-type" || name == "is-path-protect-configured" || name == "path-protection-protected-by-id" || name == "valid-path-protection-path-option-exists" || name == "is-path-protect-switch-over-underway" || name == "reoptimization-time-remaining")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::Switchover()
    :
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    to_lsp_id{YType::uint16, "to-lsp-id"},
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"}
{

    yang_name = "switchover"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::~Switchover()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_data() const
{
    if (is_presence_container) return true;
    return path_protection_switchover_event_index.is_set
	|| path_protection_tunnel_id.is_set
	|| from_lsp_id.is_set
	|| to_lsp_id.is_set
	|| date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| switchover_duration_millisec.is_set
	|| path_protection_switchover_reason.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());
    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-event-index" || name == "path-protection-tunnel-id" || name == "from-lsp-id" || name == "to-lsp-id" || name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "switchover-duration-millisec" || name == "path-protection-switchover-reason")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::CurrentLsp()
    :
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"}
        ,
    srlsp_outgoing_info(this, {})
    , lsp_hop(this, {})
{

    yang_name = "current-lsp"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::~CurrentLsp()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlsp_outgoing_info.len(); index++)
    {
        if(srlsp_outgoing_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_operation() const
{
    for (std::size_t index=0; index<srlsp_outgoing_info.len(); index++)
    {
        if(srlsp_outgoing_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlsp-outgoing-info")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo>();
        ent_->parent = this;
        srlsp_outgoing_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-hop")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop>();
        ent_->parent = this;
        lsp_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlsp_outgoing_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
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

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlsp-outgoing-info" || name == "lsp-hop" || name == "lsp-uptime" || name == "path-protection-lsp-id" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::SrlspOutgoingInfo()
    :
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"}
{

    yang_name = "srlsp-outgoing-info"; yang_parent_name = "current-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::~SrlspOutgoingInfo()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_output_interface.is_set
	|| lsp_output_label.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlsp-outgoing-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-output-interface" || name == "lsp-output-label")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "current-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/current-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::StandbyLsp()
    :
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"}
        ,
    srlsp_outgoing_info(this, {})
    , lsp_hop(this, {})
{

    yang_name = "standby-lsp"; yang_parent_name = "tunnel-path-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::~StandbyLsp()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlsp_outgoing_info.len(); index++)
    {
        if(srlsp_outgoing_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_operation() const
{
    for (std::size_t index=0; index<srlsp_outgoing_info.len(); index++)
    {
        if(srlsp_outgoing_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlsp-outgoing-info")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo>();
        ent_->parent = this;
        srlsp_outgoing_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-hop")
    {
        auto ent_ = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop>();
        ent_->parent = this;
        lsp_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlsp_outgoing_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
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

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlsp-outgoing-info" || name == "lsp-hop" || name == "lsp-uptime" || name == "path-protection-lsp-id" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::SrlspOutgoingInfo()
    :
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"}
{

    yang_name = "srlsp-outgoing-info"; yang_parent_name = "standby-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::~SrlspOutgoingInfo()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_output_interface.is_set
	|| lsp_output_label.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlsp-outgoing-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-output-interface" || name == "lsp-output-label")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::LspHop()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "lsp-hop"; yang_parent_name = "standby-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::~LspHop()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "lsp-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/tunnels/tunnel-path-protections/tunnel-path-protection/standby-lsp/lsp-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::MaximumTunnels::MaximumTunnels()
    :
    current_maximum_tunnels{YType::uint32, "current-maximum-tunnels"},
    current_maximum_destinations{YType::uint32, "current-maximum-destinations"},
    current_maximum_p2mp_tunnels{YType::uint32, "current-maximum-p2mp-tunnels"},
    current_maximum_p2mp_destnation_per_tunnel{YType::uint32, "current-maximum-p2mp-destnation-per-tunnel"},
    absolute_maximum{YType::uint32, "absolute-maximum"},
    current_maximum_autobackups{YType::uint32, "current-maximum-autobackups"},
    current_maximum_auto_mesh{YType::uint32, "current-maximum-auto-mesh"},
    current_tunnel_count{YType::uint32, "current-tunnel-count"},
    current_destination_count{YType::uint32, "current-destination-count"},
    current_p2mp_tunnel_count{YType::uint32, "current-p2mp-tunnel-count"},
    current_p2mp_destnation_per_tunnel_count{YType::uint32, "current-p2mp-destnation-per-tunnel-count"},
    is_autobackup_range_configured{YType::boolean, "is-autobackup-range-configured"},
    current_autobackups{YType::uint32, "current-autobackups"},
    is_auto_mesh_range_configured{YType::boolean, "is-auto-mesh-range-configured"},
    current_auto_mesh{YType::uint32, "current-auto-mesh"},
    current_maximum_gmpls_unitunnels{YType::uint32, "current-maximum-gmpls-unitunnels"},
    current_gmpls_uni{YType::uint32, "current-gmpls-uni"}
{

    yang_name = "maximum-tunnels"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::MaximumTunnels::~MaximumTunnels()
{
}

bool MplsTe::MaximumTunnels::has_data() const
{
    if (is_presence_container) return true;
    return current_maximum_tunnels.is_set
	|| current_maximum_destinations.is_set
	|| current_maximum_p2mp_tunnels.is_set
	|| current_maximum_p2mp_destnation_per_tunnel.is_set
	|| absolute_maximum.is_set
	|| current_maximum_autobackups.is_set
	|| current_maximum_auto_mesh.is_set
	|| current_tunnel_count.is_set
	|| current_destination_count.is_set
	|| current_p2mp_tunnel_count.is_set
	|| current_p2mp_destnation_per_tunnel_count.is_set
	|| is_autobackup_range_configured.is_set
	|| current_autobackups.is_set
	|| is_auto_mesh_range_configured.is_set
	|| current_auto_mesh.is_set
	|| current_maximum_gmpls_unitunnels.is_set
	|| current_gmpls_uni.is_set;
}

bool MplsTe::MaximumTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_maximum_tunnels.yfilter)
	|| ydk::is_set(current_maximum_destinations.yfilter)
	|| ydk::is_set(current_maximum_p2mp_tunnels.yfilter)
	|| ydk::is_set(current_maximum_p2mp_destnation_per_tunnel.yfilter)
	|| ydk::is_set(absolute_maximum.yfilter)
	|| ydk::is_set(current_maximum_autobackups.yfilter)
	|| ydk::is_set(current_maximum_auto_mesh.yfilter)
	|| ydk::is_set(current_tunnel_count.yfilter)
	|| ydk::is_set(current_destination_count.yfilter)
	|| ydk::is_set(current_p2mp_tunnel_count.yfilter)
	|| ydk::is_set(current_p2mp_destnation_per_tunnel_count.yfilter)
	|| ydk::is_set(is_autobackup_range_configured.yfilter)
	|| ydk::is_set(current_autobackups.yfilter)
	|| ydk::is_set(is_auto_mesh_range_configured.yfilter)
	|| ydk::is_set(current_auto_mesh.yfilter)
	|| ydk::is_set(current_maximum_gmpls_unitunnels.yfilter)
	|| ydk::is_set(current_gmpls_uni.yfilter);
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

    if (current_maximum_tunnels.is_set || is_set(current_maximum_tunnels.yfilter)) leaf_name_data.push_back(current_maximum_tunnels.get_name_leafdata());
    if (current_maximum_destinations.is_set || is_set(current_maximum_destinations.yfilter)) leaf_name_data.push_back(current_maximum_destinations.get_name_leafdata());
    if (current_maximum_p2mp_tunnels.is_set || is_set(current_maximum_p2mp_tunnels.yfilter)) leaf_name_data.push_back(current_maximum_p2mp_tunnels.get_name_leafdata());
    if (current_maximum_p2mp_destnation_per_tunnel.is_set || is_set(current_maximum_p2mp_destnation_per_tunnel.yfilter)) leaf_name_data.push_back(current_maximum_p2mp_destnation_per_tunnel.get_name_leafdata());
    if (absolute_maximum.is_set || is_set(absolute_maximum.yfilter)) leaf_name_data.push_back(absolute_maximum.get_name_leafdata());
    if (current_maximum_autobackups.is_set || is_set(current_maximum_autobackups.yfilter)) leaf_name_data.push_back(current_maximum_autobackups.get_name_leafdata());
    if (current_maximum_auto_mesh.is_set || is_set(current_maximum_auto_mesh.yfilter)) leaf_name_data.push_back(current_maximum_auto_mesh.get_name_leafdata());
    if (current_tunnel_count.is_set || is_set(current_tunnel_count.yfilter)) leaf_name_data.push_back(current_tunnel_count.get_name_leafdata());
    if (current_destination_count.is_set || is_set(current_destination_count.yfilter)) leaf_name_data.push_back(current_destination_count.get_name_leafdata());
    if (current_p2mp_tunnel_count.is_set || is_set(current_p2mp_tunnel_count.yfilter)) leaf_name_data.push_back(current_p2mp_tunnel_count.get_name_leafdata());
    if (current_p2mp_destnation_per_tunnel_count.is_set || is_set(current_p2mp_destnation_per_tunnel_count.yfilter)) leaf_name_data.push_back(current_p2mp_destnation_per_tunnel_count.get_name_leafdata());
    if (is_autobackup_range_configured.is_set || is_set(is_autobackup_range_configured.yfilter)) leaf_name_data.push_back(is_autobackup_range_configured.get_name_leafdata());
    if (current_autobackups.is_set || is_set(current_autobackups.yfilter)) leaf_name_data.push_back(current_autobackups.get_name_leafdata());
    if (is_auto_mesh_range_configured.is_set || is_set(is_auto_mesh_range_configured.yfilter)) leaf_name_data.push_back(is_auto_mesh_range_configured.get_name_leafdata());
    if (current_auto_mesh.is_set || is_set(current_auto_mesh.yfilter)) leaf_name_data.push_back(current_auto_mesh.get_name_leafdata());
    if (current_maximum_gmpls_unitunnels.is_set || is_set(current_maximum_gmpls_unitunnels.yfilter)) leaf_name_data.push_back(current_maximum_gmpls_unitunnels.get_name_leafdata());
    if (current_gmpls_uni.is_set || is_set(current_gmpls_uni.yfilter)) leaf_name_data.push_back(current_gmpls_uni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::MaximumTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::MaximumTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::MaximumTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-maximum-tunnels")
    {
        current_maximum_tunnels = value;
        current_maximum_tunnels.value_namespace = name_space;
        current_maximum_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-destinations")
    {
        current_maximum_destinations = value;
        current_maximum_destinations.value_namespace = name_space;
        current_maximum_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-p2mp-tunnels")
    {
        current_maximum_p2mp_tunnels = value;
        current_maximum_p2mp_tunnels.value_namespace = name_space;
        current_maximum_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-p2mp-destnation-per-tunnel")
    {
        current_maximum_p2mp_destnation_per_tunnel = value;
        current_maximum_p2mp_destnation_per_tunnel.value_namespace = name_space;
        current_maximum_p2mp_destnation_per_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-maximum")
    {
        absolute_maximum = value;
        absolute_maximum.value_namespace = name_space;
        absolute_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-autobackups")
    {
        current_maximum_autobackups = value;
        current_maximum_autobackups.value_namespace = name_space;
        current_maximum_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-auto-mesh")
    {
        current_maximum_auto_mesh = value;
        current_maximum_auto_mesh.value_namespace = name_space;
        current_maximum_auto_mesh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-tunnel-count")
    {
        current_tunnel_count = value;
        current_tunnel_count.value_namespace = name_space;
        current_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-destination-count")
    {
        current_destination_count = value;
        current_destination_count.value_namespace = name_space;
        current_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-p2mp-tunnel-count")
    {
        current_p2mp_tunnel_count = value;
        current_p2mp_tunnel_count.value_namespace = name_space;
        current_p2mp_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-p2mp-destnation-per-tunnel-count")
    {
        current_p2mp_destnation_per_tunnel_count = value;
        current_p2mp_destnation_per_tunnel_count.value_namespace = name_space;
        current_p2mp_destnation_per_tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-autobackup-range-configured")
    {
        is_autobackup_range_configured = value;
        is_autobackup_range_configured.value_namespace = name_space;
        is_autobackup_range_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-autobackups")
    {
        current_autobackups = value;
        current_autobackups.value_namespace = name_space;
        current_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-range-configured")
    {
        is_auto_mesh_range_configured = value;
        is_auto_mesh_range_configured.value_namespace = name_space;
        is_auto_mesh_range_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-auto-mesh")
    {
        current_auto_mesh = value;
        current_auto_mesh.value_namespace = name_space;
        current_auto_mesh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-maximum-gmpls-unitunnels")
    {
        current_maximum_gmpls_unitunnels = value;
        current_maximum_gmpls_unitunnels.value_namespace = name_space;
        current_maximum_gmpls_unitunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-gmpls-uni")
    {
        current_gmpls_uni = value;
        current_gmpls_uni.value_namespace = name_space;
        current_gmpls_uni.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::MaximumTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-maximum-tunnels")
    {
        current_maximum_tunnels.yfilter = yfilter;
    }
    if(value_path == "current-maximum-destinations")
    {
        current_maximum_destinations.yfilter = yfilter;
    }
    if(value_path == "current-maximum-p2mp-tunnels")
    {
        current_maximum_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "current-maximum-p2mp-destnation-per-tunnel")
    {
        current_maximum_p2mp_destnation_per_tunnel.yfilter = yfilter;
    }
    if(value_path == "absolute-maximum")
    {
        absolute_maximum.yfilter = yfilter;
    }
    if(value_path == "current-maximum-autobackups")
    {
        current_maximum_autobackups.yfilter = yfilter;
    }
    if(value_path == "current-maximum-auto-mesh")
    {
        current_maximum_auto_mesh.yfilter = yfilter;
    }
    if(value_path == "current-tunnel-count")
    {
        current_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "current-destination-count")
    {
        current_destination_count.yfilter = yfilter;
    }
    if(value_path == "current-p2mp-tunnel-count")
    {
        current_p2mp_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "current-p2mp-destnation-per-tunnel-count")
    {
        current_p2mp_destnation_per_tunnel_count.yfilter = yfilter;
    }
    if(value_path == "is-autobackup-range-configured")
    {
        is_autobackup_range_configured.yfilter = yfilter;
    }
    if(value_path == "current-autobackups")
    {
        current_autobackups.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-range-configured")
    {
        is_auto_mesh_range_configured.yfilter = yfilter;
    }
    if(value_path == "current-auto-mesh")
    {
        current_auto_mesh.yfilter = yfilter;
    }
    if(value_path == "current-maximum-gmpls-unitunnels")
    {
        current_maximum_gmpls_unitunnels.yfilter = yfilter;
    }
    if(value_path == "current-gmpls-uni")
    {
        current_gmpls_uni.yfilter = yfilter;
    }
}

bool MplsTe::MaximumTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-maximum-tunnels" || name == "current-maximum-destinations" || name == "current-maximum-p2mp-tunnels" || name == "current-maximum-p2mp-destnation-per-tunnel" || name == "absolute-maximum" || name == "current-maximum-autobackups" || name == "current-maximum-auto-mesh" || name == "current-tunnel-count" || name == "current-destination-count" || name == "current-p2mp-tunnel-count" || name == "current-p2mp-destnation-per-tunnel-count" || name == "is-autobackup-range-configured" || name == "current-autobackups" || name == "is-auto-mesh-range-configured" || name == "current-auto-mesh" || name == "current-maximum-gmpls-unitunnels" || name == "current-gmpls-uni")
        return true;
    return false;
}

MplsTe::PathProtection::PathProtection()
    :
    switchover_log(std::make_shared<MplsTe::PathProtection::SwitchoverLog>())
{
    switchover_log->parent = this;

    yang_name = "path-protection"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::PathProtection::~PathProtection()
{
}

bool MplsTe::PathProtection::has_data() const
{
    if (is_presence_container) return true;
    return (switchover_log !=  nullptr && switchover_log->has_data());
}

bool MplsTe::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| (switchover_log !=  nullptr && switchover_log->has_operation());
}

std::string MplsTe::PathProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover-log")
    {
        if(switchover_log == nullptr)
        {
            switchover_log = std::make_shared<MplsTe::PathProtection::SwitchoverLog>();
        }
        return switchover_log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchover_log != nullptr)
    {
        _children["switchover-log"] = switchover_log;
    }

    return _children;
}

void MplsTe::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover-log")
        return true;
    return false;
}

MplsTe::PathProtection::SwitchoverLog::SwitchoverLog()
    :
    path_protection_switchovers{YType::uint32, "path-protection-switchovers"},
    maximum_switchover_millisec{YType::uint32, "maximum-switchover-millisec"},
    average_switchover_millisec{YType::uint32, "average-switchover-millisec"}
        ,
    path_protection_switchover_entry(this, {})
{

    yang_name = "switchover-log"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::PathProtection::SwitchoverLog::~SwitchoverLog()
{
}

bool MplsTe::PathProtection::SwitchoverLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_protection_switchover_entry.len(); index++)
    {
        if(path_protection_switchover_entry[index]->has_data())
            return true;
    }
    return path_protection_switchovers.is_set
	|| maximum_switchover_millisec.is_set
	|| average_switchover_millisec.is_set;
}

bool MplsTe::PathProtection::SwitchoverLog::has_operation() const
{
    for (std::size_t index=0; index<path_protection_switchover_entry.len(); index++)
    {
        if(path_protection_switchover_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(path_protection_switchovers.yfilter)
	|| ydk::is_set(maximum_switchover_millisec.yfilter)
	|| ydk::is_set(average_switchover_millisec.yfilter);
}

std::string MplsTe::PathProtection::SwitchoverLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/path-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::SwitchoverLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::SwitchoverLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection_switchovers.is_set || is_set(path_protection_switchovers.yfilter)) leaf_name_data.push_back(path_protection_switchovers.get_name_leafdata());
    if (maximum_switchover_millisec.is_set || is_set(maximum_switchover_millisec.yfilter)) leaf_name_data.push_back(maximum_switchover_millisec.get_name_leafdata());
    if (average_switchover_millisec.is_set || is_set(average_switchover_millisec.yfilter)) leaf_name_data.push_back(average_switchover_millisec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::PathProtection::SwitchoverLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-protection-switchover-entry")
    {
        auto ent_ = std::make_shared<MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry>();
        ent_->parent = this;
        path_protection_switchover_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::PathProtection::SwitchoverLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_protection_switchover_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::PathProtection::SwitchoverLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection-switchovers")
    {
        path_protection_switchovers = value;
        path_protection_switchovers.value_namespace = name_space;
        path_protection_switchovers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-switchover-millisec")
    {
        maximum_switchover_millisec = value;
        maximum_switchover_millisec.value_namespace = name_space;
        maximum_switchover_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-switchover-millisec")
    {
        average_switchover_millisec = value;
        average_switchover_millisec.value_namespace = name_space;
        average_switchover_millisec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::PathProtection::SwitchoverLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection-switchovers")
    {
        path_protection_switchovers.yfilter = yfilter;
    }
    if(value_path == "maximum-switchover-millisec")
    {
        maximum_switchover_millisec.yfilter = yfilter;
    }
    if(value_path == "average-switchover-millisec")
    {
        average_switchover_millisec.yfilter = yfilter;
    }
}

bool MplsTe::PathProtection::SwitchoverLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-entry" || name == "path-protection-switchovers" || name == "maximum-switchover-millisec" || name == "average-switchover-millisec")
        return true;
    return false;
}

MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::PathProtectionSwitchoverEntry()
    :
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    to_lsp_id{YType::uint16, "to-lsp-id"},
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"}
{

    yang_name = "path-protection-switchover-entry"; yang_parent_name = "switchover-log"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::~PathProtectionSwitchoverEntry()
{
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_data() const
{
    if (is_presence_container) return true;
    return path_protection_switchover_event_index.is_set
	|| path_protection_tunnel_id.is_set
	|| from_lsp_id.is_set
	|| to_lsp_id.is_set
	|| date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| switchover_duration_millisec.is_set
	|| path_protection_switchover_reason.is_set;
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter);
}

std::string MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/path-protection/switchover-log/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection-switchover-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());
    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
}

bool MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-event-index" || name == "path-protection-tunnel-id" || name == "from-lsp-id" || name == "to-lsp-id" || name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "switchover-duration-millisec" || name == "path-protection-switchover-reason")
        return true;
    return false;
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoutes()
    :
    fib_next_hop_label_route(this, {"label"})
{

    yang_name = "fib-next-hop-label-routes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FibNextHopLabelRoutes::~FibNextHopLabelRoutes()
{
}

bool MplsTe::FibNextHopLabelRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fib_next_hop_label_route.len(); index++)
    {
        if(fib_next_hop_label_route[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FibNextHopLabelRoutes::has_operation() const
{
    for (std::size_t index=0; index<fib_next_hop_label_route.len(); index++)
    {
        if(fib_next_hop_label_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::FibNextHopLabelRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FibNextHopLabelRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-label-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FibNextHopLabelRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::FibNextHopLabelRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-next-hop-label-route")
    {
        auto ent_ = std::make_shared<MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute>();
        ent_->parent = this;
        fib_next_hop_label_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::FibNextHopLabelRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fib_next_hop_label_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::FibNextHopLabelRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::FibNextHopLabelRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::FibNextHopLabelRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-next-hop-label-route")
        return true;
    return false;
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::FibNextHopLabelRoute()
    :
    label{YType::uint32, "label"},
    prefix_addr{YType::str, "prefix-addr"},
    create_time{YType::uint32, "create-time"},
    last_used_time{YType::uint32, "last-used-time"},
    last_update_time{YType::uint32, "last-update-time"},
    expire_time{YType::uint32, "expire-time"},
    is_registered{YType::boolean, "is-registered"},
    is_notified{YType::boolean, "is-notified"},
    is_stale{YType::boolean, "is-stale"},
    route_version{YType::uint64, "route-version"}
        ,
    target_address(std::make_shared<MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress>())
    , next_hop_path(this, {})
{
    target_address->parent = this;

    yang_name = "fib-next-hop-label-route"; yang_parent_name = "fib-next-hop-label-routes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::~FibNextHopLabelRoute()
{
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_path.len(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return label.is_set
	|| prefix_addr.is_set
	|| create_time.is_set
	|| last_used_time.is_set
	|| last_update_time.is_set
	|| expire_time.is_set
	|| is_registered.is_set
	|| is_notified.is_set
	|| is_stale.is_set
	|| route_version.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.len(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(prefix_addr.yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(last_used_time.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(expire_time.yfilter)
	|| ydk::is_set(is_registered.yfilter)
	|| ydk::is_set(is_notified.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fib-next-hop-label-routes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-label-route";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (prefix_addr.is_set || is_set(prefix_addr.yfilter)) leaf_name_data.push_back(prefix_addr.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (last_used_time.is_set || is_set(last_used_time.yfilter)) leaf_name_data.push_back(last_used_time.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.yfilter)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_notified.is_set || is_set(is_notified.yfilter)) leaf_name_data.push_back(is_notified.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress>();
        }
        return target_address;
    }

    if(child_yang_name == "next-hop-path")
    {
        auto ent_ = std::make_shared<MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath>();
        ent_->parent = this;
        next_hop_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(target_address != nullptr)
    {
        _children["target-address"] = target_address;
    }

    count_ = 0;
    for (auto ent_ : next_hop_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-addr")
    {
        prefix_addr = value;
        prefix_addr.value_namespace = name_space;
        prefix_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-used-time")
    {
        last_used_time = value;
        last_used_time.value_namespace = name_space;
        last_used_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
        is_registered.value_namespace = name_space;
        is_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-notified")
    {
        is_notified = value;
        is_notified.value_namespace = name_space;
        is_notified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "prefix-addr")
    {
        prefix_addr.yfilter = yfilter;
    }
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "last-used-time")
    {
        last_used_time.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
    if(value_path == "is-registered")
    {
        is_registered.yfilter = yfilter;
    }
    if(value_path == "is-notified")
    {
        is_notified.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-address" || name == "next-hop-path" || name == "label" || name == "prefix-addr" || name == "create-time" || name == "last-used-time" || name == "last-update-time" || name == "expire-time" || name == "is-registered" || name == "is-notified" || name == "is-stale" || name == "route-version")
        return true;
    return false;
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::TargetAddress()
    :
    type{YType::enumeration, "type"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"}
{

    yang_name = "target-address"; yang_parent_name = "fib-next-hop-label-route"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::~TargetAddress()
{
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ip_address.is_set
	|| label.is_set;
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ip-address" || name == "label")
        return true;
    return false;
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::NextHopPath()
    :
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    path_id{YType::uint32, "path-id"},
    backup_path_id{YType::uint32, "backup-path-id"},
    pure_backup{YType::boolean, "pure-backup"}
        ,
    label_stack(this, {})
{

    yang_name = "next-hop-path"; yang_parent_name = "fib-next-hop-label-route"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return interface.is_set
	|| next_hop_address.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| pure_backup.is_set;
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_operation() const
{
    for (std::size_t index=0; index<label_stack.len(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(pure_backup.yfilter);
}

std::string MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (pure_backup.is_set || is_set(pure_backup.yfilter)) leaf_name_data.push_back(pure_backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack>();
        ent_->parent = this;
        label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pure-backup")
    {
        pure_backup = value;
        pure_backup.value_namespace = name_space;
        pure_backup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "pure-backup")
    {
        pure_backup.yfilter = yfilter;
    }
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "interface" || name == "next-hop-address" || name == "path-id" || name == "backup-path-id" || name == "pure-backup")
        return true;
    return false;
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "next-hop-path"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::~LabelStack()
{
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::P2mp()
    :
    tunnel_rewrites(std::make_shared<MplsTe::P2mp::TunnelRewrites>())
    , collaborator_timers(std::make_shared<MplsTe::P2mp::CollaboratorTimers>())
    , forwarding_output_label_rewrites(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites>())
{
    tunnel_rewrites->parent = this;
    collaborator_timers->parent = this;
    forwarding_output_label_rewrites->parent = this;

    yang_name = "p2mp"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::~P2mp()
{
}

bool MplsTe::P2mp::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_rewrites !=  nullptr && tunnel_rewrites->has_data())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (forwarding_output_label_rewrites !=  nullptr && forwarding_output_label_rewrites->has_data());
}

bool MplsTe::P2mp::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_rewrites !=  nullptr && tunnel_rewrites->has_operation())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (forwarding_output_label_rewrites !=  nullptr && forwarding_output_label_rewrites->has_operation());
}

std::string MplsTe::P2mp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrites")
    {
        if(tunnel_rewrites == nullptr)
        {
            tunnel_rewrites = std::make_shared<MplsTe::P2mp::TunnelRewrites>();
        }
        return tunnel_rewrites;
    }

    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers == nullptr)
        {
            collaborator_timers = std::make_shared<MplsTe::P2mp::CollaboratorTimers>();
        }
        return collaborator_timers;
    }

    if(child_yang_name == "forwarding-output-label-rewrites")
    {
        if(forwarding_output_label_rewrites == nullptr)
        {
            forwarding_output_label_rewrites = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites>();
        }
        return forwarding_output_label_rewrites;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_rewrites != nullptr)
    {
        _children["tunnel-rewrites"] = tunnel_rewrites;
    }

    if(collaborator_timers != nullptr)
    {
        _children["collaborator-timers"] = collaborator_timers;
    }

    if(forwarding_output_label_rewrites != nullptr)
    {
        _children["forwarding-output-label-rewrites"] = forwarding_output_label_rewrites;
    }

    return _children;
}

void MplsTe::P2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrites" || name == "collaborator-timers" || name == "forwarding-output-label-rewrites")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrites()
    :
    tunnel_rewrite(this, {"tunnel_id", "lsp_id", "ctype"})
{

    yang_name = "tunnel-rewrites"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::TunnelRewrites::~TunnelRewrites()
{
}

bool MplsTe::P2mp::TunnelRewrites::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_rewrite.len(); index++)
    {
        if(tunnel_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2mp::TunnelRewrites::has_operation() const
{
    for (std::size_t index=0; index<tunnel_rewrite.len(); index++)
    {
        if(tunnel_rewrite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::TunnelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite>();
        ent_->parent = this;
        tunnel_rewrite.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_rewrite.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2mp::TunnelRewrites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2mp::TunnelRewrites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::TunnelRewrite()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    ctype{YType::enumeration, "ctype"},
    tunnel_interface{YType::str, "tunnel-interface"},
    tunnel_signal_name{YType::str, "tunnel-signal-name"},
    is_segment_routing{YType::boolean, "is-segment-routing"}
        ,
    successful_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite>())
    , failed_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite>())
    , pending_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite>())
{
    successful_rewrite->parent = this;
    failed_rewrite->parent = this;
    pending_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "tunnel-rewrites"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::~TunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| ctype.is_set
	|| tunnel_interface.is_set
	|| tunnel_signal_name.is_set
	|| is_segment_routing.is_set
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(tunnel_signal_name.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/tunnel-rewrites/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(ctype, "ctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (tunnel_signal_name.is_set || is_set(tunnel_signal_name.yfilter)) leaf_name_data.push_back(tunnel_signal_name.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite == nullptr)
        {
            successful_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite>();
        }
        return successful_rewrite;
    }

    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite == nullptr)
        {
            failed_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite>();
        }
        return failed_rewrite;
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite == nullptr)
        {
            pending_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite>();
        }
        return pending_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(successful_rewrite != nullptr)
    {
        _children["successful-rewrite"] = successful_rewrite;
    }

    if(failed_rewrite != nullptr)
    {
        _children["failed-rewrite"] = failed_rewrite;
    }

    if(pending_rewrite != nullptr)
    {
        _children["pending-rewrite"] = pending_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "tunnel-signal-name")
    {
        tunnel_signal_name.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "successful-rewrite" || name == "failed-rewrite" || name == "pending-rewrite" || name == "tunnel-id" || name == "lsp-id" || name == "ctype" || name == "tunnel-interface" || name == "tunnel-signal-name" || name == "is-segment-routing")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
        ,
    tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "successful-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_rewrite != nullptr)
    {
        _children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
        ,
    p2p_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite>())
    , p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite>())
{
    p2p_tunnel_rewrite->parent = this;
    p2mp_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2p_tunnel_rewrite != nullptr)
    {
        _children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    if(p2mp_tunnel_rewrite != nullptr)
    {
        _children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-tunnel-rewrite" || name == "p2mp-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::P2pTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_id{YType::uint16, "tunnel-id"},
    source_pe{YType::str, "source-pe"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    backup_active{YType::boolean, "backup-active"},
    original_input_interface{YType::str, "original-input-interface"},
    previous_hop_address{YType::str, "previous-hop-address"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::~P2pTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set
	|| tunnel_id.is_set
	|| source_pe.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| backup_active.is_set
	|| original_input_interface.is_set
	|| previous_hop_address.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "local-label" || name == "tunnel-id" || name == "source-pe" || name == "destination-address" || name == "extended-tunnel-id" || name == "backup-active" || name == "original-input-interface" || name == "previous-hop-address" || name == "output-interface-name" || name == "backup-tunnel-name")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::P2mpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::~P2mpTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::FailedRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
        ,
    tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "failed-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_rewrite != nullptr)
    {
        _children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
        ,
    p2p_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite>())
    , p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite>())
{
    p2p_tunnel_rewrite->parent = this;
    p2mp_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2p_tunnel_rewrite != nullptr)
    {
        _children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    if(p2mp_tunnel_rewrite != nullptr)
    {
        _children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-tunnel-rewrite" || name == "p2mp-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::P2pTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_id{YType::uint16, "tunnel-id"},
    source_pe{YType::str, "source-pe"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    backup_active{YType::boolean, "backup-active"},
    original_input_interface{YType::str, "original-input-interface"},
    previous_hop_address{YType::str, "previous-hop-address"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::~P2pTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set
	|| tunnel_id.is_set
	|| source_pe.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| backup_active.is_set
	|| original_input_interface.is_set
	|| previous_hop_address.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "local-label" || name == "tunnel-id" || name == "source-pe" || name == "destination-address" || name == "extended-tunnel-id" || name == "backup-active" || name == "original-input-interface" || name == "previous-hop-address" || name == "output-interface-name" || name == "backup-tunnel-name")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::P2mpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::~P2mpTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
        ,
    tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_rewrite != nullptr)
    {
        _children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
        ,
    p2p_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite>())
    , p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite>())
{
    p2p_tunnel_rewrite->parent = this;
    p2mp_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2p_tunnel_rewrite != nullptr)
    {
        _children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    if(p2mp_tunnel_rewrite != nullptr)
    {
        _children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-tunnel-rewrite" || name == "p2mp-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::P2pTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_id{YType::uint16, "tunnel-id"},
    source_pe{YType::str, "source-pe"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    backup_active{YType::boolean, "backup-active"},
    original_input_interface{YType::str, "original-input-interface"},
    previous_hop_address{YType::str, "previous-hop-address"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::~P2pTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set
	|| tunnel_id.is_set
	|| source_pe.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| backup_active.is_set
	|| original_input_interface.is_set
	|| previous_hop_address.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "local-label" || name == "tunnel-id" || name == "source-pe" || name == "destination-address" || name == "extended-tunnel-id" || name == "backup-active" || name == "original-input-interface" || name == "previous-hop-address" || name == "output-interface-name" || name == "backup-tunnel-name")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2pTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::P2mpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::~P2mpTunnelRewrite()
{
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set;
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2mpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2mp::CollaboratorTimers::CollaboratorTimers()
    :
    p2mp_timer(this, {})
{

    yang_name = "collaborator-timers"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTe::P2mp::CollaboratorTimers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2mp_timer.len(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2mp::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.len(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2mp::CollaboratorTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::CollaboratorTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::CollaboratorTimers::P2mpTimer>();
        ent_->parent = this;
        p2mp_timer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : p2mp_timer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2mp::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2mp::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTe::P2mp::CollaboratorTimers::P2mpTimer::P2mpTimer()
    :
    timer_type{YType::enumeration, "timer-type"},
    timer_name{YType::str, "timer-name"},
    start_time{YType::uint32, "start-time"},
    expiry_time{YType::uint32, "expiry-time"},
    stop_time{YType::uint32, "stop-time"},
    duration{YType::uint32, "duration"},
    is_running{YType::boolean, "is-running"}
{

    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::CollaboratorTimers::P2mpTimer::~P2mpTimer()
{
}

bool MplsTe::P2mp::CollaboratorTimers::P2mpTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_type.is_set
	|| timer_name.is_set
	|| start_time.is_set
	|| expiry_time.is_set
	|| stop_time.is_set
	|| duration.is_set
	|| is_running.is_set;
}

bool MplsTe::P2mp::CollaboratorTimers::P2mpTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(stop_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_running.yfilter);
}

std::string MplsTe::P2mp::CollaboratorTimers::P2mpTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/collaborator-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::CollaboratorTimers::P2mpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::CollaboratorTimers::P2mpTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::CollaboratorTimers::P2mpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::CollaboratorTimers::P2mpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::CollaboratorTimers::P2mpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::CollaboratorTimers::P2mpTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::CollaboratorTimers::P2mpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-type" || name == "timer-name" || name == "start-time" || name == "expiry-time" || name == "stop-time" || name == "duration" || name == "is-running")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrites()
    :
    forwarding_output_label_rewrite(this, {"tunnel_id", "lsp_id", "extended_tunnel_id", "source_address", "p2mp_id", "destination_address", "next_hop_address", "previous_hop_address", "ctype"})
{

    yang_name = "forwarding-output-label-rewrites"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::~ForwardingOutputLabelRewrites()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_output_label_rewrite.len(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::has_operation() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.len(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-output-label-rewrite")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite>();
        ent_->parent = this;
        forwarding_output_label_rewrite.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_output_label_rewrite.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-output-label-rewrite")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::ForwardingOutputLabelRewrite()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    source_address{YType::str, "source-address"},
    p2mp_id{YType::uint32, "p2mp-id"},
    destination_address{YType::str, "destination-address"},
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    ctype{YType::enumeration, "ctype"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    is_segment_routing{YType::boolean, "is-segment-routing"}
        ,
    s2l_output_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite>())
    , s2l(this, {})
    , s2lsr_path(this, {})
{
    s2l_output_rewrite->parent = this;

    yang_name = "forwarding-output-label-rewrite"; yang_parent_name = "forwarding-output-label-rewrites"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::~ForwardingOutputLabelRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.len(); index++)
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
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| is_segment_routing.is_set
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<s2l.len(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.len(); index++)
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
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/forwarding-output-label-rewrites/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrite";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    ADD_KEY_TOKEN(previous_hop_address, "previous-hop-address");
    ADD_KEY_TOKEN(ctype, "ctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_name_leaf_data() const
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
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-output-rewrite")
    {
        if(s2l_output_rewrite == nullptr)
        {
            s2l_output_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite>();
        }
        return s2l_output_rewrite;
    }

    if(child_yang_name == "s2l")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l>();
        ent_->parent = this;
        s2l.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2lsr-path")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath>();
        ent_->parent = this;
        s2lsr_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(s2l_output_rewrite != nullptr)
    {
        _children["s2l-output-rewrite"] = s2l_output_rewrite;
    }

    count_ = 0;
    for (auto ent_ : s2l.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : s2lsr_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-output-rewrite" || name == "s2l" || name == "s2lsr-path" || name == "tunnel-id" || name == "lsp-id" || name == "extended-tunnel-id" || name == "source-address" || name == "p2mp-id" || name == "destination-address" || name == "next-hop-address" || name == "previous-hop-address" || name == "ctype" || name == "original-input-interface" || name == "output-interface-name" || name == "backup-tunnel-name" || name == "is-segment-routing")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::S2lOutputRewrite()
    :
    subfamily(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily>())
    , successful_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite>())
    , failed_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite>())
    , pending_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite>())
{
    subfamily->parent = this;
    successful_rewrite->parent = this;
    failed_rewrite->parent = this;
    pending_rewrite->parent = this;

    yang_name = "s2l-output-rewrite"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::~S2lOutputRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::has_data() const
{
    if (is_presence_container) return true;
    return (subfamily !=  nullptr && subfamily->has_data())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::has_operation() const
{
    return is_set(yfilter)
	|| (subfamily !=  nullptr && subfamily->has_operation())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-output-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subfamily")
    {
        if(subfamily == nullptr)
        {
            subfamily = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily>();
        }
        return subfamily;
    }

    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite == nullptr)
        {
            successful_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite>();
        }
        return successful_rewrite;
    }

    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite == nullptr)
        {
            failed_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite>();
        }
        return failed_rewrite;
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite == nullptr)
        {
            pending_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite>();
        }
        return pending_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subfamily != nullptr)
    {
        _children["subfamily"] = subfamily;
    }

    if(successful_rewrite != nullptr)
    {
        _children["successful-rewrite"] = successful_rewrite;
    }

    if(failed_rewrite != nullptr)
    {
        _children["failed-rewrite"] = failed_rewrite;
    }

    if(pending_rewrite != nullptr)
    {
        _children["pending-rewrite"] = pending_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subfamily" || name == "successful-rewrite" || name == "failed-rewrite" || name == "pending-rewrite")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::Subfamily()
    :
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    next_next_hop_address{YType::str, "next-next-hop-address"}
        ,
    lsp_fec(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "subfamily"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::~Subfamily()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| previous_hop_address.is_set
	|| next_next_hop_address.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(next_next_hop_address.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subfamily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (next_next_hop_address.is_set || is_set(next_next_hop_address.yfilter)) leaf_name_data.push_back(next_next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_fec != nullptr)
    {
        _children["lsp-fec"] = lsp_fec;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-next-hop-address")
    {
        next_next_hop_address = value;
        next_next_hop_address.value_namespace = name_space;
        next_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-address")
    {
        next_next_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "next-hop-address" || name == "previous-hop-address" || name == "next-next-hop-address")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "subfamily"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::~LspFec()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "successful-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::FailedRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "failed-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
        ,
    primary_s2l(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l>())
    , backup_tunnel_rewrite(std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary_s2l != nullptr)
    {
        _children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        _children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::PrimaryS2l()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "primary-s2l"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::~PrimaryS2l()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::PrimaryS2l::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
        ,
    sr_label_stack(this, {})
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.len(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack>();
        ent_->parent = this;
        sr_label_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::S2l()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_original_id{YType::str, "sub-group-original-id"}
{

    yang_name = "s2l"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::~S2l()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_original_id.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2l::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "sub-group-id" || name == "sub-group-original-id")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::S2lsrPath()
    :
    is_primary{YType::boolean, "is-primary"},
    is_backup{YType::boolean, "is-backup"},
    outgoing_interface{YType::str, "outgoing-interface"},
    path_id{YType::uint32, "path-id"},
    backup_path_id{YType::uint32, "backup-path-id"},
    next_hop{YType::str, "next-hop"}
        ,
    outgoing_labels_stack(this, {})
{

    yang_name = "s2lsr-path"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::~S2lsrPath()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<outgoing_labels_stack.len(); index++)
    {
        if(outgoing_labels_stack[index]->has_data())
            return true;
    }
    return is_primary.is_set
	|| is_backup.is_set
	|| outgoing_interface.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| next_hop.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::has_operation() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.len(); index++)
    {
        if(outgoing_labels_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_primary.yfilter)
	|| ydk::is_set(is_backup.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2lsr-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_primary.is_set || is_set(is_primary.yfilter)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_backup.is_set || is_set(is_backup.yfilter)) leaf_name_data.push_back(is_backup.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-labels-stack")
    {
        auto ent_ = std::make_shared<MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack>();
        ent_->parent = this;
        outgoing_labels_stack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : outgoing_labels_stack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-primary")
    {
        is_primary = value;
        is_primary.value_namespace = name_space;
        is_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backup")
    {
        is_backup = value;
        is_backup.value_namespace = name_space;
        is_backup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-primary")
    {
        is_primary.yfilter = yfilter;
    }
    if(value_path == "is-backup")
    {
        is_backup.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-labels-stack" || name == "is-primary" || name == "is-backup" || name == "outgoing-interface" || name == "path-id" || name == "backup-path-id" || name == "next-hop")
        return true;
    return false;
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::OutgoingLabelsStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "outgoing-labels-stack"; yang_parent_name = "s2lsr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::~OutgoingLabelsStack()
{
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-labels-stack";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2lsrPath::OutgoingLabelsStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::LspOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::LspOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
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
    transit_lsp_total_count{YType::uint32, "transit-lsp-total-count"},
    transit_lsp_unprotected_count{YType::uint32, "transit-lsp-unprotected-count"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    lsp_oor_timestamp{YType::uint32, "lsp-oor-timestamp"},
    lsp_oor_green_recovery_time{YType::uint32, "lsp-oor-green-recovery-time"}
        ,
    lsp_oor_state_xr(this, {})
{

    yang_name = "summary"; yang_parent_name = "lsp-out-of-resources"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::LspOutOfResources::Summary::~Summary()
{
}

bool MplsTe::LspOutOfResources::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_oor_state_xr.len(); index++)
    {
        if(lsp_oor_state_xr[index]->has_data())
            return true;
    }
    return transit_lsp_total_count.is_set
	|| transit_lsp_unprotected_count.is_set
	|| lsp_oor_state.is_set
	|| lsp_oor_timestamp.is_set
	|| lsp_oor_green_recovery_time.is_set;
}

bool MplsTe::LspOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.len(); index++)
    {
        if(lsp_oor_state_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transit_lsp_total_count.yfilter)
	|| ydk::is_set(transit_lsp_unprotected_count.yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(lsp_oor_timestamp.yfilter)
	|| ydk::is_set(lsp_oor_green_recovery_time.yfilter);
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

    if (transit_lsp_total_count.is_set || is_set(transit_lsp_total_count.yfilter)) leaf_name_data.push_back(transit_lsp_total_count.get_name_leafdata());
    if (transit_lsp_unprotected_count.is_set || is_set(transit_lsp_unprotected_count.yfilter)) leaf_name_data.push_back(transit_lsp_unprotected_count.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (lsp_oor_timestamp.is_set || is_set(lsp_oor_timestamp.yfilter)) leaf_name_data.push_back(lsp_oor_timestamp.get_name_leafdata());
    if (lsp_oor_green_recovery_time.is_set || is_set(lsp_oor_green_recovery_time.yfilter)) leaf_name_data.push_back(lsp_oor_green_recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::LspOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-oor-state-xr")
    {
        auto ent_ = std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr>();
        ent_->parent = this;
        lsp_oor_state_xr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::LspOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_oor_state_xr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::LspOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time = value;
        lsp_oor_green_recovery_time.value_namespace = name_space;
        lsp_oor_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count.yfilter = yfilter;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-oor-state-xr" || name == "transit-lsp-total-count" || name == "transit-lsp-unprotected-count" || name == "lsp-oor-state" || name == "lsp-oor-timestamp" || name == "lsp-oor-green-recovery-time")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::LspOorStateXr()
    :
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    threshold_transit_all{YType::uint32, "threshold-transit-all"},
    threshold_transit_unprotected{YType::uint32, "threshold-transit-unprotected"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    transition_duration{YType::uint32, "transition-duration"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    accept_reopt{YType::boolean, "accept-reopt"}
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
    if (is_presence_container) return true;
    return lsp_oor_state.is_set
	|| threshold_transit_all.is_set
	|| threshold_transit_unprotected.is_set
	|| te_metric_penalty.is_set
	|| available_bw_percentage.is_set
	|| transition_duration.is_set
	|| minimum_lsp_bandwidth.is_set
	|| accept_reopt.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(threshold_transit_all.yfilter)
	|| ydk::is_set(threshold_transit_unprotected.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (threshold_transit_all.is_set || is_set(threshold_transit_all.yfilter)) leaf_name_data.push_back(threshold_transit_all.get_name_leafdata());
    if (threshold_transit_unprotected.is_set || is_set(threshold_transit_unprotected.yfilter)) leaf_name_data.push_back(threshold_transit_unprotected.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
        lsp_oor_state.value_namespace = name_space;
        lsp_oor_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "lsp-oor-state" || name == "threshold-transit-all" || name == "threshold-transit-unprotected" || name == "te-metric-penalty" || name == "available-bw-percentage" || name == "transition-duration" || name == "minimum-lsp-bandwidth" || name == "accept-reopt")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::Statistics()
    :
    transitions{YType::uint32, "transitions"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"}
{

    yang_name = "statistics"; yang_parent_name = "lsp-oor-state-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::~Statistics()
{
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return transitions.is_set
	|| rejected_ls_ps_number.is_set
	|| accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set;
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitions.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter);
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

    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitions" || name == "rejected-ls-ps-number" || name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-reopt-ls-ps-number")
        return true;
    return false;
}

MplsTe::Bfd::Bfd()
    :
    head_infos(std::make_shared<MplsTe::Bfd::HeadInfos>())
    , links(std::make_shared<MplsTe::Bfd::Links>())
    , tail_infos(std::make_shared<MplsTe::Bfd::TailInfos>())
    , summary(std::make_shared<MplsTe::Bfd::Summary>())
    , counters(std::make_shared<MplsTe::Bfd::Counters>())
{
    head_infos->parent = this;
    links->parent = this;
    tail_infos->parent = this;
    summary->parent = this;
    counters->parent = this;

    yang_name = "bfd"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::~Bfd()
{
}

bool MplsTe::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return (head_infos !=  nullptr && head_infos->has_data())
	|| (links !=  nullptr && links->has_data())
	|| (tail_infos !=  nullptr && tail_infos->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (counters !=  nullptr && counters->has_data());
}

bool MplsTe::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (head_infos !=  nullptr && head_infos->has_operation())
	|| (links !=  nullptr && links->has_operation())
	|| (tail_infos !=  nullptr && tail_infos->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (counters !=  nullptr && counters->has_operation());
}

std::string MplsTe::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-infos")
    {
        if(head_infos == nullptr)
        {
            head_infos = std::make_shared<MplsTe::Bfd::HeadInfos>();
        }
        return head_infos;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsTe::Bfd::Links>();
        }
        return links;
    }

    if(child_yang_name == "tail-infos")
    {
        if(tail_infos == nullptr)
        {
            tail_infos = std::make_shared<MplsTe::Bfd::TailInfos>();
        }
        return tail_infos;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::Bfd::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<MplsTe::Bfd::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head_infos != nullptr)
    {
        _children["head-infos"] = head_infos;
    }

    if(links != nullptr)
    {
        _children["links"] = links;
    }

    if(tail_infos != nullptr)
    {
        _children["tail-infos"] = tail_infos;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void MplsTe::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-infos" || name == "links" || name == "tail-infos" || name == "summary" || name == "counters")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfos()
    :
    head_info(this, {"tunnel_name"})
{

    yang_name = "head-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::HeadInfos::~HeadInfos()
{
}

bool MplsTe::Bfd::HeadInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<head_info.len(); index++)
    {
        if(head_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::HeadInfos::has_operation() const
{
    for (std::size_t index=0; index<head_info.len(); index++)
    {
        if(head_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::HeadInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::HeadInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::HeadInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-info")
    {
        auto ent_ = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo>();
        ent_->parent = this;
        head_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::HeadInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : head_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Bfd::HeadInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::HeadInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::HeadInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-info")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::HeadInfo()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    destination_address{YType::str, "destination-address"},
    lspbfd_type{YType::enumeration, "lspbfd-type"}
        ,
    current_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>())
    , standby_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>())
    , reoptimized_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>())
{
    current_lspbfd_info->parent = this;
    standby_lspbfd_info->parent = this;
    reoptimized_lspbfd_info->parent = this;

    yang_name = "head-info"; yang_parent_name = "head-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::HeadInfos::HeadInfo::~HeadInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| destination_address.is_set
	|| lspbfd_type.is_set
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_data())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_data())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_data());
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(lspbfd_type.yfilter)
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_operation())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_operation())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_operation());
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/head-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-info";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.yfilter)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::HeadInfos::HeadInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-lspbfd-info")
    {
        if(current_lspbfd_info == nullptr)
        {
            current_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>();
        }
        return current_lspbfd_info;
    }

    if(child_yang_name == "standby-lspbfd-info")
    {
        if(standby_lspbfd_info == nullptr)
        {
            standby_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>();
        }
        return standby_lspbfd_info;
    }

    if(child_yang_name == "reoptimized-lspbfd-info")
    {
        if(reoptimized_lspbfd_info == nullptr)
        {
            reoptimized_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>();
        }
        return reoptimized_lspbfd_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_lspbfd_info != nullptr)
    {
        _children["current-lspbfd-info"] = current_lspbfd_info;
    }

    if(standby_lspbfd_info != nullptr)
    {
        _children["standby-lspbfd-info"] = standby_lspbfd_info;
    }

    if(reoptimized_lspbfd_info != nullptr)
    {
        _children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
    }

    return _children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
        lspbfd_type.value_namespace = name_space;
        lspbfd_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lspbfd-info" || name == "standby-lspbfd-info" || name == "reoptimized-lspbfd-info" || name == "tunnel-name" || name == "tunnel-name-xr" || name == "destination-address" || name == "lspbfd-type")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::CurrentLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "current-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::~CurrentLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::StandbyLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "standby-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::~StandbyLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::ReoptimizedLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "reoptimized-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::~ReoptimizedLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimized-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::Links::Links()
    :
    link(this, {"interface_name"})
{

    yang_name = "links"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Links::~Links()
{
}

bool MplsTe::Bfd::Links::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::Links::has_operation() const
{
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto ent_ = std::make_shared<MplsTe::Bfd::Links::Link>();
        ent_->parent = this;
        link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Bfd::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsTe::Bfd::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"}
        ,
    neighbor(this, {})
{

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Links::Link::~Link()
{
}

bool MplsTe::Bfd::Links::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsTe::Bfd::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsTe::Bfd::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<MplsTe::Bfd::Links::Link::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Bfd::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsTe::Bfd::Links::Link::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_bfd_up{YType::boolean, "is-bfd-up"}
{

    yang_name = "neighbor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Bfd::Links::Link::Neighbor::~Neighbor()
{
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| is_bfd_up.is_set;
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_bfd_up.yfilter);
}

std::string MplsTe::Bfd::Links::Link::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::Link::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Links::Link::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Links::Link::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Links::Link::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Links::Link::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-bfd-up")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfos()
    :
    tail_info(this, {})
{

    yang_name = "tail-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::TailInfos::~TailInfos()
{
}

bool MplsTe::Bfd::TailInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tail_info.len(); index++)
    {
        if(tail_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::TailInfos::has_operation() const
{
    for (std::size_t index=0; index<tail_info.len(); index++)
    {
        if(tail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::TailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::TailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tail-info")
    {
        auto ent_ = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo>();
        ent_->parent = this;
        tail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::TailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::Bfd::TailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::TailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::TailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tail-info")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::TailInfo()
    :
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    ctype{YType::enumeration, "ctype"},
    p2mp_id{YType::uint32, "p2mp-id"},
    signaled_name{YType::str, "signaled-name"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
        ,
    lsp_fec(std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "tail-info"; yang_parent_name = "tail-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::TailInfos::TailInfo::~TailInfo()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| ctype.is_set
	|| p2mp_id.is_set
	|| signaled_name.is_set
	|| bfd_session_state.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::Bfd::TailInfos::TailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::TailInfos::TailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::TailInfos::TailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_fec != nullptr)
    {
        _children["lsp-fec"] = lsp_fec;
    }

    return _children;
}

void MplsTe::Bfd::TailInfos::TailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::TailInfos::TailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "source-address" || name == "tunnel-id" || name == "lsp-id" || name == "destination-address" || name == "extended-tunnel-id" || name == "ctype" || name == "p2mp-id" || name == "signaled-name" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tail-info"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::~LspFec()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/tail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/tail-info/lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::Bfd::Summary::Summary()
    :
    tunnel_count_total{YType::uint16, "tunnel-count-total"},
    tunnel_count_bfd_enabled{YType::uint16, "tunnel-count-bfd-enabled"},
    tunnel_count_session_up{YType::uint16, "tunnel-count-session-up"},
    tunnel_count_sbfd_enabled{YType::uint16, "tunnel-count-sbfd-enabled"},
    tunnel_count_sbfd_session_up{YType::uint16, "tunnel-count-sbfd-session-up"},
    head_lsp_count_session_created{YType::uint16, "head-lsp-count-session-created"},
    head_lsp_count_up{YType::uint16, "head-lsp-count-up"},
    tail_lsp_count_session_created{YType::uint16, "tail-lsp-count-session-created"},
    tail_lsp_count_session_up{YType::uint16, "tail-lsp-count-session-up"},
    head_lsp_count_sbfd_session_created{YType::uint16, "head-lsp-count-sbfd-session-created"},
    head_lsp_count_sbfd_up{YType::uint16, "head-lsp-count-sbfd-up"},
    link_count_bfd_enabled{YType::uint16, "link-count-bfd-enabled"},
    link_count_session_created{YType::uint16, "link-count-session-created"},
    link_count_session_up{YType::uint16, "link-count-session-up"}
{

    yang_name = "summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Summary::~Summary()
{
}

bool MplsTe::Bfd::Summary::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_count_total.is_set
	|| tunnel_count_bfd_enabled.is_set
	|| tunnel_count_session_up.is_set
	|| tunnel_count_sbfd_enabled.is_set
	|| tunnel_count_sbfd_session_up.is_set
	|| head_lsp_count_session_created.is_set
	|| head_lsp_count_up.is_set
	|| tail_lsp_count_session_created.is_set
	|| tail_lsp_count_session_up.is_set
	|| head_lsp_count_sbfd_session_created.is_set
	|| head_lsp_count_sbfd_up.is_set
	|| link_count_bfd_enabled.is_set
	|| link_count_session_created.is_set
	|| link_count_session_up.is_set;
}

bool MplsTe::Bfd::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_count_total.yfilter)
	|| ydk::is_set(tunnel_count_bfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_session_up.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_session_up.yfilter)
	|| ydk::is_set(head_lsp_count_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_up.yfilter)
	|| ydk::is_set(tail_lsp_count_session_created.yfilter)
	|| ydk::is_set(tail_lsp_count_session_up.yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_up.yfilter)
	|| ydk::is_set(link_count_bfd_enabled.yfilter)
	|| ydk::is_set(link_count_session_created.yfilter)
	|| ydk::is_set(link_count_session_up.yfilter);
}

std::string MplsTe::Bfd::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_count_total.is_set || is_set(tunnel_count_total.yfilter)) leaf_name_data.push_back(tunnel_count_total.get_name_leafdata());
    if (tunnel_count_bfd_enabled.is_set || is_set(tunnel_count_bfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_bfd_enabled.get_name_leafdata());
    if (tunnel_count_session_up.is_set || is_set(tunnel_count_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_session_up.get_name_leafdata());
    if (tunnel_count_sbfd_enabled.is_set || is_set(tunnel_count_sbfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_session_up.is_set || is_set(tunnel_count_sbfd_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_session_up.get_name_leafdata());
    if (head_lsp_count_session_created.is_set || is_set(head_lsp_count_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_session_created.get_name_leafdata());
    if (head_lsp_count_up.is_set || is_set(head_lsp_count_up.yfilter)) leaf_name_data.push_back(head_lsp_count_up.get_name_leafdata());
    if (tail_lsp_count_session_created.is_set || is_set(tail_lsp_count_session_created.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_created.get_name_leafdata());
    if (tail_lsp_count_session_up.is_set || is_set(tail_lsp_count_session_up.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_up.get_name_leafdata());
    if (head_lsp_count_sbfd_session_created.is_set || is_set(head_lsp_count_sbfd_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_session_created.get_name_leafdata());
    if (head_lsp_count_sbfd_up.is_set || is_set(head_lsp_count_sbfd_up.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_up.get_name_leafdata());
    if (link_count_bfd_enabled.is_set || is_set(link_count_bfd_enabled.yfilter)) leaf_name_data.push_back(link_count_bfd_enabled.get_name_leafdata());
    if (link_count_session_created.is_set || is_set(link_count_session_created.yfilter)) leaf_name_data.push_back(link_count_session_created.get_name_leafdata());
    if (link_count_session_up.is_set || is_set(link_count_session_up.yfilter)) leaf_name_data.push_back(link_count_session_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total = value;
        tunnel_count_total.value_namespace = name_space;
        tunnel_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled = value;
        tunnel_count_bfd_enabled.value_namespace = name_space;
        tunnel_count_bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up = value;
        tunnel_count_session_up.value_namespace = name_space;
        tunnel_count_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled = value;
        tunnel_count_sbfd_enabled.value_namespace = name_space;
        tunnel_count_sbfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up = value;
        tunnel_count_sbfd_session_up.value_namespace = name_space;
        tunnel_count_sbfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created = value;
        head_lsp_count_session_created.value_namespace = name_space;
        head_lsp_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up = value;
        head_lsp_count_up.value_namespace = name_space;
        head_lsp_count_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created = value;
        tail_lsp_count_session_created.value_namespace = name_space;
        tail_lsp_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up = value;
        tail_lsp_count_session_up.value_namespace = name_space;
        tail_lsp_count_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created = value;
        head_lsp_count_sbfd_session_created.value_namespace = name_space;
        head_lsp_count_sbfd_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up = value;
        head_lsp_count_sbfd_up.value_namespace = name_space;
        head_lsp_count_sbfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-bfd-enabled")
    {
        link_count_bfd_enabled = value;
        link_count_bfd_enabled.value_namespace = name_space;
        link_count_bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-session-created")
    {
        link_count_session_created = value;
        link_count_session_created.value_namespace = name_space;
        link_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-session-up")
    {
        link_count_session_up = value;
        link_count_session_up.value_namespace = name_space;
        link_count_session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up.yfilter = yfilter;
    }
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up.yfilter = yfilter;
    }
    if(value_path == "link-count-bfd-enabled")
    {
        link_count_bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "link-count-session-created")
    {
        link_count_session_created.yfilter = yfilter;
    }
    if(value_path == "link-count-session-up")
    {
        link_count_session_up.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-count-total" || name == "tunnel-count-bfd-enabled" || name == "tunnel-count-session-up" || name == "tunnel-count-sbfd-enabled" || name == "tunnel-count-sbfd-session-up" || name == "head-lsp-count-session-created" || name == "head-lsp-count-up" || name == "tail-lsp-count-session-created" || name == "tail-lsp-count-session-up" || name == "head-lsp-count-sbfd-session-created" || name == "head-lsp-count-sbfd-up" || name == "link-count-bfd-enabled" || name == "link-count-session-created" || name == "link-count-session-up")
        return true;
    return false;
}

MplsTe::Bfd::Counters::Counters()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"}
        ,
    bfd_over_lsp_head_counters(std::make_shared<MplsTe::Bfd::Counters::BfdOverLspHeadCounters>())
    , sbfd_over_lsp_head_counters(std::make_shared<MplsTe::Bfd::Counters::SbfdOverLspHeadCounters>())
    , bfd_over_lsp_tail_counters(std::make_shared<MplsTe::Bfd::Counters::BfdOverLspTailCounters>())
    , bf_do_lm_counters(std::make_shared<MplsTe::Bfd::Counters::BfDoLmCounters>())
{
    bfd_over_lsp_head_counters->parent = this;
    sbfd_over_lsp_head_counters->parent = this;
    bfd_over_lsp_tail_counters->parent = this;
    bf_do_lm_counters->parent = this;

    yang_name = "counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Counters::~Counters()
{
}

bool MplsTe::Bfd::Counters::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_data())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_data())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_data())
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_data());
}

bool MplsTe::Bfd::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_operation())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_operation())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_operation())
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_operation());
}

std::string MplsTe::Bfd::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-over-lsp-head-counters")
    {
        if(bfd_over_lsp_head_counters == nullptr)
        {
            bfd_over_lsp_head_counters = std::make_shared<MplsTe::Bfd::Counters::BfdOverLspHeadCounters>();
        }
        return bfd_over_lsp_head_counters;
    }

    if(child_yang_name == "sbfd-over-lsp-head-counters")
    {
        if(sbfd_over_lsp_head_counters == nullptr)
        {
            sbfd_over_lsp_head_counters = std::make_shared<MplsTe::Bfd::Counters::SbfdOverLspHeadCounters>();
        }
        return sbfd_over_lsp_head_counters;
    }

    if(child_yang_name == "bfd-over-lsp-tail-counters")
    {
        if(bfd_over_lsp_tail_counters == nullptr)
        {
            bfd_over_lsp_tail_counters = std::make_shared<MplsTe::Bfd::Counters::BfdOverLspTailCounters>();
        }
        return bfd_over_lsp_tail_counters;
    }

    if(child_yang_name == "bf-do-lm-counters")
    {
        if(bf_do_lm_counters == nullptr)
        {
            bf_do_lm_counters = std::make_shared<MplsTe::Bfd::Counters::BfDoLmCounters>();
        }
        return bf_do_lm_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd_over_lsp_head_counters != nullptr)
    {
        _children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
    }

    if(sbfd_over_lsp_head_counters != nullptr)
    {
        _children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
    }

    if(bfd_over_lsp_tail_counters != nullptr)
    {
        _children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
    }

    if(bf_do_lm_counters != nullptr)
    {
        _children["bf-do-lm-counters"] = bf_do_lm_counters;
    }

    return _children;
}

void MplsTe::Bfd::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-over-lsp-head-counters" || name == "sbfd-over-lsp-head-counters" || name == "bfd-over-lsp-tail-counters" || name == "bf-do-lm-counters" || name == "last-cleared-timestamp")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfdOverLspHeadCounters::BfdOverLspHeadCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Counters::BfdOverLspHeadCounters::~BfdOverLspHeadCounters()
{
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Counters::BfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::SbfdOverLspHeadCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "sbfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::~SbfdOverLspHeadCounters()
{
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfdOverLspTailCounters::BfdOverLspTailCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bfd-over-lsp-tail-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Counters::BfdOverLspTailCounters::~BfdOverLspTailCounters()
{
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-tail-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Counters::BfdOverLspTailCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfdOverLspTailCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfDoLmCounters::BfDoLmCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bf-do-lm-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Bfd::Counters::BfDoLmCounters::~BfDoLmCounters()
{
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfDoLmCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfDoLmCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf-do-lm-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfDoLmCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Bfd::Counters::BfDoLmCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Bfd::Counters::BfDoLmCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Bfd::Counters::BfDoLmCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfDoLmCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Nsr::Nsr()
    :
    status(std::make_shared<MplsTe::Nsr::Status>())
    , detail(std::make_shared<MplsTe::Nsr::Detail>())
{
    status->parent = this;
    detail->parent = this;

    yang_name = "nsr"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::~Nsr()
{
}

bool MplsTe::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MplsTe::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTe::Nsr::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTe::Nsr::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::get_children() const
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

void MplsTe::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "detail")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync_status_information != nullptr)
    {
        _children["sync-status-information"] = sync_status_information;
    }

    return _children;
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
    slave_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::get_children() const
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
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto ent_ = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        ent_->parent = this;
        vif_pending.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto ent_ = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        ent_->parent = this;
        s2l_pending.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
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

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
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
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    return _children;
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
    , previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
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

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync_status_information != nullptr)
    {
        _children["sync-status-information"] = sync_status_information;
    }

    return _children;
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
    slave_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::get_children() const
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
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto ent_ = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        ent_->parent = this;
        vif_pending.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto ent_ = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        ent_->parent = this;
        s2l_pending.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
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
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
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

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
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
    if (is_presence_container) return true;
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
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    return _children;
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
    , previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
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
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
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

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::AutoTunnelServices()
    :
    sr_policy_entries(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries>())
{
    sr_policy_entries->parent = this;

    yang_name = "auto-tunnel-services"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnelServices::~AutoTunnelServices()
{
}

bool MplsTe::AutoTunnelServices::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy_entries !=  nullptr && sr_policy_entries->has_data());
}

bool MplsTe::AutoTunnelServices::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy_entries !=  nullptr && sr_policy_entries->has_operation());
}

std::string MplsTe::AutoTunnelServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entries")
    {
        if(sr_policy_entries == nullptr)
        {
            sr_policy_entries = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries>();
        }
        return sr_policy_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy_entries != nullptr)
    {
        _children["sr-policy-entries"] = sr_policy_entries;
    }

    return _children;
}

void MplsTe::AutoTunnelServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnelServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnelServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entries")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntries()
    :
    sr_policy_entry(this, {"client_id", "color", "end_point", "distinguisher"})
{

    yang_name = "sr-policy-entries"; yang_parent_name = "auto-tunnel-services"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::~SrPolicyEntries()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_policy_entry.len(); index++)
    {
        if(sr_policy_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_operation() const
{
    for (std::size_t index=0; index<sr_policy_entry.len(); index++)
    {
        if(sr_policy_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel-services/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entry")
    {
        auto ent_ = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry>();
        ent_->parent = this;
        sr_policy_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_policy_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entry")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::SrPolicyEntry()
    :
    client_id{YType::uint32, "client-id"},
    color{YType::uint32, "color"},
    end_point{YType::str, "end-point"},
    distinguisher{YType::uint32, "distinguisher"},
    sr_policy_id{YType::uint32, "sr-policy-id"},
    policy_active{YType::boolean, "policy-active"},
    client_id_xr{YType::uint32, "client-id-xr"},
    client_name{YType::str, "client-name"},
    color_xr{YType::uint32, "color-xr"},
    distinguisher_xr{YType::uint32, "distinguisher-xr"},
    ipv6_caps{YType::boolean, "ipv6-caps"},
    binding_sid_context_id{YType::uint32, "binding-sid-context-id"},
    requested_binding_sid{YType::uint32, "requested-binding-sid"},
    binding_sid_request_pending{YType::boolean, "binding-sid-request-pending"},
    allocated_binding_sid{YType::uint32, "allocated-binding-sid"},
    rewrite_request_pending{YType::boolean, "rewrite-request-pending"},
    rewrite_done{YType::boolean, "rewrite-done"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    notify_time{YType::uint32, "notify-time"},
    notify_state_is_active{YType::boolean, "notify-state-is-active"},
    creation_time{YType::uint64, "creation-time"}
        ,
    end_point_xr(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>())
    , explicit_path(this, {})
{
    end_point_xr->parent = this;

    yang_name = "sr-policy-entry"; yang_parent_name = "sr-policy-entries"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::~SrPolicyEntry()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return client_id.is_set
	|| color.is_set
	|| end_point.is_set
	|| distinguisher.is_set
	|| sr_policy_id.is_set
	|| policy_active.is_set
	|| client_id_xr.is_set
	|| client_name.is_set
	|| color_xr.is_set
	|| distinguisher_xr.is_set
	|| ipv6_caps.is_set
	|| binding_sid_context_id.is_set
	|| requested_binding_sid.is_set
	|| binding_sid_request_pending.is_set
	|| allocated_binding_sid.is_set
	|| rewrite_request_pending.is_set
	|| rewrite_done.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| notify_time.is_set
	|| notify_state_is_active.is_set
	|| creation_time.is_set
	|| (end_point_xr !=  nullptr && end_point_xr->has_data());
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(end_point.yfilter)
	|| ydk::is_set(distinguisher.yfilter)
	|| ydk::is_set(sr_policy_id.yfilter)
	|| ydk::is_set(policy_active.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(color_xr.yfilter)
	|| ydk::is_set(distinguisher_xr.yfilter)
	|| ydk::is_set(ipv6_caps.yfilter)
	|| ydk::is_set(binding_sid_context_id.yfilter)
	|| ydk::is_set(requested_binding_sid.yfilter)
	|| ydk::is_set(binding_sid_request_pending.yfilter)
	|| ydk::is_set(allocated_binding_sid.yfilter)
	|| ydk::is_set(rewrite_request_pending.yfilter)
	|| ydk::is_set(rewrite_done.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(notify_time.yfilter)
	|| ydk::is_set(notify_state_is_active.yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| (end_point_xr !=  nullptr && end_point_xr->has_operation());
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel-services/sr-policy-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entry";
    ADD_KEY_TOKEN(client_id, "client-id");
    ADD_KEY_TOKEN(color, "color");
    ADD_KEY_TOKEN(end_point, "end-point");
    ADD_KEY_TOKEN(distinguisher, "distinguisher");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (end_point.is_set || is_set(end_point.yfilter)) leaf_name_data.push_back(end_point.get_name_leafdata());
    if (distinguisher.is_set || is_set(distinguisher.yfilter)) leaf_name_data.push_back(distinguisher.get_name_leafdata());
    if (sr_policy_id.is_set || is_set(sr_policy_id.yfilter)) leaf_name_data.push_back(sr_policy_id.get_name_leafdata());
    if (policy_active.is_set || is_set(policy_active.yfilter)) leaf_name_data.push_back(policy_active.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (color_xr.is_set || is_set(color_xr.yfilter)) leaf_name_data.push_back(color_xr.get_name_leafdata());
    if (distinguisher_xr.is_set || is_set(distinguisher_xr.yfilter)) leaf_name_data.push_back(distinguisher_xr.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (binding_sid_context_id.is_set || is_set(binding_sid_context_id.yfilter)) leaf_name_data.push_back(binding_sid_context_id.get_name_leafdata());
    if (requested_binding_sid.is_set || is_set(requested_binding_sid.yfilter)) leaf_name_data.push_back(requested_binding_sid.get_name_leafdata());
    if (binding_sid_request_pending.is_set || is_set(binding_sid_request_pending.yfilter)) leaf_name_data.push_back(binding_sid_request_pending.get_name_leafdata());
    if (allocated_binding_sid.is_set || is_set(allocated_binding_sid.yfilter)) leaf_name_data.push_back(allocated_binding_sid.get_name_leafdata());
    if (rewrite_request_pending.is_set || is_set(rewrite_request_pending.yfilter)) leaf_name_data.push_back(rewrite_request_pending.get_name_leafdata());
    if (rewrite_done.is_set || is_set(rewrite_done.yfilter)) leaf_name_data.push_back(rewrite_done.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (notify_time.is_set || is_set(notify_time.yfilter)) leaf_name_data.push_back(notify_time.get_name_leafdata());
    if (notify_state_is_active.is_set || is_set(notify_state_is_active.yfilter)) leaf_name_data.push_back(notify_state_is_active.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "end-point-xr")
    {
        if(end_point_xr == nullptr)
        {
            end_point_xr = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>();
        }
        return end_point_xr;
    }

    if(child_yang_name == "explicit-path")
    {
        auto ent_ = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath>();
        ent_->parent = this;
        explicit_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(end_point_xr != nullptr)
    {
        _children["end-point-xr"] = end_point_xr;
    }

    count_ = 0;
    for (auto ent_ : explicit_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point")
    {
        end_point = value;
        end_point.value_namespace = name_space;
        end_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distinguisher")
    {
        distinguisher = value;
        distinguisher.value_namespace = name_space;
        distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id = value;
        sr_policy_id.value_namespace = name_space;
        sr_policy_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-active")
    {
        policy_active = value;
        policy_active.value_namespace = name_space;
        policy_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color-xr")
    {
        color_xr = value;
        color_xr.value_namespace = name_space;
        color_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr = value;
        distinguisher_xr.value_namespace = name_space;
        distinguisher_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
        ipv6_caps.value_namespace = name_space;
        ipv6_caps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id = value;
        binding_sid_context_id.value_namespace = name_space;
        binding_sid_context_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid = value;
        requested_binding_sid.value_namespace = name_space;
        requested_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending = value;
        binding_sid_request_pending.value_namespace = name_space;
        binding_sid_request_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid = value;
        allocated_binding_sid.value_namespace = name_space;
        allocated_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending = value;
        rewrite_request_pending.value_namespace = name_space;
        rewrite_request_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done = value;
        rewrite_done.value_namespace = name_space;
        rewrite_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
        is_synced.value_namespace = name_space;
        is_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-time")
    {
        notify_time = value;
        notify_time.value_namespace = name_space;
        notify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active = value;
        notify_state_is_active.value_namespace = name_space;
        notify_state_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "end-point")
    {
        end_point.yfilter = yfilter;
    }
    if(value_path == "distinguisher")
    {
        distinguisher.yfilter = yfilter;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id.yfilter = yfilter;
    }
    if(value_path == "policy-active")
    {
        policy_active.yfilter = yfilter;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "color-xr")
    {
        color_xr.yfilter = yfilter;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id.yfilter = yfilter;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid.yfilter = yfilter;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending.yfilter = yfilter;
    }
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid.yfilter = yfilter;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending.yfilter = yfilter;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "notify-time")
    {
        notify_time.yfilter = yfilter;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-point-xr" || name == "explicit-path" || name == "client-id" || name == "color" || name == "end-point" || name == "distinguisher" || name == "sr-policy-id" || name == "policy-active" || name == "client-id-xr" || name == "client-name" || name == "color-xr" || name == "distinguisher-xr" || name == "ipv6-caps" || name == "binding-sid-context-id" || name == "requested-binding-sid" || name == "binding-sid-request-pending" || name == "allocated-binding-sid" || name == "rewrite-request-pending" || name == "rewrite-done" || name == "is-stale" || name == "is-synced" || name == "notify-time" || name == "notify-state-is-active" || name == "creation-time")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::EndPointXr()
    :
    address_family_type{YType::enumeration, "address-family-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "end-point-xr"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::~EndPointXr()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_data() const
{
    if (is_presence_container) return true;
    return address_family_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-point-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_type.is_set || is_set(address_family_type.yfilter)) leaf_name_data.push_back(address_family_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-type")
    {
        address_family_type = value;
        address_family_type.value_namespace = name_space;
        address_family_type.value_namespace_prefix = name_space_prefix;
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

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-type")
    {
        address_family_type.yfilter = yfilter;
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

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::ExplicitPath()
    :
    context_id{YType::uint32, "context-id"},
    path_weight{YType::uint32, "path-weight"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    programmed_in_fib{YType::boolean, "programmed-in-fib"}
        ,
    tunnel_info(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>())
    , hops(this, {})
{
    tunnel_info->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::~ExplicitPath()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return context_id.is_set
	|| path_weight.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| programmed_in_fib.is_set
	|| (tunnel_info !=  nullptr && tunnel_info->has_data());
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context_id.yfilter)
	|| ydk::is_set(path_weight.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(programmed_in_fib.yfilter)
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_id.is_set || is_set(context_id.yfilter)) leaf_name_data.push_back(context_id.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.yfilter)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (programmed_in_fib.is_set || is_set(programmed_in_fib.yfilter)) leaf_name_data.push_back(programmed_in_fib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>();
        }
        return tunnel_info;
    }

    if(child_yang_name == "hops")
    {
        auto ent_ = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops>();
        ent_->parent = this;
        hops.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_info != nullptr)
    {
        _children["tunnel-info"] = tunnel_info;
    }

    count_ = 0;
    for (auto ent_ : hops.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-id")
    {
        context_id = value;
        context_id.value_namespace = name_space;
        context_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
        path_weight.value_namespace = name_space;
        path_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
        is_synced.value_namespace = name_space;
        is_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib = value;
        programmed_in_fib.value_namespace = name_space;
        programmed_in_fib.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-id")
    {
        context_id.yfilter = yfilter;
    }
    if(value_path == "path-weight")
    {
        path_weight.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info" || name == "hops" || name == "context-id" || name == "path-weight" || name == "is-stale" || name == "is-synced" || name == "programmed-in-fib")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::TunnelInfo()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_up{YType::boolean, "tunnel-up"},
    ipv6_caps{YType::boolean, "ipv6-caps"}
{

    yang_name = "tunnel-info"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::~TunnelInfo()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| tunnel_up.is_set
	|| ipv6_caps.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_up.yfilter)
	|| ydk::is_set(ipv6_caps.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_up.is_set || is_set(tunnel_up.yfilter)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up = value;
        tunnel_up.value_namespace = name_space;
        tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
        ipv6_caps.value_namespace = name_space;
        ipv6_caps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "tunnel-up" || name == "ipv6-caps")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::Hops()
    :
    hop_type{YType::enumeration, "hop-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "hops"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::~Hops()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_data() const
{
    if (is_presence_container) return true;
    return hop_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-type" || name == "ipv4-address" || name == "mpls-label")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMap()
    :
    affinity_map_array(this, {})
{

    yang_name = "affinity-map"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AffinityMap::~AffinityMap()
{
}

bool MplsTe::AffinityMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_map_array.len(); index++)
    {
        if(affinity_map_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_map_array.len(); index++)
    {
        if(affinity_map_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AffinityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map-array")
    {
        auto ent_ = std::make_shared<MplsTe::AffinityMap::AffinityMapArray>();
        ent_->parent = this;
        affinity_map_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_map_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map-array")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityMapArray()
    :
    affinity_name{YType::str, "affinity-name"},
    affinity_value{YType::uint32, "affinity-value"},
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_table_id{YType::enumeration, "affinity-table-id"}
        ,
    affinity_extended_value(this, {})
{

    yang_name = "affinity-map-array"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AffinityMap::AffinityMapArray::~AffinityMapArray()
{
}

bool MplsTe::AffinityMap::AffinityMapArray::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_extended_value.len(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_name.is_set
	|| affinity_value.is_set
	|| affinity_bit_position.is_set
	|| affinity_table_id.is_set;
}

bool MplsTe::AffinityMap::AffinityMapArray::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.len(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_value.yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter);
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/affinity-map/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::AffinityMapArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());
    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::AffinityMap::AffinityMapArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue>();
        ent_->parent = this;
        affinity_extended_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::AffinityMap::AffinityMapArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::AffinityMap::AffinityMapArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AffinityMap::AffinityMapArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
}

bool MplsTe::AffinityMap::AffinityMapArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-name" || name == "affinity-value" || name == "affinity-bit-position" || name == "affinity-table-id")
        return true;
    return false;
}


}
}

