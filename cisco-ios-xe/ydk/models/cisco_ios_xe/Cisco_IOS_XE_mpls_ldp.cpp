
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mpls_ldp.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_ldp {

NsrSyncNackRsn::NsrSyncNackRsn()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn")
{

}

NsrSyncNackRsn::~NsrSyncNackRsn()
{
}

NsrPeerSyncErr::NsrPeerSyncErr()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err")
{

}

NsrPeerSyncErr::~NsrPeerSyncErr()
{
}

IcpmType::IcpmType()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:icpm-type")
{

}

IcpmType::~IcpmType()
{
}

IccpType::IccpType()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:iccp-type")
{

}

IccpType::~IccpType()
{
}

NsrPeerSyncState::NsrPeerSyncState()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-state")
{

}

NsrPeerSyncState::~NsrPeerSyncState()
{
}

NsrStatus::NsrStatus()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-status")
{

}

NsrStatus::~NsrStatus()
{
}

DownNbrReason::DownNbrReason()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:down-nbr-reason")
{

}

DownNbrReason::~DownNbrReason()
{
}

RoutePathLblOwner::RoutePathLblOwner()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner")
{

}

RoutePathLblOwner::~RoutePathLblOwner()
{
}

LabelType::LabelType()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:label-type")
{

}

LabelType::~LabelType()
{
}

RoutePathType::RoutePathType()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-type")
{

}

RoutePathType::~RoutePathType()
{
}

IgpSyncDownReason::IgpSyncDownReason()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason")
{

}

IgpSyncDownReason::~IgpSyncDownReason()
{
}

MplsLdp::MplsLdp()
    :
    mpls_ldp_state(std::make_shared<MplsLdp::MplsLdpState>())
	,mpls_ldp_config(std::make_shared<MplsLdp::MplsLdpConfig>())
{
    mpls_ldp_state->parent = this;
    mpls_ldp_config->parent = this;

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    return (mpls_ldp_state !=  nullptr && mpls_ldp_state->has_data())
	|| (mpls_ldp_config !=  nullptr && mpls_ldp_config->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_ldp_state !=  nullptr && mpls_ldp_state->has_operation())
	|| (mpls_ldp_config !=  nullptr && mpls_ldp_config->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp-state")
    {
        if(mpls_ldp_state == nullptr)
        {
            mpls_ldp_state = std::make_shared<MplsLdp::MplsLdpState>();
        }
        return mpls_ldp_state;
    }

    if(child_yang_name == "mpls-ldp-config")
    {
        if(mpls_ldp_config == nullptr)
        {
            mpls_ldp_config = std::make_shared<MplsLdp::MplsLdpConfig>();
        }
        return mpls_ldp_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp_state != nullptr)
    {
        children["mpls-ldp-state"] = mpls_ldp_state;
    }

    if(mpls_ldp_config != nullptr)
    {
        children["mpls-ldp-config"] = mpls_ldp_config;
    }

    return children;
}

void MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLdp::clone_ptr() const
{
    return std::make_shared<MplsLdp>();
}

std::string MplsLdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsLdp::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsLdp::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLdp::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp-state" || name == "mpls-ldp-config")
        return true;
    return false;
}

MplsLdp::MplsLdpState::MplsLdpState()
    :
    oper_summary(std::make_shared<MplsLdp::MplsLdpState::OperSummary>())
	,forwarding_summary(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary>())
	,bindings_summary(std::make_shared<MplsLdp::MplsLdpState::BindingsSummary>())
	,nsr_summary_all(std::make_shared<MplsLdp::MplsLdpState::NsrSummaryAll>())
	,icpm_summary_all(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll>())
	,parameters(std::make_shared<MplsLdp::MplsLdpState::Parameters>())
	,capabilities(std::make_shared<MplsLdp::MplsLdpState::Capabilities>())
	,backoff_parameters(std::make_shared<MplsLdp::MplsLdpState::BackoffParameters>())
	,graceful_restart(std::make_shared<MplsLdp::MplsLdpState::GracefulRestart>())
	,vrfs(std::make_shared<MplsLdp::MplsLdpState::Vrfs>())
	,discovery(std::make_shared<MplsLdp::MplsLdpState::Discovery>())
	,forwarding(std::make_shared<MplsLdp::MplsLdpState::Forwarding>())
	,bindings(std::make_shared<MplsLdp::MplsLdpState::Bindings>())
	,neighbors(std::make_shared<MplsLdp::MplsLdpState::Neighbors>())
	,label_ranges(std::make_shared<MplsLdp::MplsLdpState::LabelRanges>())
{
    oper_summary->parent = this;
    forwarding_summary->parent = this;
    bindings_summary->parent = this;
    nsr_summary_all->parent = this;
    icpm_summary_all->parent = this;
    parameters->parent = this;
    capabilities->parent = this;
    backoff_parameters->parent = this;
    graceful_restart->parent = this;
    vrfs->parent = this;
    discovery->parent = this;
    forwarding->parent = this;
    bindings->parent = this;
    neighbors->parent = this;
    label_ranges->parent = this;

    yang_name = "mpls-ldp-state"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::~MplsLdpState()
{
}

bool MplsLdp::MplsLdpState::has_data() const
{
    return (oper_summary !=  nullptr && oper_summary->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_data())
	|| (icpm_summary_all !=  nullptr && icpm_summary_all->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data())
	|| (bindings !=  nullptr && bindings->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (label_ranges !=  nullptr && label_ranges->has_data());
}

bool MplsLdp::MplsLdpState::has_operation() const
{
    return is_set(yfilter)
	|| (oper_summary !=  nullptr && oper_summary->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_operation())
	|| (icpm_summary_all !=  nullptr && icpm_summary_all->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation())
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (label_ranges !=  nullptr && label_ranges->has_operation());
}

std::string MplsLdp::MplsLdpState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper-summary")
    {
        if(oper_summary == nullptr)
        {
            oper_summary = std::make_shared<MplsLdp::MplsLdpState::OperSummary>();
        }
        return oper_summary;
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary == nullptr)
        {
            bindings_summary = std::make_shared<MplsLdp::MplsLdpState::BindingsSummary>();
        }
        return bindings_summary;
    }

    if(child_yang_name == "nsr-summary-all")
    {
        if(nsr_summary_all == nullptr)
        {
            nsr_summary_all = std::make_shared<MplsLdp::MplsLdpState::NsrSummaryAll>();
        }
        return nsr_summary_all;
    }

    if(child_yang_name == "icpm-summary-all")
    {
        if(icpm_summary_all == nullptr)
        {
            icpm_summary_all = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll>();
        }
        return icpm_summary_all;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<MplsLdp::MplsLdpState::Parameters>();
        }
        return parameters;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::MplsLdpState::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters == nullptr)
        {
            backoff_parameters = std::make_shared<MplsLdp::MplsLdpState::BackoffParameters>();
        }
        return backoff_parameters;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::MplsLdpState::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::MplsLdpState::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::MplsLdpState::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<MplsLdp::MplsLdpState::Forwarding>();
        }
        return forwarding;
    }

    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<MplsLdp::MplsLdpState::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLdp::MplsLdpState::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "label-ranges")
    {
        if(label_ranges == nullptr)
        {
            label_ranges = std::make_shared<MplsLdp::MplsLdpState::LabelRanges>();
        }
        return label_ranges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oper_summary != nullptr)
    {
        children["oper-summary"] = oper_summary;
    }

    if(forwarding_summary != nullptr)
    {
        children["forwarding-summary"] = forwarding_summary;
    }

    if(bindings_summary != nullptr)
    {
        children["bindings-summary"] = bindings_summary;
    }

    if(nsr_summary_all != nullptr)
    {
        children["nsr-summary-all"] = nsr_summary_all;
    }

    if(icpm_summary_all != nullptr)
    {
        children["icpm-summary-all"] = icpm_summary_all;
    }

    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(backoff_parameters != nullptr)
    {
        children["backoff-parameters"] = backoff_parameters;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    if(bindings != nullptr)
    {
        children["bindings"] = bindings;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(label_ranges != nullptr)
    {
        children["label-ranges"] = label_ranges;
    }

    return children;
}

void MplsLdp::MplsLdpState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper-summary" || name == "forwarding-summary" || name == "bindings-summary" || name == "nsr-summary-all" || name == "icpm-summary-all" || name == "parameters" || name == "capabilities" || name == "backoff-parameters" || name == "graceful-restart" || name == "vrfs" || name == "discovery" || name == "forwarding" || name == "bindings" || name == "neighbors" || name == "label-ranges")
        return true;
    return false;
}

MplsLdp::MplsLdpState::OperSummary::OperSummary()
    :
    number_of_vrf{YType::uint32, "number-of-vrf"},
    number_of_vrf_oper{YType::uint32, "number-of-vrf-oper"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"},
    number_of_fwd_ref_interfaces{YType::uint32, "number-of-fwd-ref-interfaces"},
    number_of_autocfg_interfaces{YType::uint32, "number-of-autocfg-interfaces"},
    no_of_ipv4_rib_tbl{YType::uint32, "no-of-ipv4-rib-tbl"},
    no_of_ipv4_rib_tbl_reg{YType::uint32, "no-of-ipv4-rib-tbl-reg"}
    	,
    common(std::make_shared<MplsLdp::MplsLdpState::OperSummary::Common>())
{
    common->parent = this;

    yang_name = "oper-summary"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::OperSummary::~OperSummary()
{
}

bool MplsLdp::MplsLdpState::OperSummary::has_data() const
{
    return number_of_vrf.is_set
	|| number_of_vrf_oper.is_set
	|| number_of_interfaces.is_set
	|| number_of_fwd_ref_interfaces.is_set
	|| number_of_autocfg_interfaces.is_set
	|| no_of_ipv4_rib_tbl.is_set
	|| no_of_ipv4_rib_tbl_reg.is_set
	|| (common !=  nullptr && common->has_data());
}

bool MplsLdp::MplsLdpState::OperSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_vrf.yfilter)
	|| ydk::is_set(number_of_vrf_oper.yfilter)
	|| ydk::is_set(number_of_interfaces.yfilter)
	|| ydk::is_set(number_of_fwd_ref_interfaces.yfilter)
	|| ydk::is_set(number_of_autocfg_interfaces.yfilter)
	|| ydk::is_set(no_of_ipv4_rib_tbl.yfilter)
	|| ydk::is_set(no_of_ipv4_rib_tbl_reg.yfilter)
	|| (common !=  nullptr && common->has_operation());
}

std::string MplsLdp::MplsLdpState::OperSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::OperSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::OperSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_vrf.is_set || is_set(number_of_vrf.yfilter)) leaf_name_data.push_back(number_of_vrf.get_name_leafdata());
    if (number_of_vrf_oper.is_set || is_set(number_of_vrf_oper.yfilter)) leaf_name_data.push_back(number_of_vrf_oper.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.yfilter)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());
    if (number_of_fwd_ref_interfaces.is_set || is_set(number_of_fwd_ref_interfaces.yfilter)) leaf_name_data.push_back(number_of_fwd_ref_interfaces.get_name_leafdata());
    if (number_of_autocfg_interfaces.is_set || is_set(number_of_autocfg_interfaces.yfilter)) leaf_name_data.push_back(number_of_autocfg_interfaces.get_name_leafdata());
    if (no_of_ipv4_rib_tbl.is_set || is_set(no_of_ipv4_rib_tbl.yfilter)) leaf_name_data.push_back(no_of_ipv4_rib_tbl.get_name_leafdata());
    if (no_of_ipv4_rib_tbl_reg.is_set || is_set(no_of_ipv4_rib_tbl_reg.yfilter)) leaf_name_data.push_back(no_of_ipv4_rib_tbl_reg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::OperSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<MplsLdp::MplsLdpState::OperSummary::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::OperSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void MplsLdp::MplsLdpState::OperSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-vrf")
    {
        number_of_vrf = value;
        number_of_vrf.value_namespace = name_space;
        number_of_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper = value;
        number_of_vrf_oper.value_namespace = name_space;
        number_of_vrf_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
        number_of_interfaces.value_namespace = name_space;
        number_of_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces = value;
        number_of_fwd_ref_interfaces.value_namespace = name_space;
        number_of_fwd_ref_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces = value;
        number_of_autocfg_interfaces.value_namespace = name_space;
        number_of_autocfg_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-rib-tbl")
    {
        no_of_ipv4_rib_tbl = value;
        no_of_ipv4_rib_tbl.value_namespace = name_space;
        no_of_ipv4_rib_tbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-rib-tbl-reg")
    {
        no_of_ipv4_rib_tbl_reg = value;
        no_of_ipv4_rib_tbl_reg.value_namespace = name_space;
        no_of_ipv4_rib_tbl_reg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::OperSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-vrf")
    {
        number_of_vrf.yfilter = yfilter;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper.yfilter = yfilter;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-rib-tbl")
    {
        no_of_ipv4_rib_tbl.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-rib-tbl-reg")
    {
        no_of_ipv4_rib_tbl_reg.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::OperSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "number-of-vrf" || name == "number-of-vrf-oper" || name == "number-of-interfaces" || name == "number-of-fwd-ref-interfaces" || name == "number-of-autocfg-interfaces" || name == "no-of-ipv4-rib-tbl" || name == "no-of-ipv4-rib-tbl-reg")
        return true;
    return false;
}

MplsLdp::MplsLdpState::OperSummary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    numberof_ipv4_hello_adj{YType::uint32, "numberof-ipv4-hello-adj"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"}
{

    yang_name = "common"; yang_parent_name = "oper-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::OperSummary::Common::~Common()
{
}

bool MplsLdp::MplsLdpState::OperSummary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| numberof_ipv4_hello_adj.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_ipv4ldp_interfaces.is_set;
}

bool MplsLdp::MplsLdpState::OperSummary::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(numberof_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter);
}

std::string MplsLdp::MplsLdpState::OperSummary::Common::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/oper-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::OperSummary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::OperSummary::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (numberof_ipv4_hello_adj.is_set || is_set(numberof_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(numberof_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::OperSummary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::OperSummary::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::OperSummary::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj = value;
        numberof_ipv4_hello_adj.value_namespace = name_space;
        numberof_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::OperSummary::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::OperSummary::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-downstream-on-demand-neighbors" || name == "numberof-ipv4-hello-adj" || name == "number-of-ipv4-routes" || name == "number-of-ipv4-local-addresses" || name == "number-of-ldp-interfaces" || name == "number-of-ipv4ldp-interfaces")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::ForwardingSummary()
    :
    intfs_fwd_count{YType::uint16, "intfs-fwd-count"},
    local_lbls{YType::uint16, "local-lbls"}
    	,
    pfxs(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs>())
	,nhs(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Nhs>())
{
    pfxs->parent = this;
    nhs->parent = this;

    yang_name = "forwarding-summary"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::has_data() const
{
    return intfs_fwd_count.is_set
	|| local_lbls.is_set
	|| (pfxs !=  nullptr && pfxs->has_data())
	|| (nhs !=  nullptr && nhs->has_data());
}

bool MplsLdp::MplsLdpState::ForwardingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intfs_fwd_count.yfilter)
	|| ydk::is_set(local_lbls.yfilter)
	|| (pfxs !=  nullptr && pfxs->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation());
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfs_fwd_count.is_set || is_set(intfs_fwd_count.yfilter)) leaf_name_data.push_back(intfs_fwd_count.get_name_leafdata());
    if (local_lbls.is_set || is_set(local_lbls.yfilter)) leaf_name_data.push_back(local_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs>();
        }
        return pfxs;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Nhs>();
        }
        return nhs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfxs != nullptr)
    {
        children["pfxs"] = pfxs;
    }

    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count = value;
        intfs_fwd_count.value_namespace = name_space;
        intfs_fwd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lbls")
    {
        local_lbls = value;
        local_lbls.value_namespace = name_space;
        local_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count.yfilter = yfilter;
    }
    if(value_path == "local-lbls")
    {
        local_lbls.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxs" || name == "nhs" || name == "intfs-fwd-count" || name == "local-lbls")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::Pfxs()
    :
    total_pfxs{YType::uint16, "total-pfxs"},
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup>())
{
    labeled_pfxs_aggr->parent = this;
    labeled_pfxs_primary->parent = this;
    labeled_pfxs_backup->parent = this;

    yang_name = "pfxs"; yang_parent_name = "forwarding-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::~Pfxs()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::has_data() const
{
    return total_pfxs.is_set
	|| ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data());
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_pfxs.yfilter)
	|| ydk::is_set(ecmp_pfxs.yfilter)
	|| ydk::is_set(protected_pfxs.yfilter)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation());
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_pfxs.is_set || is_set(total_pfxs.yfilter)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());
    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.yfilter)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.yfilter)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr == nullptr)
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr>();
        }
        return labeled_pfxs_aggr;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labeled_pfxs_aggr != nullptr)
    {
        children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    if(labeled_pfxs_backup != nullptr)
    {
        children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
        total_pfxs.value_namespace = name_space;
        total_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
        ecmp_pfxs.value_namespace = name_space;
        ecmp_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
        protected_pfxs.value_namespace = name_space;
        protected_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs.yfilter = yfilter;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs.yfilter = yfilter;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs-aggr" || name == "labeled-pfxs-primary" || name == "labeled-pfxs-backup" || name == "total-pfxs" || name == "ecmp-pfxs" || name == "protected-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Nhs::Nhs()
    :
    total_paths{YType::uint32, "total-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    backup_paths{YType::uint32, "backup-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"}
{

    yang_name = "nhs"; yang_parent_name = "forwarding-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::ForwardingSummary::Nhs::~Nhs()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Nhs::has_data() const
{
    return total_paths.is_set
	|| protected_paths.is_set
	|| backup_paths.is_set
	|| remote_backup_paths.is_set
	|| labeled_paths.is_set
	|| labeled_backup_paths.is_set;
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Nhs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(protected_paths.yfilter)
	|| ydk::is_set(backup_paths.yfilter)
	|| ydk::is_set(remote_backup_paths.yfilter)
	|| ydk::is_set(labeled_paths.yfilter)
	|| ydk::is_set(labeled_backup_paths.yfilter);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.yfilter)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (backup_paths.is_set || is_set(backup_paths.yfilter)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.yfilter)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.yfilter)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.yfilter)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
        protected_paths.value_namespace = name_space;
        protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-paths")
    {
        backup_paths = value;
        backup_paths.value_namespace = name_space;
        backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
        remote_backup_paths.value_namespace = name_space;
        remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
        labeled_paths.value_namespace = name_space;
        labeled_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
        labeled_backup_paths.value_namespace = name_space;
        labeled_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::ForwardingSummary::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "protected-paths")
    {
        protected_paths.yfilter = yfilter;
    }
    if(value_path == "backup-paths")
    {
        backup_paths.yfilter = yfilter;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "protected-paths" || name == "backup-paths" || name == "remote-backup-paths" || name == "labeled-paths" || name == "labeled-backup-paths")
        return true;
    return false;
}

MplsLdp::MplsLdpState::BindingsSummary::BindingsSummary()
    :
    binding_total{YType::uint32, "binding-total"},
    binding_no_route{YType::uint32, "binding-no-route"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local{YType::uint32, "binding-local"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    binding_remote{YType::uint32, "binding-remote"}
{

    yang_name = "bindings-summary"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::MplsLdpState::BindingsSummary::has_data() const
{
    return binding_total.is_set
	|| binding_no_route.is_set
	|| binding_local_no_route.is_set
	|| binding_local.is_set
	|| binding_local_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_non_null.is_set
	|| binding_local_oor.is_set
	|| lowest_allocated_label.is_set
	|| highest_allocated_label.is_set
	|| binding_remote.is_set;
}

bool MplsLdp::MplsLdpState::BindingsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(binding_no_route.yfilter)
	|| ydk::is_set(binding_local_no_route.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_local_null.yfilter)
	|| ydk::is_set(binding_local_implicit_null.yfilter)
	|| ydk::is_set(binding_local_explicit_null.yfilter)
	|| ydk::is_set(binding_local_non_null.yfilter)
	|| ydk::is_set(binding_local_oor.yfilter)
	|| ydk::is_set(lowest_allocated_label.yfilter)
	|| ydk::is_set(highest_allocated_label.yfilter)
	|| ydk::is_set(binding_remote.yfilter);
}

std::string MplsLdp::MplsLdpState::BindingsSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::BindingsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.yfilter)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.yfilter)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.yfilter)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.yfilter)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.yfilter)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.yfilter)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.yfilter)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.yfilter)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.yfilter)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::BindingsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::BindingsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
        binding_no_route.value_namespace = name_space;
        binding_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
        binding_local_no_route.value_namespace = name_space;
        binding_local_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
        binding_local_null.value_namespace = name_space;
        binding_local_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
        binding_local_implicit_null.value_namespace = name_space;
        binding_local_implicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
        binding_local_explicit_null.value_namespace = name_space;
        binding_local_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
        binding_local_non_null.value_namespace = name_space;
        binding_local_non_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
        binding_local_oor.value_namespace = name_space;
        binding_local_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
        lowest_allocated_label.value_namespace = name_space;
        lowest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
        highest_allocated_label.value_namespace = name_space;
        highest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::BindingsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor.yfilter = yfilter;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::BindingsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-total" || name == "binding-no-route" || name == "binding-local-no-route" || name == "binding-local" || name == "binding-local-null" || name == "binding-local-implicit-null" || name == "binding-local-explicit-null" || name == "binding-local-non-null" || name == "binding-local-oor" || name == "lowest-allocated-label" || name == "highest-allocated-label" || name == "binding-remote")
        return true;
    return false;
}

MplsLdp::MplsLdpState::NsrSummaryAll::NsrSummaryAll()
    :
    nsr_sum_in_label_reqs_created{YType::uint32, "nsr-sum-in-label-reqs-created"},
    nsr_sum_in_label_reqs_freed{YType::uint32, "nsr-sum-in-label-reqs-freed"},
    nsr_sum_in_label_withdraw_created{YType::uint32, "nsr-sum-in-label-withdraw-created"},
    nsr_sum_in_label_withdraw_freed{YType::uint32, "nsr-sum-in-label-withdraw-freed"},
    nsr_sum_lcl_addr_withdraw_set{YType::uint32, "nsr-sum-lcl-addr-withdraw-set"},
    nsr_sum_lcl_addr_withdraw_cleared{YType::uint32, "nsr-sum-lcl-addr-withdraw-cleared"}
{

    yang_name = "nsr-summary-all"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::NsrSummaryAll::~NsrSummaryAll()
{
}

bool MplsLdp::MplsLdpState::NsrSummaryAll::has_data() const
{
    return nsr_sum_in_label_reqs_created.is_set
	|| nsr_sum_in_label_reqs_freed.is_set
	|| nsr_sum_in_label_withdraw_created.is_set
	|| nsr_sum_in_label_withdraw_freed.is_set
	|| nsr_sum_lcl_addr_withdraw_set.is_set
	|| nsr_sum_lcl_addr_withdraw_cleared.is_set;
}

bool MplsLdp::MplsLdpState::NsrSummaryAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sum_in_label_reqs_created.yfilter)
	|| ydk::is_set(nsr_sum_in_label_reqs_freed.yfilter)
	|| ydk::is_set(nsr_sum_in_label_withdraw_created.yfilter)
	|| ydk::is_set(nsr_sum_in_label_withdraw_freed.yfilter)
	|| ydk::is_set(nsr_sum_lcl_addr_withdraw_set.yfilter)
	|| ydk::is_set(nsr_sum_lcl_addr_withdraw_cleared.yfilter);
}

std::string MplsLdp::MplsLdpState::NsrSummaryAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::NsrSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-summary-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::NsrSummaryAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sum_in_label_reqs_created.is_set || is_set(nsr_sum_in_label_reqs_created.yfilter)) leaf_name_data.push_back(nsr_sum_in_label_reqs_created.get_name_leafdata());
    if (nsr_sum_in_label_reqs_freed.is_set || is_set(nsr_sum_in_label_reqs_freed.yfilter)) leaf_name_data.push_back(nsr_sum_in_label_reqs_freed.get_name_leafdata());
    if (nsr_sum_in_label_withdraw_created.is_set || is_set(nsr_sum_in_label_withdraw_created.yfilter)) leaf_name_data.push_back(nsr_sum_in_label_withdraw_created.get_name_leafdata());
    if (nsr_sum_in_label_withdraw_freed.is_set || is_set(nsr_sum_in_label_withdraw_freed.yfilter)) leaf_name_data.push_back(nsr_sum_in_label_withdraw_freed.get_name_leafdata());
    if (nsr_sum_lcl_addr_withdraw_set.is_set || is_set(nsr_sum_lcl_addr_withdraw_set.yfilter)) leaf_name_data.push_back(nsr_sum_lcl_addr_withdraw_set.get_name_leafdata());
    if (nsr_sum_lcl_addr_withdraw_cleared.is_set || is_set(nsr_sum_lcl_addr_withdraw_cleared.yfilter)) leaf_name_data.push_back(nsr_sum_lcl_addr_withdraw_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::NsrSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::NsrSummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::NsrSummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sum-in-label-reqs-created")
    {
        nsr_sum_in_label_reqs_created = value;
        nsr_sum_in_label_reqs_created.value_namespace = name_space;
        nsr_sum_in_label_reqs_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sum-in-label-reqs-freed")
    {
        nsr_sum_in_label_reqs_freed = value;
        nsr_sum_in_label_reqs_freed.value_namespace = name_space;
        nsr_sum_in_label_reqs_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sum-in-label-withdraw-created")
    {
        nsr_sum_in_label_withdraw_created = value;
        nsr_sum_in_label_withdraw_created.value_namespace = name_space;
        nsr_sum_in_label_withdraw_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sum-in-label-withdraw-freed")
    {
        nsr_sum_in_label_withdraw_freed = value;
        nsr_sum_in_label_withdraw_freed.value_namespace = name_space;
        nsr_sum_in_label_withdraw_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-set")
    {
        nsr_sum_lcl_addr_withdraw_set = value;
        nsr_sum_lcl_addr_withdraw_set.value_namespace = name_space;
        nsr_sum_lcl_addr_withdraw_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-cleared")
    {
        nsr_sum_lcl_addr_withdraw_cleared = value;
        nsr_sum_lcl_addr_withdraw_cleared.value_namespace = name_space;
        nsr_sum_lcl_addr_withdraw_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::NsrSummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sum-in-label-reqs-created")
    {
        nsr_sum_in_label_reqs_created.yfilter = yfilter;
    }
    if(value_path == "nsr-sum-in-label-reqs-freed")
    {
        nsr_sum_in_label_reqs_freed.yfilter = yfilter;
    }
    if(value_path == "nsr-sum-in-label-withdraw-created")
    {
        nsr_sum_in_label_withdraw_created.yfilter = yfilter;
    }
    if(value_path == "nsr-sum-in-label-withdraw-freed")
    {
        nsr_sum_in_label_withdraw_freed.yfilter = yfilter;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-set")
    {
        nsr_sum_lcl_addr_withdraw_set.yfilter = yfilter;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-cleared")
    {
        nsr_sum_lcl_addr_withdraw_cleared.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::NsrSummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sum-in-label-reqs-created" || name == "nsr-sum-in-label-reqs-freed" || name == "nsr-sum-in-label-withdraw-created" || name == "nsr-sum-in-label-withdraw-freed" || name == "nsr-sum-lcl-addr-withdraw-set" || name == "nsr-sum-lcl-addr-withdraw-cleared")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSummaryAll()
    :
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"}
    	,
    icpm_rgid_table_info(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo>())
	,icpm_session_table(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable>())
{
    icpm_rgid_table_info->parent = this;
    icpm_session_table->parent = this;

    yang_name = "icpm-summary-all"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::~IcpmSummaryAll()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::has_data() const
{
    return iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| (icpm_rgid_table_info !=  nullptr && icpm_rgid_table_info->has_data())
	|| (icpm_session_table !=  nullptr && icpm_session_table->has_data());
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter)
	|| (icpm_rgid_table_info !=  nullptr && icpm_rgid_table_info->has_operation())
	|| (icpm_session_table !=  nullptr && icpm_session_table->has_operation());
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-summary-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icpm-rgid-table-info")
    {
        if(icpm_rgid_table_info == nullptr)
        {
            icpm_rgid_table_info = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo>();
        }
        return icpm_rgid_table_info;
    }

    if(child_yang_name == "icpm-session-table")
    {
        if(icpm_session_table == nullptr)
        {
            icpm_session_table = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable>();
        }
        return icpm_session_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icpm_rgid_table_info != nullptr)
    {
        children["icpm-rgid-table-info"] = icpm_rgid_table_info;
    }

    if(icpm_session_table != nullptr)
    {
        children["icpm-session-table"] = icpm_session_table;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpm-rgid-table-info" || name == "icpm-session-table" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "iccp-rg-app-data-count")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::IcpmRgidTableInfo()
{

    yang_name = "icpm-rgid-table-info"; yang_parent_name = "icpm-summary-all"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::~IcpmRgidTableInfo()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::has_data() const
{
    for (std::size_t index=0; index<red_group.size(); index++)
    {
        if(red_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::has_operation() const
{
    for (std::size_t index=0; index<red_group.size(); index++)
    {
        if(red_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-rgid-table-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-group")
    {
        for(auto const & c : red_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup>();
        c->parent = this;
        red_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red-group")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::RedGroup()
    :
    rg_id{YType::uint32, "rg-id"}
{

    yang_name = "red-group"; yang_parent_name = "icpm-rgid-table-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::~RedGroup()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::has_data() const
{
    for (std::size_t index=0; index<icpm_protocols.size(); index++)
    {
        if(icpm_protocols[index]->has_data())
            return true;
    }
    return rg_id.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::has_operation() const
{
    for (std::size_t index=0; index<icpm_protocols.size(); index++)
    {
        if(icpm_protocols[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rg_id.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/icpm-rgid-table-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-group" <<"[rg-id='" <<rg_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.yfilter)) leaf_name_data.push_back(rg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icpm-protocols")
    {
        for(auto const & c : icpm_protocols)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols>();
        c->parent = this;
        icpm_protocols.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icpm_protocols)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
        rg_id.value_namespace = name_space;
        rg_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-id")
    {
        rg_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpm-protocols" || name == "rg-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::IcpmProtocols()
    :
    icpm_type{YType::identityref, "icpm-type"}
{

    yang_name = "icpm-protocols"; yang_parent_name = "red-group"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::~IcpmProtocols()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::has_data() const
{
    for (std::size_t index=0; index<redun_groups.size(); index++)
    {
        if(redun_groups[index]->has_data())
            return true;
    }
    return icpm_type.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::has_operation() const
{
    for (std::size_t index=0; index<redun_groups.size(); index++)
    {
        if(redun_groups[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(icpm_type.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-protocols" <<"[icpm-type='" <<icpm_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icpm_type.is_set || is_set(icpm_type.yfilter)) leaf_name_data.push_back(icpm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redun-groups")
    {
        for(auto const & c : redun_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups>();
        c->parent = this;
        redun_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redun_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icpm-type")
    {
        icpm_type = value;
        icpm_type.value_namespace = name_space;
        icpm_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icpm-type")
    {
        icpm_type.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redun-groups" || name == "icpm-type")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::RedunGroups()
    :
    rg_id{YType::uint32, "rg-id"},
    peer_id{YType::str, "peer-id"},
    client_id{YType::uint32, "client_id"},
    state{YType::str, "state"}
{

    yang_name = "redun-groups"; yang_parent_name = "icpm-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::~RedunGroups()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_data())
            return true;
    }
    return rg_id.is_set
	|| peer_id.is_set
	|| client_id.is_set
	|| state.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rg_id.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redun-groups" <<"[rg-id='" <<rg_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.yfilter)) leaf_name_data.push_back(rg_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-apps")
    {
        for(auto const & c : iccp_apps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps>();
        c->parent = this;
        iccp_apps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_apps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
        rg_id.value_namespace = name_space;
        rg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client_id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-id")
    {
        rg_id.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "client_id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-apps" || name == "rg-id" || name == "peer-id" || name == "client_id" || name == "state")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::IccpApps()
    :
    iccp_app{YType::identityref, "iccp-app"},
    app_state{YType::enumeration, "app-state"},
    ptcl_ver{YType::uint32, "ptcl-ver"}
{

    yang_name = "iccp-apps"; yang_parent_name = "redun-groups"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::~IccpApps()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::has_data() const
{
    return iccp_app.is_set
	|| app_state.is_set
	|| ptcl_ver.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_app.yfilter)
	|| ydk::is_set(app_state.yfilter)
	|| ydk::is_set(ptcl_ver.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-apps" <<"[iccp-app='" <<iccp_app <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_app.is_set || is_set(iccp_app.yfilter)) leaf_name_data.push_back(iccp_app.get_name_leafdata());
    if (app_state.is_set || is_set(app_state.yfilter)) leaf_name_data.push_back(app_state.get_name_leafdata());
    if (ptcl_ver.is_set || is_set(ptcl_ver.yfilter)) leaf_name_data.push_back(ptcl_ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-app")
    {
        iccp_app = value;
        iccp_app.value_namespace = name_space;
        iccp_app.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-state")
    {
        app_state = value;
        app_state.value_namespace = name_space;
        app_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver = value;
        ptcl_ver.value_namespace = name_space;
        ptcl_ver.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-app")
    {
        iccp_app.yfilter = yfilter;
    }
    if(value_path == "app-state")
    {
        app_state.yfilter = yfilter;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-app" || name == "app-state" || name == "ptcl-ver")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::IcpmSessionTable()
{

    yang_name = "icpm-session-table"; yang_parent_name = "icpm-summary-all"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::~IcpmSessionTable()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::has_data() const
{
    for (std::size_t index=0; index<session_table.size(); index++)
    {
        if(session_table[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::has_operation() const
{
    for (std::size_t index=0; index<session_table.size(); index++)
    {
        if(session_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-session-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-table")
    {
        for(auto const & c : session_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable>();
        c->parent = this;
        session_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-table")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::SessionTable()
    :
    session_id{YType::uint32, "session-id"}
{

    yang_name = "session-table"; yang_parent_name = "icpm-session-table"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::~SessionTable()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::has_data() const
{
    for (std::size_t index=0; index<icpm_protocols.size(); index++)
    {
        if(icpm_protocols[index]->has_data())
            return true;
    }
    return session_id.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::has_operation() const
{
    for (std::size_t index=0; index<icpm_protocols.size(); index++)
    {
        if(icpm_protocols[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/icpm-session-table/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-table" <<"[session-id='" <<session_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icpm-protocols")
    {
        for(auto const & c : icpm_protocols)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols>();
        c->parent = this;
        icpm_protocols.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icpm_protocols)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icpm-protocols" || name == "session-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::IcpmProtocols()
    :
    icpm_type{YType::identityref, "icpm-type"}
{

    yang_name = "icpm-protocols"; yang_parent_name = "session-table"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::~IcpmProtocols()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::has_data() const
{
    for (std::size_t index=0; index<redun_groups.size(); index++)
    {
        if(redun_groups[index]->has_data())
            return true;
    }
    return icpm_type.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::has_operation() const
{
    for (std::size_t index=0; index<redun_groups.size(); index++)
    {
        if(redun_groups[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(icpm_type.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-protocols" <<"[icpm-type='" <<icpm_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icpm_type.is_set || is_set(icpm_type.yfilter)) leaf_name_data.push_back(icpm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redun-groups")
    {
        for(auto const & c : redun_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups>();
        c->parent = this;
        redun_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redun_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icpm-type")
    {
        icpm_type = value;
        icpm_type.value_namespace = name_space;
        icpm_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icpm-type")
    {
        icpm_type.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redun-groups" || name == "icpm-type")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::RedunGroups()
    :
    rg_id{YType::uint32, "rg-id"},
    peer_id{YType::str, "peer-id"},
    client_id{YType::uint32, "client_id"},
    state{YType::str, "state"}
{

    yang_name = "redun-groups"; yang_parent_name = "icpm-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::~RedunGroups()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_data())
            return true;
    }
    return rg_id.is_set
	|| peer_id.is_set
	|| client_id.is_set
	|| state.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rg_id.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redun-groups" <<"[rg-id='" <<rg_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.yfilter)) leaf_name_data.push_back(rg_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-apps")
    {
        for(auto const & c : iccp_apps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps>();
        c->parent = this;
        iccp_apps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_apps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
        rg_id.value_namespace = name_space;
        rg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client_id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-id")
    {
        rg_id.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "client_id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-apps" || name == "rg-id" || name == "peer-id" || name == "client_id" || name == "state")
        return true;
    return false;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::IccpApps()
    :
    iccp_app{YType::identityref, "iccp-app"},
    app_state{YType::enumeration, "app-state"},
    ptcl_ver{YType::uint32, "ptcl-ver"}
{

    yang_name = "iccp-apps"; yang_parent_name = "redun-groups"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::~IccpApps()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::has_data() const
{
    return iccp_app.is_set
	|| app_state.is_set
	|| ptcl_ver.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_app.yfilter)
	|| ydk::is_set(app_state.yfilter)
	|| ydk::is_set(ptcl_ver.yfilter);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-apps" <<"[iccp-app='" <<iccp_app <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_app.is_set || is_set(iccp_app.yfilter)) leaf_name_data.push_back(iccp_app.get_name_leafdata());
    if (app_state.is_set || is_set(app_state.yfilter)) leaf_name_data.push_back(app_state.get_name_leafdata());
    if (ptcl_ver.is_set || is_set(ptcl_ver.yfilter)) leaf_name_data.push_back(ptcl_ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-app")
    {
        iccp_app = value;
        iccp_app.value_namespace = name_space;
        iccp_app.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app-state")
    {
        app_state = value;
        app_state.value_namespace = name_space;
        app_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver = value;
        ptcl_ver.value_namespace = name_space;
        ptcl_ver.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-app")
    {
        iccp_app.yfilter = yfilter;
    }
    if(value_path == "app-state")
    {
        app_state.yfilter = yfilter;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-app" || name == "app-state" || name == "ptcl-ver")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Parameters::Parameters()
    :
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    protocol_version{YType::uint32, "protocol-version"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    session_hold_time{YType::uint32, "session-hold-time"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    out_of_mem_state{YType::uint32, "out-of-mem-state"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"},
    dod_max_hop{YType::uint32, "dod-max-hop"},
    feature{YType::str, "feature"},
    loop_detection{YType::enumeration, "loop-detection"}
{

    yang_name = "parameters"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Parameters::~Parameters()
{
}

bool MplsLdp::MplsLdpState::Parameters::has_data() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_data())
            return true;
    }
    for (auto const & leaf : feature.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_md5_password_enabled.is_set
	|| protocol_version.is_set
	|| keepalive_interval.is_set
	|| session_hold_time.is_set
	|| le_no_route_timeout.is_set
	|| af_binding_withdraw_delay.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| out_of_mem_state.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| dod_max_hop.is_set
	|| loop_detection.is_set;
}

bool MplsLdp::MplsLdpState::Parameters::has_operation() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_operation())
            return true;
    }
    for (auto const & leaf : feature.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global_md5_password_enabled.yfilter)
	|| ydk::is_set(protocol_version.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(session_hold_time.yfilter)
	|| ydk::is_set(le_no_route_timeout.yfilter)
	|| ydk::is_set(af_binding_withdraw_delay.yfilter)
	|| ydk::is_set(max_intf_attached.yfilter)
	|| ydk::is_set(max_intf_te.yfilter)
	|| ydk::is_set(max_peer.yfilter)
	|| ydk::is_set(out_of_mem_state.yfilter)
	|| ydk::is_set(discovery_quick_start_disabled_on_interfaces.yfilter)
	|| ydk::is_set(dod_max_hop.yfilter)
	|| ydk::is_set(feature.yfilter)
	|| ydk::is_set(loop_detection.yfilter);
}

std::string MplsLdp::MplsLdpState::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.yfilter)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.yfilter)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.yfilter)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.yfilter)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.yfilter)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.yfilter)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.yfilter)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.yfilter)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (out_of_mem_state.is_set || is_set(out_of_mem_state.yfilter)) leaf_name_data.push_back(out_of_mem_state.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.yfilter)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());
    if (dod_max_hop.is_set || is_set(dod_max_hop.yfilter)) leaf_name_data.push_back(dod_max_hop.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.yfilter)) leaf_name_data.push_back(loop_detection.get_name_leafdata());

    auto feature_name_datas = feature.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), feature_name_datas.begin(), feature_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter>();
        c->parent = this;
        address_family_parameter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_family_parameter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
        global_md5_password_enabled.value_namespace = name_space;
        global_md5_password_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
        protocol_version.value_namespace = name_space;
        protocol_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
        session_hold_time.value_namespace = name_space;
        session_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
        le_no_route_timeout.value_namespace = name_space;
        le_no_route_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
        af_binding_withdraw_delay.value_namespace = name_space;
        af_binding_withdraw_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "out-of-mem-state")
    {
        out_of_mem_state = value;
        out_of_mem_state.value_namespace = name_space;
        out_of_mem_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
        discovery_quick_start_disabled_on_interfaces.value_namespace = name_space;
        discovery_quick_start_disabled_on_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dod-max-hop")
    {
        dod_max_hop = value;
        dod_max_hop.value_namespace = name_space;
        dod_max_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature")
    {
        feature.append(value);
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
        loop_detection.value_namespace = name_space;
        loop_detection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled.yfilter = yfilter;
    }
    if(value_path == "protocol-version")
    {
        protocol_version.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time.yfilter = yfilter;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout.yfilter = yfilter;
    }
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay.yfilter = yfilter;
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
    if(value_path == "out-of-mem-state")
    {
        out_of_mem_state.yfilter = yfilter;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces.yfilter = yfilter;
    }
    if(value_path == "dod-max-hop")
    {
        dod_max_hop.yfilter = yfilter;
    }
    if(value_path == "feature")
    {
        feature.yfilter = yfilter;
    }
    if(value_path == "loop-detection")
    {
        loop_detection.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-parameter" || name == "global-md5-password-enabled" || name == "protocol-version" || name == "keepalive-interval" || name == "session-hold-time" || name == "le-no-route-timeout" || name == "af-binding-withdraw-delay" || name == "max-intf-attached" || name == "max-intf-te" || name == "max-peer" || name == "out-of-mem-state" || name == "discovery-quick-start-disabled-on-interfaces" || name == "dod-max-hop" || name == "feature" || name == "loop-detection")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    discovery_transport_address{YType::str, "discovery-transport-address"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    targeted_hello_filter{YType::str, "targeted-hello-filter"}
{

    yang_name = "address-family-parameter"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::~AddressFamilyParameter()
{
}

bool MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::has_data() const
{
    return address_family.is_set
	|| discovery_transport_address.is_set
	|| is_accepting_targeted_hellos.is_set
	|| targeted_hello_filter.is_set;
}

bool MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(discovery_transport_address.yfilter)
	|| ydk::is_set(is_accepting_targeted_hellos.yfilter)
	|| ydk::is_set(targeted_hello_filter.yfilter);
}

std::string MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter" <<"[address-family='" <<address_family <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (discovery_transport_address.is_set || is_set(discovery_transport_address.yfilter)) leaf_name_data.push_back(discovery_transport_address.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.yfilter)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (targeted_hello_filter.is_set || is_set(targeted_hello_filter.yfilter)) leaf_name_data.push_back(targeted_hello_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-transport-address")
    {
        discovery_transport_address = value;
        discovery_transport_address.value_namespace = name_space;
        discovery_transport_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
        is_accepting_targeted_hellos.value_namespace = name_space;
        is_accepting_targeted_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-filter")
    {
        targeted_hello_filter = value;
        targeted_hello_filter.value_namespace = name_space;
        targeted_hello_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "discovery-transport-address")
    {
        discovery_transport_address.yfilter = yfilter;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-filter")
    {
        targeted_hello_filter.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "discovery-transport-address" || name == "is-accepting-targeted-hellos" || name == "targeted-hello-filter")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Capabilities::Capabilities()
{

    yang_name = "capabilities"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Capabilities::~Capabilities()
{
}

bool MplsLdp::MplsLdpState::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Capabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability")
    {
        for(auto const & c : capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : capability)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Capabilities::Capability::Capability()
    :
    cap_type{YType::uint16, "cap-type"},
    capability_owner{YType::str, "capability-owner"},
    cap_des{YType::str, "cap-des"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "capability"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::MplsLdpState::Capabilities::Capability::has_data() const
{
    return cap_type.is_set
	|| capability_owner.is_set
	|| cap_des.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::MplsLdpState::Capabilities::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cap_type.yfilter)
	|| ydk::is_set(capability_owner.yfilter)
	|| ydk::is_set(cap_des.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::MplsLdpState::Capabilities::Capability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[cap-type='" <<cap_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Capabilities::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.yfilter)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.yfilter)) leaf_name_data.push_back(capability_owner.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.yfilter)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Capabilities::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Capabilities::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
        cap_type.value_namespace = name_space;
        cap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
        capability_owner.value_namespace = name_space;
        capability_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
        cap_des.value_namespace = name_space;
        cap_des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Capabilities::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cap-type")
    {
        cap_type.yfilter = yfilter;
    }
    if(value_path == "capability-owner")
    {
        capability_owner.yfilter = yfilter;
    }
    if(value_path == "cap-des")
    {
        cap_des.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Capabilities::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cap-type" || name == "capability-owner" || name == "cap-des" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::MplsLdpState::BackoffParameters::BackoffParameters()
    :
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"},
    backoff_seconds{YType::uint32, "backoff-seconds"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{

    yang_name = "backoff-parameters"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::MplsLdpState::BackoffParameters::has_data() const
{
    return initial_seconds.is_set
	|| maximum_seconds.is_set
	|| backoff_seconds.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::MplsLdpState::BackoffParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_seconds.yfilter)
	|| ydk::is_set(maximum_seconds.yfilter)
	|| ydk::is_set(backoff_seconds.yfilter)
	|| ydk::is_set(waiting_seconds.yfilter);
}

std::string MplsLdp::MplsLdpState::BackoffParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::BackoffParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_seconds.is_set || is_set(initial_seconds.yfilter)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.yfilter)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());
    if (backoff_seconds.is_set || is_set(backoff_seconds.yfilter)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.yfilter)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::BackoffParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::BackoffParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::BackoffParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
        initial_seconds.value_namespace = name_space;
        initial_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
        maximum_seconds.value_namespace = name_space;
        maximum_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
        backoff_seconds.value_namespace = name_space;
        backoff_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
        waiting_seconds.value_namespace = name_space;
        waiting_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::BackoffParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds.yfilter = yfilter;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds.yfilter = yfilter;
    }
    if(value_path == "backoff-seconds")
    {
        backoff_seconds.yfilter = yfilter;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::BackoffParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-seconds" || name == "maximum-seconds" || name == "backoff-seconds" || name == "waiting-seconds")
        return true;
    return false;
}

MplsLdp::MplsLdpState::GracefulRestart::GracefulRestart()
    :
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"},
    is_forwarding_state_hold_timer_running{YType::empty, "is-forwarding-state-hold-timer-running"},
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"}
{

    yang_name = "graceful-restart"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::MplsLdpState::GracefulRestart::has_data() const
{
    return is_graceful_restart_configured.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| graceful_restart_forwarding_state_hold_time.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| forwarding_state_hold_timer_remaining_seconds.is_set;
}

bool MplsLdp::MplsLdpState::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restart_configured.yfilter)
	|| ydk::is_set(graceful_restart_reconnect_timeout.yfilter)
	|| ydk::is_set(graceful_restart_forwarding_state_hold_time.yfilter)
	|| ydk::is_set(is_forwarding_state_hold_timer_running.yfilter)
	|| ydk::is_set(forwarding_state_hold_timer_remaining_seconds.yfilter);
}

std::string MplsLdp::MplsLdpState::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.yfilter)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.yfilter)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.yfilter)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.yfilter)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());
    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
        is_graceful_restart_configured.value_namespace = name_space;
        is_graceful_restart_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
        graceful_restart_reconnect_timeout.value_namespace = name_space;
        graceful_restart_reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
        graceful_restart_forwarding_state_hold_time.value_namespace = name_space;
        graceful_restart_forwarding_state_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
        is_forwarding_state_hold_timer_running.value_namespace = name_space;
        is_forwarding_state_hold_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
        forwarding_state_hold_timer_remaining_seconds.value_namespace = name_space;
        forwarding_state_hold_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time.yfilter = yfilter;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running.yfilter = yfilter;
    }
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-graceful-restart-configured" || name == "graceful-restart-reconnect-timeout" || name == "graceful-restart-forwarding-state-hold-time" || name == "is-forwarding-state-hold-timer-running" || name == "forwarding-state-hold-timer-remaining-seconds")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Vrfs::~Vrfs()
{
}

bool MplsLdp::MplsLdpState::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_summary(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary>())
	,afs(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs>())
{
    vrf_summary->parent = this;
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (vrf_summary !=  nullptr && vrf_summary->has_data())
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation())
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary>();
        }
        return vrf_summary;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf_summary != nullptr)
    {
        children["vrf-summary"] = vrf_summary;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary" || name == "afs" || name == "vrf-name")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::VrfSummary()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    numberof_ipv4_hello_adj{YType::uint32, "numberof-ipv4-hello-adj"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"}
{

    yang_name = "vrf-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::~VrfSummary()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::has_data() const
{
    return address_families.is_set
	|| number_of_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| numberof_ipv4_hello_adj.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_ipv4ldp_interfaces.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_families.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_graceful_restart_neighbors.yfilter)
	|| ydk::is_set(number_of_downstream_on_demand_neighbors.yfilter)
	|| ydk::is_set(numberof_ipv4_hello_adj.yfilter)
	|| ydk::is_set(number_of_ipv4_routes.yfilter)
	|| ydk::is_set(number_of_ipv4_local_addresses.yfilter)
	|| ydk::is_set(number_of_ldp_interfaces.yfilter)
	|| ydk::is_set(number_of_ipv4ldp_interfaces.yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.yfilter)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.yfilter)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.yfilter)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (numberof_ipv4_hello_adj.is_set || is_set(numberof_ipv4_hello_adj.yfilter)) leaf_name_data.push_back(numberof_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.yfilter)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.yfilter)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.yfilter)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-families")
    {
        address_families = value;
        address_families.value_namespace = name_space;
        address_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
        number_of_graceful_restart_neighbors.value_namespace = name_space;
        number_of_graceful_restart_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
        number_of_downstream_on_demand_neighbors.value_namespace = name_space;
        number_of_downstream_on_demand_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj = value;
        numberof_ipv4_hello_adj.value_namespace = name_space;
        numberof_ipv4_hello_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
        number_of_ipv4_routes.value_namespace = name_space;
        number_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
        number_of_ipv4_local_addresses.value_namespace = name_space;
        number_of_ipv4_local_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
        number_of_ldp_interfaces.value_namespace = name_space;
        number_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
        number_of_ipv4ldp_interfaces.value_namespace = name_space;
        number_of_ipv4ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-families")
    {
        address_families.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors.yfilter = yfilter;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses.yfilter = yfilter;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-families" || name == "number-of-neighbors" || name == "number-of-graceful-restart-neighbors" || name == "number-of-downstream-on-demand-neighbors" || name == "numberof-ipv4-hello-adj" || name == "number-of-ipv4-routes" || name == "number-of-ipv4-local-addresses" || name == "number-of-ldp-interfaces" || name == "number-of-ipv4ldp-interfaces")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    interface_summary(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary>())
	,igp(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp>())
{
    interface_summary->parent = this;
    igp->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (igp !=  nullptr && igp->has_data());
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (igp !=  nullptr && igp->has_operation());
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary>();
        }
        return interface_summary;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_summary != nullptr)
    {
        children["interface-summary"] = interface_summary;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary" || name == "igp" || name == "af-name")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    configured_attached_interface{YType::uint32, "configured-attached-interface"},
    configured_te_interface{YType::uint32, "configured-te-interface"},
    forward_references{YType::uint32, "forward-references"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config{YType::uint32, "auto-config"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"}
{

    yang_name = "interface-summary"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_data() const
{
    return known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| configured_attached_interface.is_set
	|| configured_te_interface.is_set
	|| forward_references.is_set
	|| auto_config_disabled.is_set
	|| auto_config.is_set
	|| auto_config_forward_reference_interfaces.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(known_ip_interface_count.yfilter)
	|| ydk::is_set(known_ip_interface_ldp_enabled.yfilter)
	|| ydk::is_set(configured_attached_interface.yfilter)
	|| ydk::is_set(configured_te_interface.yfilter)
	|| ydk::is_set(forward_references.yfilter)
	|| ydk::is_set(auto_config_disabled.yfilter)
	|| ydk::is_set(auto_config.yfilter)
	|| ydk::is_set(auto_config_forward_reference_interfaces.yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.yfilter)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.yfilter)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (configured_attached_interface.is_set || is_set(configured_attached_interface.yfilter)) leaf_name_data.push_back(configured_attached_interface.get_name_leafdata());
    if (configured_te_interface.is_set || is_set(configured_te_interface.yfilter)) leaf_name_data.push_back(configured_te_interface.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.yfilter)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.yfilter)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config.is_set || is_set(auto_config.yfilter)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.yfilter)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
        known_ip_interface_count.value_namespace = name_space;
        known_ip_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
        known_ip_interface_ldp_enabled.value_namespace = name_space;
        known_ip_interface_ldp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-attached-interface")
    {
        configured_attached_interface = value;
        configured_attached_interface.value_namespace = name_space;
        configured_attached_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-interface")
    {
        configured_te_interface = value;
        configured_te_interface.value_namespace = name_space;
        configured_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
        forward_references.value_namespace = name_space;
        forward_references.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
        auto_config_disabled.value_namespace = name_space;
        auto_config_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config")
    {
        auto_config = value;
        auto_config.value_namespace = name_space;
        auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
        auto_config_forward_reference_interfaces.value_namespace = name_space;
        auto_config_forward_reference_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count.yfilter = yfilter;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-attached-interface")
    {
        configured_attached_interface.yfilter = yfilter;
    }
    if(value_path == "configured-te-interface")
    {
        configured_te_interface.yfilter = yfilter;
    }
    if(value_path == "forward-references")
    {
        forward_references.yfilter = yfilter;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled.yfilter = yfilter;
    }
    if(value_path == "auto-config")
    {
        auto_config.yfilter = yfilter;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "known-ip-interface-count" || name == "known-ip-interface-ldp-enabled" || name == "configured-attached-interface" || name == "configured-te-interface" || name == "forward-references" || name == "auto-config-disabled" || name == "auto-config" || name == "auto-config-forward-reference-interfaces")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Igp()
{

    yang_name = "igp"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::has_data() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::has_operation() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        for(auto const & c : sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync>();
        c->parent = this;
        sync.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sync)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Sync()
    :
    interface{YType::str, "interface"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    is_delay_timer_running{YType::empty, "is-delay-timer-running"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_down_reason{YType::identityref, "igp-sync-down-reason"}
{

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::~Sync()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::has_data() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface.is_set
	|| igp_sync_state.is_set
	|| is_delay_timer_running.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_down_reason.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(igp_sync_state.yfilter)
	|| ydk::is_set(is_delay_timer_running.yfilter)
	|| ydk::is_set(delay_timer_remaining.yfilter)
	|| ydk::is_set(igp_sync_down_reason.yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.yfilter)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.yfilter)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.yfilter)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.yfilter)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers>();
        c->parent = this;
        peers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
        igp_sync_state.value_namespace = name_space;
        igp_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
        is_delay_timer_running.value_namespace = name_space;
        is_delay_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
        delay_timer_remaining.value_namespace = name_space;
        delay_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
        igp_sync_down_reason.value_namespace = name_space;
        igp_sync_down_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state.yfilter = yfilter;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running.yfilter = yfilter;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining.yfilter = yfilter;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface" || name == "igp-sync-state" || name == "is-delay-timer-running" || name == "delay-timer-remaining" || name == "igp-sync-down-reason")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::Peers()
    :
    peer_id{YType::str, "peer-id"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    is_chkpt_created{YType::empty, "is-chkpt-created"}
{

    yang_name = "peers"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::~Peers()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::has_data() const
{
    return peer_id.is_set
	|| is_gr_enabled.is_set
	|| is_chkpt_created.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(is_chkpt_created.yfilter);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (is_chkpt_created.is_set || is_set(is_chkpt_created.yfilter)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
        is_chkpt_created.value_namespace = name_space;
        is_chkpt_created.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "is-gr-enabled" || name == "is-chkpt-created")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::Discovery()
    :
    discovery_stats(std::make_shared<MplsLdp::MplsLdpState::Discovery::DiscoveryStats>())
	,link_hello_state(std::make_shared<MplsLdp::MplsLdpState::Discovery::LinkHelloState>())
	,targeted_hellos(std::make_shared<MplsLdp::MplsLdpState::Discovery::TargetedHellos>())
{
    discovery_stats->parent = this;
    link_hello_state->parent = this;
    targeted_hellos->parent = this;

    yang_name = "discovery"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::~Discovery()
{
}

bool MplsLdp::MplsLdpState::Discovery::has_data() const
{
    return (discovery_stats !=  nullptr && discovery_stats->has_data())
	|| (link_hello_state !=  nullptr && link_hello_state->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data());
}

bool MplsLdp::MplsLdpState::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (discovery_stats !=  nullptr && discovery_stats->has_operation())
	|| (link_hello_state !=  nullptr && link_hello_state->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::MplsLdpState::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-stats")
    {
        if(discovery_stats == nullptr)
        {
            discovery_stats = std::make_shared<MplsLdp::MplsLdpState::Discovery::DiscoveryStats>();
        }
        return discovery_stats;
    }

    if(child_yang_name == "link-hello-state")
    {
        if(link_hello_state == nullptr)
        {
            link_hello_state = std::make_shared<MplsLdp::MplsLdpState::Discovery::LinkHelloState>();
        }
        return link_hello_state;
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos == nullptr)
        {
            targeted_hellos = std::make_shared<MplsLdp::MplsLdpState::Discovery::TargetedHellos>();
        }
        return targeted_hellos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery_stats != nullptr)
    {
        children["discovery-stats"] = discovery_stats;
    }

    if(link_hello_state != nullptr)
    {
        children["link-hello-state"] = link_hello_state;
    }

    if(targeted_hellos != nullptr)
    {
        children["targeted-hellos"] = targeted_hellos;
    }

    return children;
}

void MplsLdp::MplsLdpState::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-stats" || name == "link-hello-state" || name == "targeted-hellos")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::DiscoveryStats::DiscoveryStats()
    :
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"}
{

    yang_name = "discovery-stats"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::DiscoveryStats::~DiscoveryStats()
{
}

bool MplsLdp::MplsLdpState::Discovery::DiscoveryStats::has_data() const
{
    return num_of_ldp_interfaces.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_tgt_disc_recv.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::DiscoveryStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_active_ldp_interfaces.yfilter)
	|| ydk::is_set(num_of_lnk_disc_xmit.yfilter)
	|| ydk::is_set(num_of_tgt_disc_xmit.yfilter)
	|| ydk::is_set(num_of_lnk_disc_recv.yfilter)
	|| ydk::is_set(num_of_tgt_disc_recv.yfilter);
}

std::string MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.yfilter)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.yfilter)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.yfilter)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Discovery::DiscoveryStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
        num_of_ldp_interfaces.value_namespace = name_space;
        num_of_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
        num_of_active_ldp_interfaces.value_namespace = name_space;
        num_of_active_ldp_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
        num_of_lnk_disc_xmit.value_namespace = name_space;
        num_of_lnk_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
        num_of_tgt_disc_xmit.value_namespace = name_space;
        num_of_tgt_disc_xmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
        num_of_lnk_disc_recv.value_namespace = name_space;
        num_of_lnk_disc_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
        num_of_tgt_disc_recv.value_namespace = name_space;
        num_of_tgt_disc_recv.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Discovery::DiscoveryStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit.yfilter = yfilter;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv.yfilter = yfilter;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Discovery::DiscoveryStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-of-ldp-interfaces" || name == "num-of-active-ldp-interfaces" || name == "num-of-lnk-disc-xmit" || name == "num-of-tgt-disc-xmit" || name == "num-of-lnk-disc-recv" || name == "num-of-tgt-disc-recv")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHelloState()
{

    yang_name = "link-hello-state"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::~LinkHelloState()
{
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::has_data() const
{
    for (std::size_t index=0; index<link_hellos.size(); index++)
    {
        if(link_hellos[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::has_operation() const
{
    for (std::size_t index=0; index<link_hellos.size(); index++)
    {
        if(link_hellos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hellos")
    {
        for(auto const & c : link_hellos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos>();
        c->parent = this;
        link_hellos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_hellos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hellos")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::LinkHellos()
    :
    interface{YType::str, "interface"},
    nbr_transport_addr{YType::str, "nbr-transport-addr"},
    hello_interval{YType::uint32, "hello-interval"},
    local_src_addr{YType::str, "local-src-addr"},
    local_transport_addr{YType::str, "local-transport-addr"},
    nbr_src_addr{YType::str, "nbr-src-addr"},
    nbr_ldp_id{YType::str, "nbr-ldp-id"},
    session_up{YType::empty, "session-up"},
    nbr_hold_time{YType::uint32, "nbr-hold-time"},
    next_hello{YType::uint32, "next-hello"},
    hold_time_remaining{YType::uint32, "hold-time-remaining"}
{

    yang_name = "link-hellos"; yang_parent_name = "link-hello-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::has_data() const
{
    return interface.is_set
	|| nbr_transport_addr.is_set
	|| hello_interval.is_set
	|| local_src_addr.is_set
	|| local_transport_addr.is_set
	|| nbr_src_addr.is_set
	|| nbr_ldp_id.is_set
	|| session_up.is_set
	|| nbr_hold_time.is_set
	|| next_hello.is_set
	|| hold_time_remaining.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nbr_transport_addr.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(local_src_addr.yfilter)
	|| ydk::is_set(local_transport_addr.yfilter)
	|| ydk::is_set(nbr_src_addr.yfilter)
	|| ydk::is_set(nbr_ldp_id.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(nbr_hold_time.yfilter)
	|| ydk::is_set(next_hello.yfilter)
	|| ydk::is_set(hold_time_remaining.yfilter);
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/link-hello-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos" <<"[interface='" <<interface <<"']" <<"[nbr-transport-addr='" <<nbr_transport_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nbr_transport_addr.is_set || is_set(nbr_transport_addr.yfilter)) leaf_name_data.push_back(nbr_transport_addr.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (local_src_addr.is_set || is_set(local_src_addr.yfilter)) leaf_name_data.push_back(local_src_addr.get_name_leafdata());
    if (local_transport_addr.is_set || is_set(local_transport_addr.yfilter)) leaf_name_data.push_back(local_transport_addr.get_name_leafdata());
    if (nbr_src_addr.is_set || is_set(nbr_src_addr.yfilter)) leaf_name_data.push_back(nbr_src_addr.get_name_leafdata());
    if (nbr_ldp_id.is_set || is_set(nbr_ldp_id.yfilter)) leaf_name_data.push_back(nbr_ldp_id.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (nbr_hold_time.is_set || is_set(nbr_hold_time.yfilter)) leaf_name_data.push_back(nbr_hold_time.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.yfilter)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (hold_time_remaining.is_set || is_set(hold_time_remaining.yfilter)) leaf_name_data.push_back(hold_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-transport-addr")
    {
        nbr_transport_addr = value;
        nbr_transport_addr.value_namespace = name_space;
        nbr_transport_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-src-addr")
    {
        local_src_addr = value;
        local_src_addr.value_namespace = name_space;
        local_src_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-transport-addr")
    {
        local_transport_addr = value;
        local_transport_addr.value_namespace = name_space;
        local_transport_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-src-addr")
    {
        nbr_src_addr = value;
        nbr_src_addr.value_namespace = name_space;
        nbr_src_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-ldp-id")
    {
        nbr_ldp_id = value;
        nbr_ldp_id.value_namespace = name_space;
        nbr_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time = value;
        nbr_hold_time.value_namespace = name_space;
        nbr_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
        next_hello.value_namespace = name_space;
        next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining = value;
        hold_time_remaining.value_namespace = name_space;
        hold_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nbr-transport-addr")
    {
        nbr_transport_addr.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "local-src-addr")
    {
        local_src_addr.yfilter = yfilter;
    }
    if(value_path == "local-transport-addr")
    {
        local_transport_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-src-addr")
    {
        nbr_src_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-ldp-id")
    {
        nbr_ldp_id.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time.yfilter = yfilter;
    }
    if(value_path == "next-hello")
    {
        next_hello.yfilter = yfilter;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "nbr-transport-addr" || name == "hello-interval" || name == "local-src-addr" || name == "local-transport-addr" || name == "nbr-src-addr" || name == "nbr-ldp-id" || name == "session-up" || name == "nbr-hold-time" || name == "next-hello" || name == "hold-time-remaining")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHellos()
    :
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"},
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"}
{

    yang_name = "targeted-hellos"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::~TargetedHellos()
{
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::has_data() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_data())
            return true;
    }
    return targeted_hello_interval.is_set
	|| targeted_hello_hold_time.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(targeted_hello_interval.yfilter)
	|| ydk::is_set(targeted_hello_hold_time.yfilter);
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hellos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.yfilter)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());
    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.yfilter)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targeted-hello")
    {
        for(auto const & c : targeted_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello>();
        c->parent = this;
        targeted_hello.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : targeted_hello)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
        targeted_hello_interval.value_namespace = name_space;
        targeted_hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
        targeted_hello_hold_time.value_namespace = name_space;
        targeted_hello_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval.yfilter = yfilter;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targeted-hello" || name == "targeted-hello-interval" || name == "targeted-hello-hold-time")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::TargetedHello()
    :
    vrf_name{YType::str, "vrf-name"},
    target_address{YType::str, "target-address"},
    local_address{YType::str, "local-address"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    state{YType::enumeration, "state"},
    nbr_hold_time{YType::uint32, "nbr-hold-time"},
    next_hello{YType::uint32, "next-hello"},
    hold_time_remaining{YType::uint32, "hold-time-remaining"}
{

    yang_name = "targeted-hello"; yang_parent_name = "targeted-hellos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::has_data() const
{
    return vrf_name.is_set
	|| target_address.is_set
	|| local_address.is_set
	|| neighbor_ldp_identifier.is_set
	|| state.is_set
	|| nbr_hold_time.is_set
	|| next_hello.is_set
	|| hold_time_remaining.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(neighbor_ldp_identifier.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(nbr_hold_time.yfilter)
	|| ydk::is_set(next_hello.yfilter)
	|| ydk::is_set(hold_time_remaining.yfilter);
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/targeted-hellos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello" <<"[vrf-name='" <<vrf_name <<"']" <<"[target-address='" <<target_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.yfilter)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (nbr_hold_time.is_set || is_set(nbr_hold_time.yfilter)) leaf_name_data.push_back(nbr_hold_time.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.yfilter)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (hold_time_remaining.is_set || is_set(hold_time_remaining.yfilter)) leaf_name_data.push_back(hold_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
        neighbor_ldp_identifier.value_namespace = name_space;
        neighbor_ldp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time = value;
        nbr_hold_time.value_namespace = name_space;
        nbr_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
        next_hello.value_namespace = name_space;
        next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining = value;
        hold_time_remaining.value_namespace = name_space;
        hold_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time.yfilter = yfilter;
    }
    if(value_path == "next-hello")
    {
        next_hello.yfilter = yfilter;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "target-address" || name == "local-address" || name == "neighbor-ldp-identifier" || name == "state" || name == "nbr-hold-time" || name == "next-hello" || name == "hold-time-remaining")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::Forwarding()
    :
    forwarding_vrf_summs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms>())
{
    forwarding_vrf_summs->parent = this;

    yang_name = "forwarding"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Forwarding::~Forwarding()
{
}

bool MplsLdp::MplsLdpState::Forwarding::has_data() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_data())
            return true;
    }
    return (forwarding_vrf_summs !=  nullptr && forwarding_vrf_summs->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::has_operation() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (forwarding_vrf_summs !=  nullptr && forwarding_vrf_summs->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-vrf-summs")
    {
        if(forwarding_vrf_summs == nullptr)
        {
            forwarding_vrf_summs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms>();
        }
        return forwarding_vrf_summs;
    }

    if(child_yang_name == "forwarding-detail")
    {
        for(auto const & c : forwarding_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail>();
        c->parent = this;
        forwarding_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_vrf_summs != nullptr)
    {
        children["forwarding-vrf-summs"] = forwarding_vrf_summs;
    }

    for (auto const & c : forwarding_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-vrf-summs" || name == "forwarding-detail")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumms()
{

    yang_name = "forwarding-vrf-summs"; yang_parent_name = "forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::~ForwardingVrfSumms()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::has_data() const
{
    for (std::size_t index=0; index<forwarding_vrf_summ.size(); index++)
    {
        if(forwarding_vrf_summ[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::has_operation() const
{
    for (std::size_t index=0; index<forwarding_vrf_summ.size(); index++)
    {
        if(forwarding_vrf_summ[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-vrf-summs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-vrf-summ")
    {
        for(auto const & c : forwarding_vrf_summ)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm>();
        c->parent = this;
        forwarding_vrf_summ.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_vrf_summ)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-vrf-summ")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::ForwardingVrfSumm()
    :
    vrf_name{YType::str, "vrf-name"},
    intfs_fwd_count{YType::uint16, "intfs-fwd-count"},
    local_lbls{YType::uint16, "local-lbls"}
    	,
    pfxs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs>())
	,nhs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs>())
{
    pfxs->parent = this;
    nhs->parent = this;

    yang_name = "forwarding-vrf-summ"; yang_parent_name = "forwarding-vrf-summs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::~ForwardingVrfSumm()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::has_data() const
{
    return vrf_name.is_set
	|| intfs_fwd_count.is_set
	|| local_lbls.is_set
	|| (pfxs !=  nullptr && pfxs->has_data())
	|| (nhs !=  nullptr && nhs->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(intfs_fwd_count.yfilter)
	|| ydk::is_set(local_lbls.yfilter)
	|| (pfxs !=  nullptr && pfxs->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/forwarding-vrf-summs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-vrf-summ" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (intfs_fwd_count.is_set || is_set(intfs_fwd_count.yfilter)) leaf_name_data.push_back(intfs_fwd_count.get_name_leafdata());
    if (local_lbls.is_set || is_set(local_lbls.yfilter)) leaf_name_data.push_back(local_lbls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs>();
        }
        return pfxs;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs>();
        }
        return nhs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfxs != nullptr)
    {
        children["pfxs"] = pfxs;
    }

    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count = value;
        intfs_fwd_count.value_namespace = name_space;
        intfs_fwd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lbls")
    {
        local_lbls = value;
        local_lbls.value_namespace = name_space;
        local_lbls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count.yfilter = yfilter;
    }
    if(value_path == "local-lbls")
    {
        local_lbls.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxs" || name == "nhs" || name == "vrf-name" || name == "intfs-fwd-count" || name == "local-lbls")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::Pfxs()
    :
    total_pfxs{YType::uint16, "total-pfxs"},
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup>())
{
    labeled_pfxs_aggr->parent = this;
    labeled_pfxs_primary->parent = this;
    labeled_pfxs_backup->parent = this;

    yang_name = "pfxs"; yang_parent_name = "forwarding-vrf-summ"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::~Pfxs()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::has_data() const
{
    return total_pfxs.is_set
	|| ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_pfxs.yfilter)
	|| ydk::is_set(ecmp_pfxs.yfilter)
	|| ydk::is_set(protected_pfxs.yfilter)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_pfxs.is_set || is_set(total_pfxs.yfilter)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());
    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.yfilter)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.yfilter)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr == nullptr)
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr>();
        }
        return labeled_pfxs_aggr;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labeled_pfxs_aggr != nullptr)
    {
        children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    if(labeled_pfxs_backup != nullptr)
    {
        children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
        total_pfxs.value_namespace = name_space;
        total_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
        ecmp_pfxs.value_namespace = name_space;
        ecmp_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
        protected_pfxs.value_namespace = name_space;
        protected_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-pfxs")
    {
        total_pfxs.yfilter = yfilter;
    }
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs.yfilter = yfilter;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs-aggr" || name == "labeled-pfxs-primary" || name == "labeled-pfxs-backup" || name == "total-pfxs" || name == "ecmp-pfxs" || name == "protected-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{

    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(labeled_pfxs.yfilter)
	|| ydk::is_set(labeled_pfxs_partial.yfilter)
	|| ydk::is_set(unlabeled_pfxs.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.yfilter)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.yfilter)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.yfilter)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
        labeled_pfxs.value_namespace = name_space;
        labeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
        labeled_pfxs_partial.value_namespace = name_space;
        labeled_pfxs_partial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
        unlabeled_pfxs.value_namespace = name_space;
        unlabeled_pfxs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs.yfilter = yfilter;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial.yfilter = yfilter;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled-pfxs" || name == "labeled-pfxs-partial" || name == "unlabeled-pfxs")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::Nhs()
    :
    total_paths{YType::uint32, "total-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    backup_paths{YType::uint32, "backup-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"}
{

    yang_name = "nhs"; yang_parent_name = "forwarding-vrf-summ"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::~Nhs()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::has_data() const
{
    return total_paths.is_set
	|| protected_paths.is_set
	|| backup_paths.is_set
	|| remote_backup_paths.is_set
	|| labeled_paths.is_set
	|| labeled_backup_paths.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(protected_paths.yfilter)
	|| ydk::is_set(backup_paths.yfilter)
	|| ydk::is_set(remote_backup_paths.yfilter)
	|| ydk::is_set(labeled_paths.yfilter)
	|| ydk::is_set(labeled_backup_paths.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.yfilter)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (backup_paths.is_set || is_set(backup_paths.yfilter)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.yfilter)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.yfilter)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.yfilter)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
        protected_paths.value_namespace = name_space;
        protected_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-paths")
    {
        backup_paths = value;
        backup_paths.value_namespace = name_space;
        backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
        remote_backup_paths.value_namespace = name_space;
        remote_backup_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
        labeled_paths.value_namespace = name_space;
        labeled_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
        labeled_backup_paths.value_namespace = name_space;
        labeled_backup_paths.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "protected-paths")
    {
        protected_paths.yfilter = yfilter;
    }
    if(value_path == "backup-paths")
    {
        backup_paths.yfilter = yfilter;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths.yfilter = yfilter;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-paths" || name == "protected-paths" || name == "backup-paths" || name == "remote-backup-paths" || name == "labeled-paths" || name == "labeled-backup-paths")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::ForwardingDetail()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    fwd_prefix{YType::str, "fwd-prefix"},
    table_id{YType::uint32, "table-id"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    route(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route>())
{
    route->parent = this;

    yang_name = "forwarding-detail"; yang_parent_name = "forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::~ForwardingDetail()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| prefix.is_set
	|| fwd_prefix.is_set
	|| table_id.is_set
	|| prefix_length.is_set
	|| (route !=  nullptr && route->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(fwd_prefix.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-detail" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (fwd_prefix.is_set || is_set(fwd_prefix.yfilter)) leaf_name_data.push_back(fwd_prefix.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route>();
        }
        return route;
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix = value;
        fwd_prefix.value_namespace = name_space;
        fwd_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "paths" || name == "vrf-name" || name == "prefix" || name == "fwd-prefix" || name == "table-id" || name == "prefix-length")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::Route()
    :
    version{YType::uint32, "version"},
    priority{YType::uint8, "priority"},
    source{YType::uint16, "source"},
    type{YType::uint16, "type"},
    metric{YType::uint32, "metric"},
    is_local_vrf_leaked{YType::boolean, "is-local-vrf-leaked"},
    routing_update_count{YType::uint32, "routing-update-count"},
    routing_update_timestamp{YType::uint64, "routing-update-timestamp"},
    routing_update_age{YType::uint64, "routing-update-age"},
    local_label{YType::uint32, "local-label"},
    forwarding_update_count{YType::uint32, "forwarding-update-count"},
    forwarding_update_timestamp{YType::uint64, "forwarding-update-timestamp"},
    forwarding_update_age{YType::uint64, "forwarding-update-age"}
{

    yang_name = "route"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::~Route()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::has_data() const
{
    return version.is_set
	|| priority.is_set
	|| source.is_set
	|| type.is_set
	|| metric.is_set
	|| is_local_vrf_leaked.is_set
	|| routing_update_count.is_set
	|| routing_update_timestamp.is_set
	|| routing_update_age.is_set
	|| local_label.is_set
	|| forwarding_update_count.is_set
	|| forwarding_update_timestamp.is_set
	|| forwarding_update_age.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(is_local_vrf_leaked.yfilter)
	|| ydk::is_set(routing_update_count.yfilter)
	|| ydk::is_set(routing_update_timestamp.yfilter)
	|| ydk::is_set(routing_update_age.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(forwarding_update_count.yfilter)
	|| ydk::is_set(forwarding_update_timestamp.yfilter)
	|| ydk::is_set(forwarding_update_age.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (is_local_vrf_leaked.is_set || is_set(is_local_vrf_leaked.yfilter)) leaf_name_data.push_back(is_local_vrf_leaked.get_name_leafdata());
    if (routing_update_count.is_set || is_set(routing_update_count.yfilter)) leaf_name_data.push_back(routing_update_count.get_name_leafdata());
    if (routing_update_timestamp.is_set || is_set(routing_update_timestamp.yfilter)) leaf_name_data.push_back(routing_update_timestamp.get_name_leafdata());
    if (routing_update_age.is_set || is_set(routing_update_age.yfilter)) leaf_name_data.push_back(routing_update_age.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (forwarding_update_count.is_set || is_set(forwarding_update_count.yfilter)) leaf_name_data.push_back(forwarding_update_count.get_name_leafdata());
    if (forwarding_update_timestamp.is_set || is_set(forwarding_update_timestamp.yfilter)) leaf_name_data.push_back(forwarding_update_timestamp.get_name_leafdata());
    if (forwarding_update_age.is_set || is_set(forwarding_update_age.yfilter)) leaf_name_data.push_back(forwarding_update_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked = value;
        is_local_vrf_leaked.value_namespace = name_space;
        is_local_vrf_leaked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count = value;
        routing_update_count.value_namespace = name_space;
        routing_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp = value;
        routing_update_timestamp.value_namespace = name_space;
        routing_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age = value;
        routing_update_age.value_namespace = name_space;
        routing_update_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count = value;
        forwarding_update_count.value_namespace = name_space;
        forwarding_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp = value;
        forwarding_update_timestamp.value_namespace = name_space;
        forwarding_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age = value;
        forwarding_update_age.value_namespace = name_space;
        forwarding_update_age.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked.yfilter = yfilter;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count.yfilter = yfilter;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp.yfilter = yfilter;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count.yfilter = yfilter;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp.yfilter = yfilter;
    }
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "priority" || name == "source" || name == "type" || name == "metric" || name == "is-local-vrf-leaked" || name == "routing-update-count" || name == "routing-update-timestamp" || name == "routing-update-age" || name == "local-label" || name == "forwarding-update-count" || name == "forwarding-update-timestamp" || name == "forwarding-update-age")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Paths()
    :
    routing(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing>())
	,mpls(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls>())
{
    routing->parent = this;
    mpls->parent = this;

    yang_name = "paths"; yang_parent_name = "forwarding-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::~Paths()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::has_data() const
{
    return (routing !=  nullptr && routing->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::has_operation() const
{
    return is_set(yfilter)
	|| (routing !=  nullptr && routing->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing" || name == "mpls")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::Routing()
    :
    next_hop{YType::str, "next-hop"},
    remote_node_id{YType::str, "remote-node-id"},
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"},
    interface{YType::str, "interface"},
    nh_is_overriden{YType::empty, "nh-is-overriden"},
    nexthop_id{YType::uint32, "nexthop-id"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    load_metric{YType::uint32, "load-metric"},
    path_id{YType::uint8, "path-id"},
    bkup_path_id{YType::uint8, "bkup-path-id"},
    path_type{YType::identityref, "path-type"}
{

    yang_name = "routing"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::~Routing()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::has_data() const
{
    return next_hop.is_set
	|| remote_node_id.is_set
	|| has_remote_lfa_bkup.is_set
	|| interface.is_set
	|| nh_is_overriden.is_set
	|| nexthop_id.is_set
	|| next_hop_table_id.is_set
	|| load_metric.is_set
	|| path_id.is_set
	|| bkup_path_id.is_set
	|| path_type.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(has_remote_lfa_bkup.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nh_is_overriden.yfilter)
	|| ydk::is_set(nexthop_id.yfilter)
	|| ydk::is_set(next_hop_table_id.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(bkup_path_id.yfilter)
	|| ydk::is_set(path_type.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.yfilter)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nh_is_overriden.is_set || is_set(nh_is_overriden.yfilter)) leaf_name_data.push_back(nh_is_overriden.get_name_leafdata());
    if (nexthop_id.is_set || is_set(nexthop_id.yfilter)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.yfilter)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (bkup_path_id.is_set || is_set(bkup_path_id.yfilter)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
        has_remote_lfa_bkup.value_namespace = name_space;
        has_remote_lfa_bkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden = value;
        nh_is_overriden.value_namespace = name_space;
        nh_is_overriden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
        nexthop_id.value_namespace = name_space;
        nexthop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
        next_hop_table_id.value_namespace = name_space;
        next_hop_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
        bkup_path_id.value_namespace = name_space;
        bkup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden.yfilter = yfilter;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "bkup-path-id")
    {
        bkup_path_id.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "remote-node-id" || name == "has-remote-lfa-bkup" || name == "interface" || name == "nh-is-overriden" || name == "nexthop-id" || name == "next-hop-table-id" || name == "load-metric" || name == "path-id" || name == "bkup-path-id" || name == "path-type")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo>())
	,remote_lfa(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;
    remote_lfa->parent = this;

    yang_name = "mpls"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::~Mpls()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::has_data() const
{
    return (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa>();
        }
        return remote_lfa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_outgoing_info != nullptr)
    {
        children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "remote-lfa")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    out_label{YType::uint32, "out-label"},
    out_label_type{YType::identityref, "out-label-type"},
    out_label_owner{YType::identityref, "out-label-owner"},
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    return out_label.is_set
	|| out_label_type.is_set
	|| out_label_owner.is_set
	|| is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_peer_ldp_ident != nullptr)
    {
        children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "out-label" || name == "out-label-type" || name == "out-label-owner" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"}
{

    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
    	,
    mpls_outgoing_info(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::has_data() const
{
    return has_remote_lfa_bkup.is_set
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(has_remote_lfa_bkup.yfilter)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.yfilter)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info == nullptr)
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>();
        }
        return mpls_outgoing_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_outgoing_info != nullptr)
    {
        children["mpls-outgoing-info"] = mpls_outgoing_info;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
        has_remote_lfa_bkup.value_namespace = name_space;
        has_remote_lfa_bkup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-outgoing-info" || name == "has-remote-lfa-bkup")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    out_label{YType::uint32, "out-label"},
    out_label_type{YType::identityref, "out-label-type"},
    out_label_owner{YType::identityref, "out-label-owner"},
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    return out_label.is_set
	|| out_label_type.is_set
	|| out_label_owner.is_set
	|| is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_label_type.yfilter)
	|| ydk::is_set(out_label_owner.yfilter)
	|| ydk::is_set(is_from_graceful_restartable_neighbor.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.yfilter)) leaf_name_data.push_back(out_label_type.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.yfilter)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.yfilter)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident == nullptr)
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent>();
        }
        return nexthop_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_peer_ldp_ident != nullptr)
    {
        children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
        out_label_type.value_namespace = name_space;
        out_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
        out_label_owner.value_namespace = name_space;
        out_label_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
        is_from_graceful_restartable_neighbor.value_namespace = name_space;
        is_from_graceful_restartable_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-label-type")
    {
        out_label_type.yfilter = yfilter;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner.yfilter = yfilter;
    }
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-peer-ldp-ident" || name == "out-label" || name == "out-label-type" || name == "out-label-owner" || name == "is-from-graceful-restartable-neighbor" || name == "is-stale")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"}
{

    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::Bindings()
    :
    bindings_sum_afs(std::make_shared<MplsLdp::MplsLdpState::Bindings::BindingsSumAfs>())
{
    bindings_sum_afs->parent = this;

    yang_name = "bindings"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Bindings::~Bindings()
{
}

bool MplsLdp::MplsLdpState::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return (bindings_sum_afs !=  nullptr && bindings_sum_afs->has_data());
}

bool MplsLdp::MplsLdpState::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bindings_sum_afs !=  nullptr && bindings_sum_afs->has_operation());
}

std::string MplsLdp::MplsLdpState::Bindings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bindings-sum-afs")
    {
        if(bindings_sum_afs == nullptr)
        {
            bindings_sum_afs = std::make_shared<MplsLdp::MplsLdpState::Bindings::BindingsSumAfs>();
        }
        return bindings_sum_afs;
    }

    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bindings_sum_afs != nullptr)
    {
        children["bindings-sum-afs"] = bindings_sum_afs;
    }

    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Bindings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Bindings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindings-sum-afs" || name == "binding")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingsSumAfs()
{

    yang_name = "bindings-sum-afs"; yang_parent_name = "bindings"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::~BindingsSumAfs()
{
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::has_data() const
{
    for (std::size_t index=0; index<binding_sum_af.size(); index++)
    {
        if(binding_sum_af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::has_operation() const
{
    for (std::size_t index=0; index<binding_sum_af.size(); index++)
    {
        if(binding_sum_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-sum-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sum-af")
    {
        for(auto const & c : binding_sum_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf>();
        c->parent = this;
        binding_sum_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding_sum_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sum-af")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::BindingSumAf()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    binding_total{YType::uint32, "binding-total"},
    binding_no_route{YType::uint32, "binding-no-route"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local{YType::uint32, "binding-local"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    binding_remote{YType::uint32, "binding-remote"}
{

    yang_name = "binding-sum-af"; yang_parent_name = "bindings-sum-afs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::~BindingSumAf()
{
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::has_data() const
{
    return vrf_name.is_set
	|| af_name.is_set
	|| binding_total.is_set
	|| binding_no_route.is_set
	|| binding_local_no_route.is_set
	|| binding_local.is_set
	|| binding_local_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_non_null.is_set
	|| binding_local_oor.is_set
	|| lowest_allocated_label.is_set
	|| highest_allocated_label.is_set
	|| binding_remote.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(binding_total.yfilter)
	|| ydk::is_set(binding_no_route.yfilter)
	|| ydk::is_set(binding_local_no_route.yfilter)
	|| ydk::is_set(binding_local.yfilter)
	|| ydk::is_set(binding_local_null.yfilter)
	|| ydk::is_set(binding_local_implicit_null.yfilter)
	|| ydk::is_set(binding_local_explicit_null.yfilter)
	|| ydk::is_set(binding_local_non_null.yfilter)
	|| ydk::is_set(binding_local_oor.yfilter)
	|| ydk::is_set(lowest_allocated_label.yfilter)
	|| ydk::is_set(highest_allocated_label.yfilter)
	|| ydk::is_set(binding_remote.yfilter);
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/bindings-sum-afs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sum-af" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.yfilter)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.yfilter)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.yfilter)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.yfilter)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.yfilter)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.yfilter)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.yfilter)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.yfilter)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.yfilter)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.yfilter)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.yfilter)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.yfilter)) leaf_name_data.push_back(binding_remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
        binding_total.value_namespace = name_space;
        binding_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
        binding_no_route.value_namespace = name_space;
        binding_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
        binding_local_no_route.value_namespace = name_space;
        binding_local_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
        binding_local.value_namespace = name_space;
        binding_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
        binding_local_null.value_namespace = name_space;
        binding_local_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
        binding_local_implicit_null.value_namespace = name_space;
        binding_local_implicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
        binding_local_explicit_null.value_namespace = name_space;
        binding_local_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
        binding_local_non_null.value_namespace = name_space;
        binding_local_non_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
        binding_local_oor.value_namespace = name_space;
        binding_local_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
        lowest_allocated_label.value_namespace = name_space;
        lowest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
        highest_allocated_label.value_namespace = name_space;
        highest_allocated_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
        binding_remote.value_namespace = name_space;
        binding_remote.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "binding-total")
    {
        binding_total.yfilter = yfilter;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route.yfilter = yfilter;
    }
    if(value_path == "binding-local")
    {
        binding_local.yfilter = yfilter;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null.yfilter = yfilter;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor.yfilter = yfilter;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label.yfilter = yfilter;
    }
    if(value_path == "binding-remote")
    {
        binding_remote.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "af-name" || name == "binding-total" || name == "binding-no-route" || name == "binding-local-no-route" || name == "binding-local" || name == "binding-local-null" || name == "binding-local-implicit-null" || name == "binding-local-explicit-null" || name == "binding-local-non-null" || name == "binding-local-oor" || name == "lowest-allocated-label" || name == "highest-allocated-label" || name == "binding-remote")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::Binding::Binding()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    fwd_prefix{YType::str, "fwd-prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    local_label{YType::uint32, "local-label"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    advertise_prefix_filter{YType::str, "advertise-prefix-filter"},
    advertise_lsr_filter{YType::str, "advertise-lsr-filter"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"}
{

    yang_name = "binding"; yang_parent_name = "bindings"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Bindings::Binding::~Binding()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| prefix.is_set
	|| fwd_prefix.is_set
	|| prefix_length.is_set
	|| local_label.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| advertise_prefix_filter.is_set
	|| advertise_lsr_filter.is_set
	|| config_enforced_local_label_value.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(fwd_prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(le_local_binding_revision.yfilter)
	|| ydk::is_set(le_local_label_state.yfilter)
	|| ydk::is_set(is_no_route.yfilter)
	|| ydk::is_set(label_oor.yfilter)
	|| ydk::is_set(advertise_prefix_filter.yfilter)
	|| ydk::is_set(advertise_lsr_filter.yfilter)
	|| ydk::is_set(config_enforced_local_label_value.yfilter);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (fwd_prefix.is_set || is_set(fwd_prefix.yfilter)) leaf_name_data.push_back(fwd_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.yfilter)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.yfilter)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.yfilter)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.yfilter)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (advertise_prefix_filter.is_set || is_set(advertise_prefix_filter.yfilter)) leaf_name_data.push_back(advertise_prefix_filter.get_name_leafdata());
    if (advertise_lsr_filter.is_set || is_set(advertise_lsr_filter.yfilter)) leaf_name_data.push_back(advertise_lsr_filter.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.yfilter)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-binding")
    {
        for(auto const & c : remote_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding>();
        c->parent = this;
        remote_binding.push_back(c);
        return c;
    }

    if(child_yang_name == "peers-advertised-to")
    {
        for(auto const & c : peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo>();
        c->parent = this;
        peers_advertised_to.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_binding)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix = value;
        fwd_prefix.value_namespace = name_space;
        fwd_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
        le_local_binding_revision.value_namespace = name_space;
        le_local_binding_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
        le_local_label_state.value_namespace = name_space;
        le_local_label_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
        is_no_route.value_namespace = name_space;
        is_no_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
        label_oor.value_namespace = name_space;
        label_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-prefix-filter")
    {
        advertise_prefix_filter = value;
        advertise_prefix_filter.value_namespace = name_space;
        advertise_prefix_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-lsr-filter")
    {
        advertise_lsr_filter = value;
        advertise_lsr_filter.value_namespace = name_space;
        advertise_lsr_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
        config_enforced_local_label_value.value_namespace = name_space;
        config_enforced_local_label_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Bindings::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision.yfilter = yfilter;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state.yfilter = yfilter;
    }
    if(value_path == "is-no-route")
    {
        is_no_route.yfilter = yfilter;
    }
    if(value_path == "label-oor")
    {
        label_oor.yfilter = yfilter;
    }
    if(value_path == "advertise-prefix-filter")
    {
        advertise_prefix_filter.yfilter = yfilter;
    }
    if(value_path == "advertise-lsr-filter")
    {
        advertise_lsr_filter.yfilter = yfilter;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Bindings::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-binding" || name == "peers-advertised-to" || name == "vrf-name" || name == "prefix" || name == "fwd-prefix" || name == "prefix-length" || name == "local-label" || name == "le-local-binding-revision" || name == "le-local-label-state" || name == "is-no-route" || name == "label-oor" || name == "advertise-prefix-filter" || name == "advertise-lsr-filter" || name == "config-enforced-local-label-value")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    remote_label{YType::uint32, "remote-label"},
    is_stale{YType::boolean, "is-stale"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;

    yang_name = "remote-binding"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::has_data() const
{
    return remote_label.is_set
	|| is_stale.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident == nullptr)
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
        }
        return assigning_peer_ldp_ident;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assigning_peer_ldp_ident != nullptr)
    {
        children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assigning-peer-ldp-ident" || name == "remote-label" || name == "is-stale")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"}
{

    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint16, "label-space-id"}
{

    yang_name = "peers-advertised-to"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbors()
    :
    stats_info(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo>())
	,backoffs(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Backoffs>())
	,nsr_nbr_detail(std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail>())
{
    stats_info->parent = this;
    backoffs->parent = this;
    nsr_nbr_detail->parent = this;

    yang_name = "neighbors"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::~Neighbors()
{
}

bool MplsLdp::MplsLdpState::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nbr_adjs.size(); index++)
    {
        if(nbr_adjs[index]->has_data())
            return true;
    }
    return (stats_info !=  nullptr && stats_info->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (nsr_nbr_detail !=  nullptr && nsr_nbr_detail->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nbr_adjs.size(); index++)
    {
        if(nbr_adjs[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (stats_info !=  nullptr && stats_info->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (nsr_nbr_detail !=  nullptr && nsr_nbr_detail->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "nbr-adjs")
    {
        for(auto const & c : nbr_adjs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Neighbors::NbrAdjs>();
        c->parent = this;
        nbr_adjs.push_back(c);
        return c;
    }

    if(child_yang_name == "stats-info")
    {
        if(stats_info == nullptr)
        {
            stats_info = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo>();
        }
        return stats_info;
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs == nullptr)
        {
            backoffs = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Backoffs>();
        }
        return backoffs;
    }

    if(child_yang_name == "nsr-nbr-detail")
    {
        if(nsr_nbr_detail == nullptr)
        {
            nsr_nbr_detail = std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail>();
        }
        return nsr_nbr_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nbr_adjs)
    {
        children[c->get_segment_path()] = c;
    }

    if(stats_info != nullptr)
    {
        children["stats-info"] = stats_info;
    }

    if(backoffs != nullptr)
    {
        children["backoffs"] = backoffs;
    }

    if(nsr_nbr_detail != nullptr)
    {
        children["nsr-nbr-detail"] = nsr_nbr_detail;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "nbr-adjs" || name == "stats-info" || name == "backoffs" || name == "nsr-nbr-detail")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Neighbor()
    :
    vrf_name{YType::str, "vrf-name"},
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    session_role{YType::enumeration, "session-role"},
    session_prot_ver{YType::uint32, "session-prot-ver"},
    up_time_seconds{YType::uint32, "up-time-seconds"},
    nbr_path_vector_limit{YType::int32, "nbr-path-vector-limit"},
    downstream_on_demand{YType::boolean, "downstream-on-demand"},
    peer_hold_time{YType::uint32, "peer-hold-time"},
    peer_keep_alive_interval{YType::uint32, "peer-keep-alive-interval"},
    peer_state{YType::enumeration, "peer-state"},
    inbound_ipv4{YType::str, "inbound-ipv4"},
    inbound_ipv6_filter{YType::str, "inbound-ipv6-filter"},
    outbound_ipv4_filter{YType::str, "outbound-ipv4-filter"},
    outbound_ipv6_filter{YType::str, "outbound-ipv6-filter"},
    has_sp{YType::boolean, "has-sp"},
    sp_state{YType::str, "sp-state"},
    sp_filter{YType::str, "sp-filter"},
    sp_has_duration{YType::boolean, "sp-has-duration"},
    sp_duration{YType::uint32, "sp-duration"},
    spht_running{YType::boolean, "spht-running"},
    spht_remaining{YType::uint32, "spht-remaining"},
    bgp_advertisement_state{YType::enumeration, "bgp-advertisement-state"},
    advertise_bgp_prefixes{YType::boolean, "advertise-bgp-prefixes"},
    client{YType::str, "client"},
    duplicate_address{YType::str, "duplicate-address"},
    nbr_bound_address{YType::str, "nbr-bound-address"}
    	,
    nbr_stats(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats>())
	,graceful_restart_adjacency(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency>())
	,tcp_information(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation>())
	,capabilities(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities>())
{
    nbr_stats->parent = this;
    graceful_restart_adjacency->parent = this;
    tcp_information->parent = this;
    capabilities->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::has_data() const
{
    for (auto const & leaf : client.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : duplicate_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : nbr_bound_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vrf_name.is_set
	|| lsr_id.is_set
	|| label_space_id.is_set
	|| session_role.is_set
	|| session_prot_ver.is_set
	|| up_time_seconds.is_set
	|| nbr_path_vector_limit.is_set
	|| downstream_on_demand.is_set
	|| peer_hold_time.is_set
	|| peer_keep_alive_interval.is_set
	|| peer_state.is_set
	|| inbound_ipv4.is_set
	|| inbound_ipv6_filter.is_set
	|| outbound_ipv4_filter.is_set
	|| outbound_ipv6_filter.is_set
	|| has_sp.is_set
	|| sp_state.is_set
	|| sp_filter.is_set
	|| sp_has_duration.is_set
	|| sp_duration.is_set
	|| spht_running.is_set
	|| spht_remaining.is_set
	|| bgp_advertisement_state.is_set
	|| advertise_bgp_prefixes.is_set
	|| (nbr_stats !=  nullptr && nbr_stats->has_data())
	|| (graceful_restart_adjacency !=  nullptr && graceful_restart_adjacency->has_data())
	|| (tcp_information !=  nullptr && tcp_information->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::has_operation() const
{
    for (auto const & leaf : client.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : duplicate_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : nbr_bound_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(session_role.yfilter)
	|| ydk::is_set(session_prot_ver.yfilter)
	|| ydk::is_set(up_time_seconds.yfilter)
	|| ydk::is_set(nbr_path_vector_limit.yfilter)
	|| ydk::is_set(downstream_on_demand.yfilter)
	|| ydk::is_set(peer_hold_time.yfilter)
	|| ydk::is_set(peer_keep_alive_interval.yfilter)
	|| ydk::is_set(peer_state.yfilter)
	|| ydk::is_set(inbound_ipv4.yfilter)
	|| ydk::is_set(inbound_ipv6_filter.yfilter)
	|| ydk::is_set(outbound_ipv4_filter.yfilter)
	|| ydk::is_set(outbound_ipv6_filter.yfilter)
	|| ydk::is_set(has_sp.yfilter)
	|| ydk::is_set(sp_state.yfilter)
	|| ydk::is_set(sp_filter.yfilter)
	|| ydk::is_set(sp_has_duration.yfilter)
	|| ydk::is_set(sp_duration.yfilter)
	|| ydk::is_set(spht_running.yfilter)
	|| ydk::is_set(spht_remaining.yfilter)
	|| ydk::is_set(bgp_advertisement_state.yfilter)
	|| ydk::is_set(advertise_bgp_prefixes.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(duplicate_address.yfilter)
	|| ydk::is_set(nbr_bound_address.yfilter)
	|| (nbr_stats !=  nullptr && nbr_stats->has_operation())
	|| (graceful_restart_adjacency !=  nullptr && graceful_restart_adjacency->has_operation())
	|| (tcp_information !=  nullptr && tcp_information->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[vrf-name='" <<vrf_name <<"']" <<"[lsr-id='" <<lsr_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (session_role.is_set || is_set(session_role.yfilter)) leaf_name_data.push_back(session_role.get_name_leafdata());
    if (session_prot_ver.is_set || is_set(session_prot_ver.yfilter)) leaf_name_data.push_back(session_prot_ver.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.yfilter)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());
    if (nbr_path_vector_limit.is_set || is_set(nbr_path_vector_limit.yfilter)) leaf_name_data.push_back(nbr_path_vector_limit.get_name_leafdata());
    if (downstream_on_demand.is_set || is_set(downstream_on_demand.yfilter)) leaf_name_data.push_back(downstream_on_demand.get_name_leafdata());
    if (peer_hold_time.is_set || is_set(peer_hold_time.yfilter)) leaf_name_data.push_back(peer_hold_time.get_name_leafdata());
    if (peer_keep_alive_interval.is_set || is_set(peer_keep_alive_interval.yfilter)) leaf_name_data.push_back(peer_keep_alive_interval.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.yfilter)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (inbound_ipv4.is_set || is_set(inbound_ipv4.yfilter)) leaf_name_data.push_back(inbound_ipv4.get_name_leafdata());
    if (inbound_ipv6_filter.is_set || is_set(inbound_ipv6_filter.yfilter)) leaf_name_data.push_back(inbound_ipv6_filter.get_name_leafdata());
    if (outbound_ipv4_filter.is_set || is_set(outbound_ipv4_filter.yfilter)) leaf_name_data.push_back(outbound_ipv4_filter.get_name_leafdata());
    if (outbound_ipv6_filter.is_set || is_set(outbound_ipv6_filter.yfilter)) leaf_name_data.push_back(outbound_ipv6_filter.get_name_leafdata());
    if (has_sp.is_set || is_set(has_sp.yfilter)) leaf_name_data.push_back(has_sp.get_name_leafdata());
    if (sp_state.is_set || is_set(sp_state.yfilter)) leaf_name_data.push_back(sp_state.get_name_leafdata());
    if (sp_filter.is_set || is_set(sp_filter.yfilter)) leaf_name_data.push_back(sp_filter.get_name_leafdata());
    if (sp_has_duration.is_set || is_set(sp_has_duration.yfilter)) leaf_name_data.push_back(sp_has_duration.get_name_leafdata());
    if (sp_duration.is_set || is_set(sp_duration.yfilter)) leaf_name_data.push_back(sp_duration.get_name_leafdata());
    if (spht_running.is_set || is_set(spht_running.yfilter)) leaf_name_data.push_back(spht_running.get_name_leafdata());
    if (spht_remaining.is_set || is_set(spht_remaining.yfilter)) leaf_name_data.push_back(spht_remaining.get_name_leafdata());
    if (bgp_advertisement_state.is_set || is_set(bgp_advertisement_state.yfilter)) leaf_name_data.push_back(bgp_advertisement_state.get_name_leafdata());
    if (advertise_bgp_prefixes.is_set || is_set(advertise_bgp_prefixes.yfilter)) leaf_name_data.push_back(advertise_bgp_prefixes.get_name_leafdata());

    auto client_name_datas = client.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), client_name_datas.begin(), client_name_datas.end());
    auto duplicate_address_name_datas = duplicate_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), duplicate_address_name_datas.begin(), duplicate_address_name_datas.end());
    auto nbr_bound_address_name_datas = nbr_bound_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbr_bound_address_name_datas.begin(), nbr_bound_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-stats")
    {
        if(nbr_stats == nullptr)
        {
            nbr_stats = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats>();
        }
        return nbr_stats;
    }

    if(child_yang_name == "graceful-restart-adjacency")
    {
        if(graceful_restart_adjacency == nullptr)
        {
            graceful_restart_adjacency = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency>();
        }
        return graceful_restart_adjacency;
    }

    if(child_yang_name == "tcp-information")
    {
        if(tcp_information == nullptr)
        {
            tcp_information = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation>();
        }
        return tcp_information;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities>();
        }
        return capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbr_stats != nullptr)
    {
        children["nbr-stats"] = nbr_stats;
    }

    if(graceful_restart_adjacency != nullptr)
    {
        children["graceful-restart-adjacency"] = graceful_restart_adjacency;
    }

    if(tcp_information != nullptr)
    {
        children["tcp-information"] = tcp_information;
    }

    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-role")
    {
        session_role = value;
        session_role.value_namespace = name_space;
        session_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-prot-ver")
    {
        session_prot_ver = value;
        session_prot_ver.value_namespace = name_space;
        session_prot_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
        up_time_seconds.value_namespace = name_space;
        up_time_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-path-vector-limit")
    {
        nbr_path_vector_limit = value;
        nbr_path_vector_limit.value_namespace = name_space;
        nbr_path_vector_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand = value;
        downstream_on_demand.value_namespace = name_space;
        downstream_on_demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-hold-time")
    {
        peer_hold_time = value;
        peer_hold_time.value_namespace = name_space;
        peer_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-keep-alive-interval")
    {
        peer_keep_alive_interval = value;
        peer_keep_alive_interval.value_namespace = name_space;
        peer_keep_alive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
        peer_state.value_namespace = name_space;
        peer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-ipv4")
    {
        inbound_ipv4 = value;
        inbound_ipv4.value_namespace = name_space;
        inbound_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-ipv6-filter")
    {
        inbound_ipv6_filter = value;
        inbound_ipv6_filter.value_namespace = name_space;
        inbound_ipv6_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-ipv4-filter")
    {
        outbound_ipv4_filter = value;
        outbound_ipv4_filter.value_namespace = name_space;
        outbound_ipv4_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-ipv6-filter")
    {
        outbound_ipv6_filter = value;
        outbound_ipv6_filter.value_namespace = name_space;
        outbound_ipv6_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-sp")
    {
        has_sp = value;
        has_sp.value_namespace = name_space;
        has_sp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-state")
    {
        sp_state = value;
        sp_state.value_namespace = name_space;
        sp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-filter")
    {
        sp_filter = value;
        sp_filter.value_namespace = name_space;
        sp_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration = value;
        sp_has_duration.value_namespace = name_space;
        sp_has_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-duration")
    {
        sp_duration = value;
        sp_duration.value_namespace = name_space;
        sp_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spht-running")
    {
        spht_running = value;
        spht_running.value_namespace = name_space;
        spht_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining = value;
        spht_remaining.value_namespace = name_space;
        spht_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state = value;
        bgp_advertisement_state.value_namespace = name_space;
        bgp_advertisement_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes = value;
        advertise_bgp_prefixes.value_namespace = name_space;
        advertise_bgp_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client.append(value);
    }
    if(value_path == "duplicate-address")
    {
        duplicate_address.append(value);
    }
    if(value_path == "nbr-bound-address")
    {
        nbr_bound_address.append(value);
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "session-role")
    {
        session_role.yfilter = yfilter;
    }
    if(value_path == "session-prot-ver")
    {
        session_prot_ver.yfilter = yfilter;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds.yfilter = yfilter;
    }
    if(value_path == "nbr-path-vector-limit")
    {
        nbr_path_vector_limit.yfilter = yfilter;
    }
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand.yfilter = yfilter;
    }
    if(value_path == "peer-hold-time")
    {
        peer_hold_time.yfilter = yfilter;
    }
    if(value_path == "peer-keep-alive-interval")
    {
        peer_keep_alive_interval.yfilter = yfilter;
    }
    if(value_path == "peer-state")
    {
        peer_state.yfilter = yfilter;
    }
    if(value_path == "inbound-ipv4")
    {
        inbound_ipv4.yfilter = yfilter;
    }
    if(value_path == "inbound-ipv6-filter")
    {
        inbound_ipv6_filter.yfilter = yfilter;
    }
    if(value_path == "outbound-ipv4-filter")
    {
        outbound_ipv4_filter.yfilter = yfilter;
    }
    if(value_path == "outbound-ipv6-filter")
    {
        outbound_ipv6_filter.yfilter = yfilter;
    }
    if(value_path == "has-sp")
    {
        has_sp.yfilter = yfilter;
    }
    if(value_path == "sp-state")
    {
        sp_state.yfilter = yfilter;
    }
    if(value_path == "sp-filter")
    {
        sp_filter.yfilter = yfilter;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration.yfilter = yfilter;
    }
    if(value_path == "sp-duration")
    {
        sp_duration.yfilter = yfilter;
    }
    if(value_path == "spht-running")
    {
        spht_running.yfilter = yfilter;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining.yfilter = yfilter;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state.yfilter = yfilter;
    }
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "duplicate-address")
    {
        duplicate_address.yfilter = yfilter;
    }
    if(value_path == "nbr-bound-address")
    {
        nbr_bound_address.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-stats" || name == "graceful-restart-adjacency" || name == "tcp-information" || name == "capabilities" || name == "vrf-name" || name == "lsr-id" || name == "label-space-id" || name == "session-role" || name == "session-prot-ver" || name == "up-time-seconds" || name == "nbr-path-vector-limit" || name == "downstream-on-demand" || name == "peer-hold-time" || name == "peer-keep-alive-interval" || name == "peer-state" || name == "inbound-ipv4" || name == "inbound-ipv6-filter" || name == "outbound-ipv4-filter" || name == "outbound-ipv6-filter" || name == "has-sp" || name == "sp-state" || name == "sp-filter" || name == "sp-has-duration" || name == "sp-duration" || name == "spht-running" || name == "spht-remaining" || name == "bgp-advertisement-state" || name == "advertise-bgp-prefixes" || name == "client" || name == "duplicate-address" || name == "nbr-bound-address")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::NbrStats()
    :
    ta_pies_sent{YType::uint32, "ta-pies-sent"},
    ta_pies_rcvd{YType::uint32, "ta-pies-rcvd"},
    num_of_nbr_ipv4_discovery{YType::uint32, "num-of-nbr-ipv4-discovery"},
    num_of_nbr_ipv6_discovery{YType::uint32, "num-of-nbr-ipv6-discovery"},
    num_of_nbr_ipv4_addresses{YType::uint32, "num-of-nbr-ipv4-addresses"},
    num_of_nbr_ipv6_addresses{YType::uint32, "num-of-nbr-ipv6-addresses"},
    num_of_nbr_ipv4_lbl{YType::uint32, "num-of-nbr-ipv4-lbl"},
    num_of_nbr_ipv6_lbl{YType::uint32, "num-of-nbr-ipv6-lbl"}
{

    yang_name = "nbr-stats"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::~NbrStats()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::has_data() const
{
    return ta_pies_sent.is_set
	|| ta_pies_rcvd.is_set
	|| num_of_nbr_ipv4_discovery.is_set
	|| num_of_nbr_ipv6_discovery.is_set
	|| num_of_nbr_ipv4_addresses.is_set
	|| num_of_nbr_ipv6_addresses.is_set
	|| num_of_nbr_ipv4_lbl.is_set
	|| num_of_nbr_ipv6_lbl.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ta_pies_sent.yfilter)
	|| ydk::is_set(ta_pies_rcvd.yfilter)
	|| ydk::is_set(num_of_nbr_ipv4_discovery.yfilter)
	|| ydk::is_set(num_of_nbr_ipv6_discovery.yfilter)
	|| ydk::is_set(num_of_nbr_ipv4_addresses.yfilter)
	|| ydk::is_set(num_of_nbr_ipv6_addresses.yfilter)
	|| ydk::is_set(num_of_nbr_ipv4_lbl.yfilter)
	|| ydk::is_set(num_of_nbr_ipv6_lbl.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ta_pies_sent.is_set || is_set(ta_pies_sent.yfilter)) leaf_name_data.push_back(ta_pies_sent.get_name_leafdata());
    if (ta_pies_rcvd.is_set || is_set(ta_pies_rcvd.yfilter)) leaf_name_data.push_back(ta_pies_rcvd.get_name_leafdata());
    if (num_of_nbr_ipv4_discovery.is_set || is_set(num_of_nbr_ipv4_discovery.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv4_discovery.get_name_leafdata());
    if (num_of_nbr_ipv6_discovery.is_set || is_set(num_of_nbr_ipv6_discovery.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv6_discovery.get_name_leafdata());
    if (num_of_nbr_ipv4_addresses.is_set || is_set(num_of_nbr_ipv4_addresses.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv4_addresses.get_name_leafdata());
    if (num_of_nbr_ipv6_addresses.is_set || is_set(num_of_nbr_ipv6_addresses.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv6_addresses.get_name_leafdata());
    if (num_of_nbr_ipv4_lbl.is_set || is_set(num_of_nbr_ipv4_lbl.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv4_lbl.get_name_leafdata());
    if (num_of_nbr_ipv6_lbl.is_set || is_set(num_of_nbr_ipv6_lbl.yfilter)) leaf_name_data.push_back(num_of_nbr_ipv6_lbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent = value;
        ta_pies_sent.value_namespace = name_space;
        ta_pies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd = value;
        ta_pies_rcvd.value_namespace = name_space;
        ta_pies_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv4-discovery")
    {
        num_of_nbr_ipv4_discovery = value;
        num_of_nbr_ipv4_discovery.value_namespace = name_space;
        num_of_nbr_ipv4_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv6-discovery")
    {
        num_of_nbr_ipv6_discovery = value;
        num_of_nbr_ipv6_discovery.value_namespace = name_space;
        num_of_nbr_ipv6_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv4-addresses")
    {
        num_of_nbr_ipv4_addresses = value;
        num_of_nbr_ipv4_addresses.value_namespace = name_space;
        num_of_nbr_ipv4_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv6-addresses")
    {
        num_of_nbr_ipv6_addresses = value;
        num_of_nbr_ipv6_addresses.value_namespace = name_space;
        num_of_nbr_ipv6_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv4-lbl")
    {
        num_of_nbr_ipv4_lbl = value;
        num_of_nbr_ipv4_lbl.value_namespace = name_space;
        num_of_nbr_ipv4_lbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nbr-ipv6-lbl")
    {
        num_of_nbr_ipv6_lbl = value;
        num_of_nbr_ipv6_lbl.value_namespace = name_space;
        num_of_nbr_ipv6_lbl.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent.yfilter = yfilter;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv4-discovery")
    {
        num_of_nbr_ipv4_discovery.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv6-discovery")
    {
        num_of_nbr_ipv6_discovery.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv4-addresses")
    {
        num_of_nbr_ipv4_addresses.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv6-addresses")
    {
        num_of_nbr_ipv6_addresses.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv4-lbl")
    {
        num_of_nbr_ipv4_lbl.yfilter = yfilter;
    }
    if(value_path == "num-of-nbr-ipv6-lbl")
    {
        num_of_nbr_ipv6_lbl.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ta-pies-sent" || name == "ta-pies-rcvd" || name == "num-of-nbr-ipv4-discovery" || name == "num-of-nbr-ipv6-discovery" || name == "num-of-nbr-ipv4-addresses" || name == "num-of-nbr-ipv6-addresses" || name == "num-of-nbr-ipv4-lbl" || name == "num-of-nbr-ipv6-lbl")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::GracefulRestartAdjacency()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    recovery_time{YType::uint32, "recovery-time"},
    is_liveness_timer_running{YType::empty, "is-liveness-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    is_recovery_timer_running{YType::empty, "is-recovery-timer-running"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"},
    down_nbr_flap_count{YType::uint32, "down-nbr-flap-count"},
    down_nbr_down_reason{YType::identityref, "down-nbr-down-reason"}
{

    yang_name = "graceful-restart-adjacency"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::~GracefulRestartAdjacency()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::has_data() const
{
    return is_graceful_restartable.is_set
	|| reconnect_timeout.is_set
	|| recovery_time.is_set
	|| is_liveness_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| is_recovery_timer_running.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| down_nbr_flap_count.is_set
	|| down_nbr_down_reason.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restartable.yfilter)
	|| ydk::is_set(reconnect_timeout.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(is_liveness_timer_running.yfilter)
	|| ydk::is_set(liveness_timer_remaining_seconds.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(recovery_timer_remaining_seconds.yfilter)
	|| ydk::is_set(down_nbr_flap_count.yfilter)
	|| ydk::is_set(down_nbr_down_reason.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.yfilter)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.yfilter)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.yfilter)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.yfilter)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.yfilter)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.yfilter)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
        is_graceful_restartable.value_namespace = name_space;
        is_graceful_restartable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
        reconnect_timeout.value_namespace = name_space;
        reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
        is_liveness_timer_running.value_namespace = name_space;
        is_liveness_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
        liveness_timer_remaining_seconds.value_namespace = name_space;
        liveness_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
        recovery_timer_remaining_seconds.value_namespace = name_space;
        recovery_timer_remaining_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
        down_nbr_flap_count.value_namespace = name_space;
        down_nbr_flap_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
        down_nbr_down_reason.value_namespace = name_space;
        down_nbr_down_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable.yfilter = yfilter;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running.yfilter = yfilter;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds.yfilter = yfilter;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count.yfilter = yfilter;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-graceful-restartable" || name == "reconnect-timeout" || name == "recovery-time" || name == "is-liveness-timer-running" || name == "liveness-timer-remaining-seconds" || name == "is-recovery-timer-running" || name == "recovery-timer-remaining-seconds" || name == "down-nbr-flap-count" || name == "down-nbr-down-reason")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::TcpInformation()
    :
    foreign_host{YType::str, "foreign-host"},
    local_host{YType::str, "local-host"},
    foreign_port{YType::uint16, "foreign-port"},
    local_port{YType::uint16, "local-port"},
    is_md5_on{YType::boolean, "is-md5-on"},
    up_time{YType::str, "up-time"}
{

    yang_name = "tcp-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::~TcpInformation()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::has_data() const
{
    return foreign_host.is_set
	|| local_host.is_set
	|| foreign_port.is_set
	|| local_port.is_set
	|| is_md5_on.is_set
	|| up_time.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foreign_host.yfilter)
	|| ydk::is_set(local_host.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(is_md5_on.yfilter)
	|| ydk::is_set(up_time.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_host.is_set || is_set(foreign_host.yfilter)) leaf_name_data.push_back(foreign_host.get_name_leafdata());
    if (local_host.is_set || is_set(local_host.yfilter)) leaf_name_data.push_back(local_host.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (is_md5_on.is_set || is_set(is_md5_on.yfilter)) leaf_name_data.push_back(is_md5_on.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreign-host")
    {
        foreign_host = value;
        foreign_host.value_namespace = name_space;
        foreign_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-host")
    {
        local_host = value;
        local_host.value_namespace = name_space;
        local_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on = value;
        is_md5_on.value_namespace = name_space;
        is_md5_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreign-host")
    {
        foreign_host.yfilter = yfilter;
    }
    if(value_path == "local-host")
    {
        local_host.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-host" || name == "local-host" || name == "foreign-port" || name == "local-port" || name == "is-md5-on" || name == "up-time")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::Capabilities()
{

    yang_name = "capabilities"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::~Capabilities()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::has_data() const
{
    for (std::size_t index=0; index<sent_caps.size(); index++)
    {
        if(sent_caps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<received_caps.size(); index++)
    {
        if(received_caps[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<sent_caps.size(); index++)
    {
        if(sent_caps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<received_caps.size(); index++)
    {
        if(received_caps[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent-caps")
    {
        for(auto const & c : sent_caps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps>();
        c->parent = this;
        sent_caps.push_back(c);
        return c;
    }

    if(child_yang_name == "received-caps")
    {
        for(auto const & c : received_caps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps>();
        c->parent = this;
        received_caps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sent_caps)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : received_caps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-caps" || name == "received-caps")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::SentCaps()
    :
    cap_type{YType::uint16, "cap-type"},
    cap_des{YType::str, "cap-des"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "sent-caps"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::~SentCaps()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::has_data() const
{
    return cap_type.is_set
	|| cap_des.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cap_type.yfilter)
	|| ydk::is_set(cap_des.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent-caps" <<"[cap-type='" <<cap_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.yfilter)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.yfilter)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
        cap_type.value_namespace = name_space;
        cap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
        cap_des.value_namespace = name_space;
        cap_des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cap-type")
    {
        cap_type.yfilter = yfilter;
    }
    if(value_path == "cap-des")
    {
        cap_des.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cap-type" || name == "cap-des" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::ReceivedCaps()
    :
    cap_type{YType::uint16, "cap-type"},
    cap_des{YType::str, "cap-des"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_data{YType::str, "capability-data"}
{

    yang_name = "received-caps"; yang_parent_name = "capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::~ReceivedCaps()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::has_data() const
{
    return cap_type.is_set
	|| cap_des.is_set
	|| capability_data_length.is_set
	|| capability_data.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cap_type.yfilter)
	|| ydk::is_set(cap_des.yfilter)
	|| ydk::is_set(capability_data_length.yfilter)
	|| ydk::is_set(capability_data.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-caps" <<"[cap-type='" <<cap_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.yfilter)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.yfilter)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.yfilter)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.yfilter)) leaf_name_data.push_back(capability_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
        cap_type.value_namespace = name_space;
        cap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
        cap_des.value_namespace = name_space;
        cap_des.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
        capability_data_length.value_namespace = name_space;
        capability_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
        capability_data.value_namespace = name_space;
        capability_data.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cap-type")
    {
        cap_type.yfilter = yfilter;
    }
    if(value_path == "cap-des")
    {
        cap_des.yfilter = yfilter;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length.yfilter = yfilter;
    }
    if(value_path == "capability-data")
    {
        capability_data.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cap-type" || name == "cap-des" || name == "capability-data-length" || name == "capability-data")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::NbrAdjs::NbrAdjs()
    :
    interface{YType::str, "interface"},
    local_address{YType::str, "local-address"},
    target_address{YType::str, "target-address"},
    target_state{YType::enumeration, "target-state"}
{

    yang_name = "nbr-adjs"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::NbrAdjs::~NbrAdjs()
{
}

bool MplsLdp::MplsLdpState::Neighbors::NbrAdjs::has_data() const
{
    return interface.is_set
	|| local_address.is_set
	|| target_address.is_set
	|| target_state.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::NbrAdjs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_state.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-adjs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_state.is_set || is_set(target_state.yfilter)) leaf_name_data.push_back(target_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::NbrAdjs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-state")
    {
        target_state = value;
        target_state.value_namespace = name_space;
        target_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::NbrAdjs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-state")
    {
        target_state.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::NbrAdjs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "local-address" || name == "target-address" || name == "target-state")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::StatsInfo()
    :
    discon_time{YType::uint32, "discon-time"},
    session_attempts{YType::uint32, "session-attempts"},
    sess_reject_no_hello{YType::uint32, "sess-reject-no-hello"},
    sess_rej_ad{YType::uint32, "sess-rej-ad"},
    sess_rej_max_pdu{YType::uint32, "sess-rej-max-pdu"},
    sess_rej_lr{YType::uint32, "sess-rej-lr"},
    bad_ldpid{YType::uint32, "bad-ldpid"},
    bad_pdu_len{YType::uint32, "bad-pdu-len"},
    bad_msg_len{YType::uint32, "bad-msg-len"},
    bad_tlv_len{YType::uint32, "bad-tlv-len"},
    malformed_tlv_val{YType::uint32, "malformed-tlv-val"},
    keep_alive_exp{YType::uint32, "keep-alive-exp"},
    shutdown_notif_rec{YType::uint32, "shutdown-notif-rec"},
    shutdow_notif_sent{YType::uint32, "shutdow-notif-sent"}
    	,
    message_out(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut>())
	,message_in(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn>())
{
    message_out->parent = this;
    message_in->parent = this;

    yang_name = "stats-info"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::~StatsInfo()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::has_data() const
{
    return discon_time.is_set
	|| session_attempts.is_set
	|| sess_reject_no_hello.is_set
	|| sess_rej_ad.is_set
	|| sess_rej_max_pdu.is_set
	|| sess_rej_lr.is_set
	|| bad_ldpid.is_set
	|| bad_pdu_len.is_set
	|| bad_msg_len.is_set
	|| bad_tlv_len.is_set
	|| malformed_tlv_val.is_set
	|| keep_alive_exp.is_set
	|| shutdown_notif_rec.is_set
	|| shutdow_notif_sent.is_set
	|| (message_out !=  nullptr && message_out->has_data())
	|| (message_in !=  nullptr && message_in->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discon_time.yfilter)
	|| ydk::is_set(session_attempts.yfilter)
	|| ydk::is_set(sess_reject_no_hello.yfilter)
	|| ydk::is_set(sess_rej_ad.yfilter)
	|| ydk::is_set(sess_rej_max_pdu.yfilter)
	|| ydk::is_set(sess_rej_lr.yfilter)
	|| ydk::is_set(bad_ldpid.yfilter)
	|| ydk::is_set(bad_pdu_len.yfilter)
	|| ydk::is_set(bad_msg_len.yfilter)
	|| ydk::is_set(bad_tlv_len.yfilter)
	|| ydk::is_set(malformed_tlv_val.yfilter)
	|| ydk::is_set(keep_alive_exp.yfilter)
	|| ydk::is_set(shutdown_notif_rec.yfilter)
	|| ydk::is_set(shutdow_notif_sent.yfilter)
	|| (message_out !=  nullptr && message_out->has_operation())
	|| (message_in !=  nullptr && message_in->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discon_time.is_set || is_set(discon_time.yfilter)) leaf_name_data.push_back(discon_time.get_name_leafdata());
    if (session_attempts.is_set || is_set(session_attempts.yfilter)) leaf_name_data.push_back(session_attempts.get_name_leafdata());
    if (sess_reject_no_hello.is_set || is_set(sess_reject_no_hello.yfilter)) leaf_name_data.push_back(sess_reject_no_hello.get_name_leafdata());
    if (sess_rej_ad.is_set || is_set(sess_rej_ad.yfilter)) leaf_name_data.push_back(sess_rej_ad.get_name_leafdata());
    if (sess_rej_max_pdu.is_set || is_set(sess_rej_max_pdu.yfilter)) leaf_name_data.push_back(sess_rej_max_pdu.get_name_leafdata());
    if (sess_rej_lr.is_set || is_set(sess_rej_lr.yfilter)) leaf_name_data.push_back(sess_rej_lr.get_name_leafdata());
    if (bad_ldpid.is_set || is_set(bad_ldpid.yfilter)) leaf_name_data.push_back(bad_ldpid.get_name_leafdata());
    if (bad_pdu_len.is_set || is_set(bad_pdu_len.yfilter)) leaf_name_data.push_back(bad_pdu_len.get_name_leafdata());
    if (bad_msg_len.is_set || is_set(bad_msg_len.yfilter)) leaf_name_data.push_back(bad_msg_len.get_name_leafdata());
    if (bad_tlv_len.is_set || is_set(bad_tlv_len.yfilter)) leaf_name_data.push_back(bad_tlv_len.get_name_leafdata());
    if (malformed_tlv_val.is_set || is_set(malformed_tlv_val.yfilter)) leaf_name_data.push_back(malformed_tlv_val.get_name_leafdata());
    if (keep_alive_exp.is_set || is_set(keep_alive_exp.yfilter)) leaf_name_data.push_back(keep_alive_exp.get_name_leafdata());
    if (shutdown_notif_rec.is_set || is_set(shutdown_notif_rec.yfilter)) leaf_name_data.push_back(shutdown_notif_rec.get_name_leafdata());
    if (shutdow_notif_sent.is_set || is_set(shutdow_notif_sent.yfilter)) leaf_name_data.push_back(shutdow_notif_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-out")
    {
        if(message_out == nullptr)
        {
            message_out = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut>();
        }
        return message_out;
    }

    if(child_yang_name == "message-in")
    {
        if(message_in == nullptr)
        {
            message_in = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn>();
        }
        return message_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message_out != nullptr)
    {
        children["message-out"] = message_out;
    }

    if(message_in != nullptr)
    {
        children["message-in"] = message_in;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discon-time")
    {
        discon_time = value;
        discon_time.value_namespace = name_space;
        discon_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-attempts")
    {
        session_attempts = value;
        session_attempts.value_namespace = name_space;
        session_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-reject-no-hello")
    {
        sess_reject_no_hello = value;
        sess_reject_no_hello.value_namespace = name_space;
        sess_reject_no_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-rej-ad")
    {
        sess_rej_ad = value;
        sess_rej_ad.value_namespace = name_space;
        sess_rej_ad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-rej-max-pdu")
    {
        sess_rej_max_pdu = value;
        sess_rej_max_pdu.value_namespace = name_space;
        sess_rej_max_pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-rej-lr")
    {
        sess_rej_lr = value;
        sess_rej_lr.value_namespace = name_space;
        sess_rej_lr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-ldpid")
    {
        bad_ldpid = value;
        bad_ldpid.value_namespace = name_space;
        bad_ldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-pdu-len")
    {
        bad_pdu_len = value;
        bad_pdu_len.value_namespace = name_space;
        bad_pdu_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-msg-len")
    {
        bad_msg_len = value;
        bad_msg_len.value_namespace = name_space;
        bad_msg_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-tlv-len")
    {
        bad_tlv_len = value;
        bad_tlv_len.value_namespace = name_space;
        bad_tlv_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-tlv-val")
    {
        malformed_tlv_val = value;
        malformed_tlv_val.value_namespace = name_space;
        malformed_tlv_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-exp")
    {
        keep_alive_exp = value;
        keep_alive_exp.value_namespace = name_space;
        keep_alive_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-notif-rec")
    {
        shutdown_notif_rec = value;
        shutdown_notif_rec.value_namespace = name_space;
        shutdown_notif_rec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdow-notif-sent")
    {
        shutdow_notif_sent = value;
        shutdow_notif_sent.value_namespace = name_space;
        shutdow_notif_sent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discon-time")
    {
        discon_time.yfilter = yfilter;
    }
    if(value_path == "session-attempts")
    {
        session_attempts.yfilter = yfilter;
    }
    if(value_path == "sess-reject-no-hello")
    {
        sess_reject_no_hello.yfilter = yfilter;
    }
    if(value_path == "sess-rej-ad")
    {
        sess_rej_ad.yfilter = yfilter;
    }
    if(value_path == "sess-rej-max-pdu")
    {
        sess_rej_max_pdu.yfilter = yfilter;
    }
    if(value_path == "sess-rej-lr")
    {
        sess_rej_lr.yfilter = yfilter;
    }
    if(value_path == "bad-ldpid")
    {
        bad_ldpid.yfilter = yfilter;
    }
    if(value_path == "bad-pdu-len")
    {
        bad_pdu_len.yfilter = yfilter;
    }
    if(value_path == "bad-msg-len")
    {
        bad_msg_len.yfilter = yfilter;
    }
    if(value_path == "bad-tlv-len")
    {
        bad_tlv_len.yfilter = yfilter;
    }
    if(value_path == "malformed-tlv-val")
    {
        malformed_tlv_val.yfilter = yfilter;
    }
    if(value_path == "keep-alive-exp")
    {
        keep_alive_exp.yfilter = yfilter;
    }
    if(value_path == "shutdown-notif-rec")
    {
        shutdown_notif_rec.yfilter = yfilter;
    }
    if(value_path == "shutdow-notif-sent")
    {
        shutdow_notif_sent.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-out" || name == "message-in" || name == "discon-time" || name == "session-attempts" || name == "sess-reject-no-hello" || name == "sess-rej-ad" || name == "sess-rej-max-pdu" || name == "sess-rej-lr" || name == "bad-ldpid" || name == "bad-pdu-len" || name == "bad-msg-len" || name == "bad-tlv-len" || name == "malformed-tlv-val" || name == "keep-alive-exp" || name == "shutdown-notif-rec" || name == "shutdow-notif-sent")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::MessageOut()
    :
    total_count{YType::uint32, "total-count"},
    init_count{YType::uint32, "init-count"},
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    notification_count{YType::uint32, "notification-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"}
{

    yang_name = "message-out"; yang_parent_name = "stats-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::~MessageOut()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::has_data() const
{
    return total_count.is_set
	|| init_count.is_set
	|| address_count.is_set
	|| address_withdraw_count.is_set
	|| label_map_count.is_set
	|| label_withdraw_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_abort_request_count.is_set
	|| notification_count.is_set
	|| keep_alive_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| iccp_rg_app_data_count.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/stats-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "init-count" || name == "address-count" || name == "address-withdraw-count" || name == "label-map-count" || name == "label-withdraw-count" || name == "label-release-count" || name == "label-request-count" || name == "label-abort-request-count" || name == "notification-count" || name == "keep-alive-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "iccp-rg-app-data-count")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::MessageIn()
    :
    total_count{YType::uint32, "total-count"},
    init_count{YType::uint32, "init-count"},
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    notification_count{YType::uint32, "notification-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"}
{

    yang_name = "message-in"; yang_parent_name = "stats-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::~MessageIn()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::has_data() const
{
    return total_count.is_set
	|| init_count.is_set
	|| address_count.is_set
	|| address_withdraw_count.is_set
	|| label_map_count.is_set
	|| label_withdraw_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_abort_request_count.is_set
	|| notification_count.is_set
	|| keep_alive_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| iccp_rg_app_data_count.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(init_count.yfilter)
	|| ydk::is_set(address_count.yfilter)
	|| ydk::is_set(address_withdraw_count.yfilter)
	|| ydk::is_set(label_map_count.yfilter)
	|| ydk::is_set(label_withdraw_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_request_count.yfilter)
	|| ydk::is_set(label_abort_request_count.yfilter)
	|| ydk::is_set(notification_count.yfilter)
	|| ydk::is_set(keep_alive_count.yfilter)
	|| ydk::is_set(iccp_rg_conn_count.yfilter)
	|| ydk::is_set(iccp_rg_disconn_count.yfilter)
	|| ydk::is_set(iccp_rg_notif_count.yfilter)
	|| ydk::is_set(iccp_rg_app_data_count.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/stats-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.yfilter)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.yfilter)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.yfilter)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.yfilter)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.yfilter)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.yfilter)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.yfilter)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.yfilter)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.yfilter)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.yfilter)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.yfilter)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.yfilter)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-count")
    {
        init_count = value;
        init_count.value_namespace = name_space;
        init_count.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "label-map-count")
    {
        label_map_count = value;
        label_map_count.value_namespace = name_space;
        label_map_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
        label_withdraw_count.value_namespace = name_space;
        label_withdraw_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
        label_abort_request_count.value_namespace = name_space;
        label_abort_request_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
        notification_count.value_namespace = name_space;
        notification_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
        keep_alive_count.value_namespace = name_space;
        keep_alive_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
        iccp_rg_app_data_count.value_namespace = name_space;
        iccp_rg_app_data_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "init-count")
    {
        init_count.yfilter = yfilter;
    }
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-map-count")
    {
        label_map_count.yfilter = yfilter;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-request-count")
    {
        label_request_count.yfilter = yfilter;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count.yfilter = yfilter;
    }
    if(value_path == "notification-count")
    {
        notification_count.yfilter = yfilter;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count.yfilter = yfilter;
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
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "init-count" || name == "address-count" || name == "address-withdraw-count" || name == "label-map-count" || name == "label-withdraw-count" || name == "label-release-count" || name == "label-request-count" || name == "label-abort-request-count" || name == "notification-count" || name == "keep-alive-count" || name == "iccp-rg-conn-count" || name == "iccp-rg-disconn-count" || name == "iccp-rg-notif-count" || name == "iccp-rg-app-data-count")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::Backoffs::Backoffs()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{

    yang_name = "backoffs"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::Backoffs::~Backoffs()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Backoffs::has_data() const
{
    return backoff_seconds.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Backoffs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_seconds.yfilter)
	|| ydk::is_set(waiting_seconds.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::Backoffs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::Backoffs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.yfilter)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.yfilter)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Backoffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Backoffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Backoffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
        backoff_seconds.value_namespace = name_space;
        backoff_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
        waiting_seconds.value_namespace = name_space;
        waiting_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::Backoffs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds.yfilter = yfilter;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::Backoffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-seconds" || name == "waiting-seconds")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NsrNbrDetail()
    :
    nsr_state{YType::identityref, "nsr-state"},
    nsr_nbr_sync_state{YType::identityref, "nsr-nbr-sync-state"},
    nsr_nbr_last_sync_error{YType::identityref, "nsr-nbr-last-sync-error"},
    nsr_nbr_last_sync_nack_reason{YType::identityref, "nsr-nbr-last-sync-nack-reason"},
    nsr_nbr_pend_label_req_resps{YType::uint32, "nsr-nbr-pend-label-req-resps"},
    nsr_nbr_pend_label_withdraw_resps{YType::uint32, "nsr-nbr-pend-label-withdraw-resps"},
    nsr_nbr_pend_lcl_addr_withdraw_acks{YType::uint32, "nsr-nbr-pend-lcl-addr-withdraw-acks"},
    nsr_nbr_in_label_reqs_created{YType::uint32, "nsr-nbr-in-label-reqs-created"},
    nsr_nbr_in_label_reqs_freed{YType::uint32, "nsr-nbr-in-label-reqs-freed"},
    nsr_nbr_in_label_withdraw_created{YType::uint32, "nsr-nbr-in-label-withdraw-created"},
    nsr_nbr_in_label_withdraw_freed{YType::uint32, "nsr-nbr-in-label-withdraw-freed"},
    nsr_nbr_lcl_addr_withdraw_set{YType::uint32, "nsr-nbr-lcl-addr-withdraw-set"},
    nsr_nbr_lcl_addr_withdraw_cleared{YType::uint32, "nsr-nbr-lcl-addr-withdraw-cleared"},
    nsr_nbr_xmit_ctxt_enq{YType::uint32, "nsr-nbr-xmit-ctxt-enq"},
    nsr_nbr_xmit_ctxt_deq{YType::uint32, "nsr-nbr-xmit-ctxt-deq"},
    path_vector_limit{YType::int32, "path-vector-limit"}
    	,
    nbr_sess(std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess>())
{
    nbr_sess->parent = this;

    yang_name = "nsr-nbr-detail"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::~NsrNbrDetail()
{
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::has_data() const
{
    return nsr_state.is_set
	|| nsr_nbr_sync_state.is_set
	|| nsr_nbr_last_sync_error.is_set
	|| nsr_nbr_last_sync_nack_reason.is_set
	|| nsr_nbr_pend_label_req_resps.is_set
	|| nsr_nbr_pend_label_withdraw_resps.is_set
	|| nsr_nbr_pend_lcl_addr_withdraw_acks.is_set
	|| nsr_nbr_in_label_reqs_created.is_set
	|| nsr_nbr_in_label_reqs_freed.is_set
	|| nsr_nbr_in_label_withdraw_created.is_set
	|| nsr_nbr_in_label_withdraw_freed.is_set
	|| nsr_nbr_lcl_addr_withdraw_set.is_set
	|| nsr_nbr_lcl_addr_withdraw_cleared.is_set
	|| nsr_nbr_xmit_ctxt_enq.is_set
	|| nsr_nbr_xmit_ctxt_deq.is_set
	|| path_vector_limit.is_set
	|| (nbr_sess !=  nullptr && nbr_sess->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| ydk::is_set(nsr_nbr_sync_state.yfilter)
	|| ydk::is_set(nsr_nbr_last_sync_error.yfilter)
	|| ydk::is_set(nsr_nbr_last_sync_nack_reason.yfilter)
	|| ydk::is_set(nsr_nbr_pend_label_req_resps.yfilter)
	|| ydk::is_set(nsr_nbr_pend_label_withdraw_resps.yfilter)
	|| ydk::is_set(nsr_nbr_pend_lcl_addr_withdraw_acks.yfilter)
	|| ydk::is_set(nsr_nbr_in_label_reqs_created.yfilter)
	|| ydk::is_set(nsr_nbr_in_label_reqs_freed.yfilter)
	|| ydk::is_set(nsr_nbr_in_label_withdraw_created.yfilter)
	|| ydk::is_set(nsr_nbr_in_label_withdraw_freed.yfilter)
	|| ydk::is_set(nsr_nbr_lcl_addr_withdraw_set.yfilter)
	|| ydk::is_set(nsr_nbr_lcl_addr_withdraw_cleared.yfilter)
	|| ydk::is_set(nsr_nbr_xmit_ctxt_enq.yfilter)
	|| ydk::is_set(nsr_nbr_xmit_ctxt_deq.yfilter)
	|| ydk::is_set(path_vector_limit.yfilter)
	|| (nbr_sess !=  nullptr && nbr_sess->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-nbr-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (nsr_nbr_sync_state.is_set || is_set(nsr_nbr_sync_state.yfilter)) leaf_name_data.push_back(nsr_nbr_sync_state.get_name_leafdata());
    if (nsr_nbr_last_sync_error.is_set || is_set(nsr_nbr_last_sync_error.yfilter)) leaf_name_data.push_back(nsr_nbr_last_sync_error.get_name_leafdata());
    if (nsr_nbr_last_sync_nack_reason.is_set || is_set(nsr_nbr_last_sync_nack_reason.yfilter)) leaf_name_data.push_back(nsr_nbr_last_sync_nack_reason.get_name_leafdata());
    if (nsr_nbr_pend_label_req_resps.is_set || is_set(nsr_nbr_pend_label_req_resps.yfilter)) leaf_name_data.push_back(nsr_nbr_pend_label_req_resps.get_name_leafdata());
    if (nsr_nbr_pend_label_withdraw_resps.is_set || is_set(nsr_nbr_pend_label_withdraw_resps.yfilter)) leaf_name_data.push_back(nsr_nbr_pend_label_withdraw_resps.get_name_leafdata());
    if (nsr_nbr_pend_lcl_addr_withdraw_acks.is_set || is_set(nsr_nbr_pend_lcl_addr_withdraw_acks.yfilter)) leaf_name_data.push_back(nsr_nbr_pend_lcl_addr_withdraw_acks.get_name_leafdata());
    if (nsr_nbr_in_label_reqs_created.is_set || is_set(nsr_nbr_in_label_reqs_created.yfilter)) leaf_name_data.push_back(nsr_nbr_in_label_reqs_created.get_name_leafdata());
    if (nsr_nbr_in_label_reqs_freed.is_set || is_set(nsr_nbr_in_label_reqs_freed.yfilter)) leaf_name_data.push_back(nsr_nbr_in_label_reqs_freed.get_name_leafdata());
    if (nsr_nbr_in_label_withdraw_created.is_set || is_set(nsr_nbr_in_label_withdraw_created.yfilter)) leaf_name_data.push_back(nsr_nbr_in_label_withdraw_created.get_name_leafdata());
    if (nsr_nbr_in_label_withdraw_freed.is_set || is_set(nsr_nbr_in_label_withdraw_freed.yfilter)) leaf_name_data.push_back(nsr_nbr_in_label_withdraw_freed.get_name_leafdata());
    if (nsr_nbr_lcl_addr_withdraw_set.is_set || is_set(nsr_nbr_lcl_addr_withdraw_set.yfilter)) leaf_name_data.push_back(nsr_nbr_lcl_addr_withdraw_set.get_name_leafdata());
    if (nsr_nbr_lcl_addr_withdraw_cleared.is_set || is_set(nsr_nbr_lcl_addr_withdraw_cleared.yfilter)) leaf_name_data.push_back(nsr_nbr_lcl_addr_withdraw_cleared.get_name_leafdata());
    if (nsr_nbr_xmit_ctxt_enq.is_set || is_set(nsr_nbr_xmit_ctxt_enq.yfilter)) leaf_name_data.push_back(nsr_nbr_xmit_ctxt_enq.get_name_leafdata());
    if (nsr_nbr_xmit_ctxt_deq.is_set || is_set(nsr_nbr_xmit_ctxt_deq.yfilter)) leaf_name_data.push_back(nsr_nbr_xmit_ctxt_deq.get_name_leafdata());
    if (path_vector_limit.is_set || is_set(path_vector_limit.yfilter)) leaf_name_data.push_back(path_vector_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-sess")
    {
        if(nbr_sess == nullptr)
        {
            nbr_sess = std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess>();
        }
        return nbr_sess;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbr_sess != nullptr)
    {
        children["nbr-sess"] = nbr_sess;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-sync-state")
    {
        nsr_nbr_sync_state = value;
        nsr_nbr_sync_state.value_namespace = name_space;
        nsr_nbr_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-last-sync-error")
    {
        nsr_nbr_last_sync_error = value;
        nsr_nbr_last_sync_error.value_namespace = name_space;
        nsr_nbr_last_sync_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-last-sync-nack-reason")
    {
        nsr_nbr_last_sync_nack_reason = value;
        nsr_nbr_last_sync_nack_reason.value_namespace = name_space;
        nsr_nbr_last_sync_nack_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-pend-label-req-resps")
    {
        nsr_nbr_pend_label_req_resps = value;
        nsr_nbr_pend_label_req_resps.value_namespace = name_space;
        nsr_nbr_pend_label_req_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-pend-label-withdraw-resps")
    {
        nsr_nbr_pend_label_withdraw_resps = value;
        nsr_nbr_pend_label_withdraw_resps.value_namespace = name_space;
        nsr_nbr_pend_label_withdraw_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-pend-lcl-addr-withdraw-acks")
    {
        nsr_nbr_pend_lcl_addr_withdraw_acks = value;
        nsr_nbr_pend_lcl_addr_withdraw_acks.value_namespace = name_space;
        nsr_nbr_pend_lcl_addr_withdraw_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-in-label-reqs-created")
    {
        nsr_nbr_in_label_reqs_created = value;
        nsr_nbr_in_label_reqs_created.value_namespace = name_space;
        nsr_nbr_in_label_reqs_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-in-label-reqs-freed")
    {
        nsr_nbr_in_label_reqs_freed = value;
        nsr_nbr_in_label_reqs_freed.value_namespace = name_space;
        nsr_nbr_in_label_reqs_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-created")
    {
        nsr_nbr_in_label_withdraw_created = value;
        nsr_nbr_in_label_withdraw_created.value_namespace = name_space;
        nsr_nbr_in_label_withdraw_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-freed")
    {
        nsr_nbr_in_label_withdraw_freed = value;
        nsr_nbr_in_label_withdraw_freed.value_namespace = name_space;
        nsr_nbr_in_label_withdraw_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-set")
    {
        nsr_nbr_lcl_addr_withdraw_set = value;
        nsr_nbr_lcl_addr_withdraw_set.value_namespace = name_space;
        nsr_nbr_lcl_addr_withdraw_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-cleared")
    {
        nsr_nbr_lcl_addr_withdraw_cleared = value;
        nsr_nbr_lcl_addr_withdraw_cleared.value_namespace = name_space;
        nsr_nbr_lcl_addr_withdraw_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-enq")
    {
        nsr_nbr_xmit_ctxt_enq = value;
        nsr_nbr_xmit_ctxt_enq.value_namespace = name_space;
        nsr_nbr_xmit_ctxt_enq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-deq")
    {
        nsr_nbr_xmit_ctxt_deq = value;
        nsr_nbr_xmit_ctxt_deq.value_namespace = name_space;
        nsr_nbr_xmit_ctxt_deq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-vector-limit")
    {
        path_vector_limit = value;
        path_vector_limit.value_namespace = name_space;
        path_vector_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-sync-state")
    {
        nsr_nbr_sync_state.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-last-sync-error")
    {
        nsr_nbr_last_sync_error.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-last-sync-nack-reason")
    {
        nsr_nbr_last_sync_nack_reason.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-pend-label-req-resps")
    {
        nsr_nbr_pend_label_req_resps.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-pend-label-withdraw-resps")
    {
        nsr_nbr_pend_label_withdraw_resps.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-pend-lcl-addr-withdraw-acks")
    {
        nsr_nbr_pend_lcl_addr_withdraw_acks.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-in-label-reqs-created")
    {
        nsr_nbr_in_label_reqs_created.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-in-label-reqs-freed")
    {
        nsr_nbr_in_label_reqs_freed.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-created")
    {
        nsr_nbr_in_label_withdraw_created.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-freed")
    {
        nsr_nbr_in_label_withdraw_freed.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-set")
    {
        nsr_nbr_lcl_addr_withdraw_set.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-cleared")
    {
        nsr_nbr_lcl_addr_withdraw_cleared.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-enq")
    {
        nsr_nbr_xmit_ctxt_enq.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-deq")
    {
        nsr_nbr_xmit_ctxt_deq.yfilter = yfilter;
    }
    if(value_path == "path-vector-limit")
    {
        path_vector_limit.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-sess" || name == "nsr-state" || name == "nsr-nbr-sync-state" || name == "nsr-nbr-last-sync-error" || name == "nsr-nbr-last-sync-nack-reason" || name == "nsr-nbr-pend-label-req-resps" || name == "nsr-nbr-pend-label-withdraw-resps" || name == "nsr-nbr-pend-lcl-addr-withdraw-acks" || name == "nsr-nbr-in-label-reqs-created" || name == "nsr-nbr-in-label-reqs-freed" || name == "nsr-nbr-in-label-withdraw-created" || name == "nsr-nbr-in-label-withdraw-freed" || name == "nsr-nbr-lcl-addr-withdraw-set" || name == "nsr-nbr-lcl-addr-withdraw-cleared" || name == "nsr-nbr-xmit-ctxt-enq" || name == "nsr-nbr-xmit-ctxt-deq" || name == "path-vector-limit")
        return true;
    return false;
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::NbrSess()
    :
    last_stat_change{YType::uint32, "last-stat-change"},
    state{YType::enumeration, "state"},
    keep_alive_remain{YType::uint32, "keep-alive-remain"},
    keep_alive_time{YType::uint32, "keep-alive-time"},
    max_pdu{YType::uint32, "max-pdu"},
    discon_time{YType::uint32, "discon-time"},
    unknown_mess_err{YType::uint32, "unknown-mess-err"},
    unknown_tlv{YType::uint32, "unknown-tlv"}
{

    yang_name = "nbr-sess"; yang_parent_name = "nsr-nbr-detail"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::~NbrSess()
{
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::has_data() const
{
    return last_stat_change.is_set
	|| state.is_set
	|| keep_alive_remain.is_set
	|| keep_alive_time.is_set
	|| max_pdu.is_set
	|| discon_time.is_set
	|| unknown_mess_err.is_set
	|| unknown_tlv.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_stat_change.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(keep_alive_remain.yfilter)
	|| ydk::is_set(keep_alive_time.yfilter)
	|| ydk::is_set(max_pdu.yfilter)
	|| ydk::is_set(discon_time.yfilter)
	|| ydk::is_set(unknown_mess_err.yfilter)
	|| ydk::is_set(unknown_tlv.yfilter);
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/nsr-nbr-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-sess";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_stat_change.is_set || is_set(last_stat_change.yfilter)) leaf_name_data.push_back(last_stat_change.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (keep_alive_remain.is_set || is_set(keep_alive_remain.yfilter)) leaf_name_data.push_back(keep_alive_remain.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.yfilter)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (max_pdu.is_set || is_set(max_pdu.yfilter)) leaf_name_data.push_back(max_pdu.get_name_leafdata());
    if (discon_time.is_set || is_set(discon_time.yfilter)) leaf_name_data.push_back(discon_time.get_name_leafdata());
    if (unknown_mess_err.is_set || is_set(unknown_mess_err.yfilter)) leaf_name_data.push_back(unknown_mess_err.get_name_leafdata());
    if (unknown_tlv.is_set || is_set(unknown_tlv.yfilter)) leaf_name_data.push_back(unknown_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-stat-change")
    {
        last_stat_change = value;
        last_stat_change.value_namespace = name_space;
        last_stat_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-remain")
    {
        keep_alive_remain = value;
        keep_alive_remain.value_namespace = name_space;
        keep_alive_remain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
        keep_alive_time.value_namespace = name_space;
        keep_alive_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pdu")
    {
        max_pdu = value;
        max_pdu.value_namespace = name_space;
        max_pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discon-time")
    {
        discon_time = value;
        discon_time.value_namespace = name_space;
        discon_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-mess-err")
    {
        unknown_mess_err = value;
        unknown_mess_err.value_namespace = name_space;
        unknown_mess_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-tlv")
    {
        unknown_tlv = value;
        unknown_tlv.value_namespace = name_space;
        unknown_tlv.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-stat-change")
    {
        last_stat_change.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "keep-alive-remain")
    {
        keep_alive_remain.yfilter = yfilter;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time.yfilter = yfilter;
    }
    if(value_path == "max-pdu")
    {
        max_pdu.yfilter = yfilter;
    }
    if(value_path == "discon-time")
    {
        discon_time.yfilter = yfilter;
    }
    if(value_path == "unknown-mess-err")
    {
        unknown_mess_err.yfilter = yfilter;
    }
    if(value_path == "unknown-tlv")
    {
        unknown_tlv.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-stat-change" || name == "state" || name == "keep-alive-remain" || name == "keep-alive-time" || name == "max-pdu" || name == "discon-time" || name == "unknown-mess-err" || name == "unknown-tlv")
        return true;
    return false;
}

MplsLdp::MplsLdpState::LabelRanges::LabelRanges()
{

    yang_name = "label-ranges"; yang_parent_name = "mpls-ldp-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::LabelRanges::~LabelRanges()
{
}

bool MplsLdp::MplsLdpState::LabelRanges::has_data() const
{
    for (std::size_t index=0; index<label_range.size(); index++)
    {
        if(label_range[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::LabelRanges::has_operation() const
{
    for (std::size_t index=0; index<label_range.size(); index++)
    {
        if(label_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpState::LabelRanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::LabelRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::LabelRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::LabelRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-range")
    {
        for(auto const & c : label_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpState::LabelRanges::LabelRange>();
        c->parent = this;
        label_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::LabelRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::LabelRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpState::LabelRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpState::LabelRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-range")
        return true;
    return false;
}

MplsLdp::MplsLdpState::LabelRanges::LabelRange::LabelRange()
    :
    lr_min{YType::uint32, "lr-min"},
    lr_max{YType::uint32, "lr-max"}
{

    yang_name = "label-range"; yang_parent_name = "label-ranges"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpState::LabelRanges::LabelRange::~LabelRange()
{
}

bool MplsLdp::MplsLdpState::LabelRanges::LabelRange::has_data() const
{
    return lr_min.is_set
	|| lr_max.is_set;
}

bool MplsLdp::MplsLdpState::LabelRanges::LabelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lr_min.yfilter)
	|| ydk::is_set(lr_max.yfilter);
}

std::string MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/label-ranges/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range" <<"[lr-min='" <<lr_min <<"']" <<"[lr-max='" <<lr_max <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lr_min.is_set || is_set(lr_min.yfilter)) leaf_name_data.push_back(lr_min.get_name_leafdata());
    if (lr_max.is_set || is_set(lr_max.yfilter)) leaf_name_data.push_back(lr_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpState::LabelRanges::LabelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lr-min")
    {
        lr_min = value;
        lr_min.value_namespace = name_space;
        lr_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lr-max")
    {
        lr_max = value;
        lr_max.value_namespace = name_space;
        lr_max.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpState::LabelRanges::LabelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lr-min")
    {
        lr_min.yfilter = yfilter;
    }
    if(value_path == "lr-max")
    {
        lr_max.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpState::LabelRanges::LabelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lr-min" || name == "lr-max")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::MplsLdpConfig()
    :
    global_cfg(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg>())
	,nbr_table(std::make_shared<MplsLdp::MplsLdpConfig::NbrTable>())
	,passwords(std::make_shared<MplsLdp::MplsLdpConfig::Passwords>())
	,session(std::make_shared<MplsLdp::MplsLdpConfig::Session>())
	,label_cfg(std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg>())
	,discovery(std::make_shared<MplsLdp::MplsLdpConfig::Discovery>())
	,graceful_restart(std::make_shared<MplsLdp::MplsLdpConfig::GracefulRestart>())
	,logging(std::make_shared<MplsLdp::MplsLdpConfig::Logging>())
	,interfaces(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces>())
	,routing(std::make_shared<MplsLdp::MplsLdpConfig::Routing>())
	,dual_stack(std::make_shared<MplsLdp::MplsLdpConfig::DualStack>())
{
    global_cfg->parent = this;
    nbr_table->parent = this;
    passwords->parent = this;
    session->parent = this;
    label_cfg->parent = this;
    discovery->parent = this;
    graceful_restart->parent = this;
    logging->parent = this;
    interfaces->parent = this;
    routing->parent = this;
    dual_stack->parent = this;

    yang_name = "mpls-ldp-config"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::~MplsLdpConfig()
{
}

bool MplsLdp::MplsLdpConfig::has_data() const
{
    return (global_cfg !=  nullptr && global_cfg->has_data())
	|| (nbr_table !=  nullptr && nbr_table->has_data())
	|| (passwords !=  nullptr && passwords->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (label_cfg !=  nullptr && label_cfg->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (dual_stack !=  nullptr && dual_stack->has_data());
}

bool MplsLdp::MplsLdpConfig::has_operation() const
{
    return is_set(yfilter)
	|| (global_cfg !=  nullptr && global_cfg->has_operation())
	|| (nbr_table !=  nullptr && nbr_table->has_operation())
	|| (passwords !=  nullptr && passwords->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (label_cfg !=  nullptr && label_cfg->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (dual_stack !=  nullptr && dual_stack->has_operation());
}

std::string MplsLdp::MplsLdpConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-cfg")
    {
        if(global_cfg == nullptr)
        {
            global_cfg = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg>();
        }
        return global_cfg;
    }

    if(child_yang_name == "nbr-table")
    {
        if(nbr_table == nullptr)
        {
            nbr_table = std::make_shared<MplsLdp::MplsLdpConfig::NbrTable>();
        }
        return nbr_table;
    }

    if(child_yang_name == "passwords")
    {
        if(passwords == nullptr)
        {
            passwords = std::make_shared<MplsLdp::MplsLdpConfig::Passwords>();
        }
        return passwords;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::MplsLdpConfig::Session>();
        }
        return session;
    }

    if(child_yang_name == "label-cfg")
    {
        if(label_cfg == nullptr)
        {
            label_cfg = std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg>();
        }
        return label_cfg;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::MplsLdpConfig::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::MplsLdpConfig::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsLdp::MplsLdpConfig::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::MplsLdpConfig::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "dual-stack")
    {
        if(dual_stack == nullptr)
        {
            dual_stack = std::make_shared<MplsLdp::MplsLdpConfig::DualStack>();
        }
        return dual_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_cfg != nullptr)
    {
        children["global-cfg"] = global_cfg;
    }

    if(nbr_table != nullptr)
    {
        children["nbr-table"] = nbr_table;
    }

    if(passwords != nullptr)
    {
        children["passwords"] = passwords;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(label_cfg != nullptr)
    {
        children["label-cfg"] = label_cfg;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(dual_stack != nullptr)
    {
        children["dual-stack"] = dual_stack;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-cfg" || name == "nbr-table" || name == "passwords" || name == "session" || name == "label-cfg" || name == "discovery" || name == "graceful-restart" || name == "logging" || name == "interfaces" || name == "routing" || name == "dual-stack")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::GlobalCfg()
    :
    shutdown{YType::empty, "shutdown"},
    enable_nsr{YType::boolean, "enable-nsr"},
    disable_quick_start{YType::boolean, "disable-quick-start"},
    loop_detection{YType::boolean, "loop-detection"},
    admin_status{YType::enumeration, "admin-status"},
    dcsp_val{YType::uint32, "dcsp-val"},
    high_priority{YType::boolean, "high-priority"},
    seconds{YType::uint32, "seconds"},
    disable_delay{YType::empty, "disable-delay"},
    seconds_delay_proc{YType::uint32, "seconds-delay-proc"},
    disable_delay_proc{YType::empty, "disable-delay-proc"},
    protocol{YType::enumeration, "protocol"},
    init_sess_thresh{YType::int32, "init-sess-thresh"}
    	,
    session(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session>())
	,per_af(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::PerAf>())
{
    session->parent = this;
    per_af->parent = this;

    yang_name = "global-cfg"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::~GlobalCfg()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::has_data() const
{
    for (std::size_t index=0; index<router_id.size(); index++)
    {
        if(router_id[index]->has_data())
            return true;
    }
    return shutdown.is_set
	|| enable_nsr.is_set
	|| disable_quick_start.is_set
	|| loop_detection.is_set
	|| admin_status.is_set
	|| dcsp_val.is_set
	|| high_priority.is_set
	|| seconds.is_set
	|| disable_delay.is_set
	|| seconds_delay_proc.is_set
	|| disable_delay_proc.is_set
	|| protocol.is_set
	|| init_sess_thresh.is_set
	|| (session !=  nullptr && session->has_data())
	|| (per_af !=  nullptr && per_af->has_data());
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::has_operation() const
{
    for (std::size_t index=0; index<router_id.size(); index++)
    {
        if(router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(enable_nsr.yfilter)
	|| ydk::is_set(disable_quick_start.yfilter)
	|| ydk::is_set(loop_detection.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(dcsp_val.yfilter)
	|| ydk::is_set(high_priority.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(seconds_delay_proc.yfilter)
	|| ydk::is_set(disable_delay_proc.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(init_sess_thresh.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (per_af !=  nullptr && per_af->has_operation());
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (enable_nsr.is_set || is_set(enable_nsr.yfilter)) leaf_name_data.push_back(enable_nsr.get_name_leafdata());
    if (disable_quick_start.is_set || is_set(disable_quick_start.yfilter)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.yfilter)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (dcsp_val.is_set || is_set(dcsp_val.yfilter)) leaf_name_data.push_back(dcsp_val.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.yfilter)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (seconds_delay_proc.is_set || is_set(seconds_delay_proc.yfilter)) leaf_name_data.push_back(seconds_delay_proc.get_name_leafdata());
    if (disable_delay_proc.is_set || is_set(disable_delay_proc.yfilter)) leaf_name_data.push_back(disable_delay_proc.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (init_sess_thresh.is_set || is_set(init_sess_thresh.yfilter)) leaf_name_data.push_back(init_sess_thresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        for(auto const & c : router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::RouterId>();
        c->parent = this;
        router_id.push_back(c);
        return c;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session>();
        }
        return session;
    }

    if(child_yang_name == "per-af")
    {
        if(per_af == nullptr)
        {
            per_af = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::PerAf>();
        }
        return per_af;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : router_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(per_af != nullptr)
    {
        children["per-af"] = per_af;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-nsr")
    {
        enable_nsr = value;
        enable_nsr.value_namespace = name_space;
        enable_nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
        disable_quick_start.value_namespace = name_space;
        disable_quick_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
        loop_detection.value_namespace = name_space;
        loop_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dcsp-val")
    {
        dcsp_val = value;
        dcsp_val.value_namespace = name_space;
        dcsp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
        high_priority.value_namespace = name_space;
        high_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-delay-proc")
    {
        seconds_delay_proc = value;
        seconds_delay_proc.value_namespace = name_space;
        seconds_delay_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay-proc")
    {
        disable_delay_proc = value;
        disable_delay_proc.value_namespace = name_space;
        disable_delay_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sess-thresh")
    {
        init_sess_thresh = value;
        init_sess_thresh.value_namespace = name_space;
        init_sess_thresh.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "enable-nsr")
    {
        enable_nsr.yfilter = yfilter;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start.yfilter = yfilter;
    }
    if(value_path == "loop-detection")
    {
        loop_detection.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "dcsp-val")
    {
        dcsp_val.yfilter = yfilter;
    }
    if(value_path == "high-priority")
    {
        high_priority.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "seconds-delay-proc")
    {
        seconds_delay_proc.yfilter = yfilter;
    }
    if(value_path == "disable-delay-proc")
    {
        disable_delay_proc.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "init-sess-thresh")
    {
        init_sess_thresh.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "session" || name == "per-af" || name == "shutdown" || name == "enable-nsr" || name == "disable-quick-start" || name == "loop-detection" || name == "admin-status" || name == "dcsp-val" || name == "high-priority" || name == "seconds" || name == "disable-delay" || name == "seconds-delay-proc" || name == "disable-delay-proc" || name == "protocol" || name == "init-sess-thresh")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::RouterId()
    :
    vrf_name{YType::str, "vrf-name"},
    lsr_id_if{YType::str, "lsr-id-if"},
    lsr_id_ip{YType::str, "lsr-id-ip"},
    force{YType::empty, "force"}
{

    yang_name = "router-id"; yang_parent_name = "global-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::~RouterId()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::has_data() const
{
    return vrf_name.is_set
	|| lsr_id_if.is_set
	|| lsr_id_ip.is_set
	|| force.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(lsr_id_if.yfilter)
	|| ydk::is_set(lsr_id_ip.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (lsr_id_if.is_set || is_set(lsr_id_if.yfilter)) leaf_name_data.push_back(lsr_id_if.get_name_leafdata());
    if (lsr_id_ip.is_set || is_set(lsr_id_ip.yfilter)) leaf_name_data.push_back(lsr_id_ip.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-if")
    {
        lsr_id_if = value;
        lsr_id_if.value_namespace = name_space;
        lsr_id_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id-ip")
    {
        lsr_id_ip = value;
        lsr_id_ip.value_namespace = name_space;
        lsr_id_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "lsr-id-if")
    {
        lsr_id_if.yfilter = yfilter;
    }
    if(value_path == "lsr-id-ip")
    {
        lsr_id_ip.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "lsr-id-if" || name == "lsr-id-ip" || name == "force")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Session()
    :
    backoff_init{YType::uint32, "backoff-init"},
    backoff_max{YType::uint32, "backoff-max"},
    seconds{YType::uint16, "seconds"},
    infinite{YType::boolean, "infinite"}
    	,
    protection(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection>())
{
    protection->parent = this;

    yang_name = "session"; yang_parent_name = "global-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::~Session()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::has_data() const
{
    for (std::size_t index=0; index<downstream_on_demand.size(); index++)
    {
        if(downstream_on_demand[index]->has_data())
            return true;
    }
    return backoff_init.is_set
	|| backoff_max.is_set
	|| seconds.is_set
	|| infinite.is_set
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::has_operation() const
{
    for (std::size_t index=0; index<downstream_on_demand.size(); index++)
    {
        if(downstream_on_demand[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backoff_init.yfilter)
	|| ydk::is_set(backoff_max.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(infinite.yfilter)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_init.is_set || is_set(backoff_init.yfilter)) leaf_name_data.push_back(backoff_init.get_name_leafdata());
    if (backoff_max.is_set || is_set(backoff_max.yfilter)) leaf_name_data.push_back(backoff_max.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "downstream-on-demand")
    {
        for(auto const & c : downstream_on_demand)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand>();
        c->parent = this;
        downstream_on_demand.push_back(c);
        return c;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : downstream_on_demand)
    {
        children[c->get_segment_path()] = c;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-init")
    {
        backoff_init = value;
        backoff_init.value_namespace = name_space;
        backoff_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-max")
    {
        backoff_max = value;
        backoff_max.value_namespace = name_space;
        backoff_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-init")
    {
        backoff_init.yfilter = yfilter;
    }
    if(value_path == "backoff-max")
    {
        backoff_max.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream-on-demand" || name == "protection" || name == "backoff-init" || name == "backoff-max" || name == "seconds" || name == "infinite")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    vrf_name{YType::str, "vrf-name"},
    enabled{YType::boolean, "enabled"},
    filter{YType::str, "filter"}
{

    yang_name = "downstream-on-demand"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::has_data() const
{
    return vrf_name.is_set
	|| enabled.is_set
	|| filter.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(filter.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/session/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "enabled" || name == "filter")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::Protection()
    :
    enable_prot{YType::boolean, "enable-prot"},
    peer_filter{YType::str, "peer-filter"},
    seconds{YType::uint32, "seconds"},
    inf{YType::empty, "inf"}
{

    yang_name = "protection"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::~Protection()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::has_data() const
{
    return enable_prot.is_set
	|| peer_filter.is_set
	|| seconds.is_set
	|| inf.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_prot.yfilter)
	|| ydk::is_set(peer_filter.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(inf.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/session/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_prot.is_set || is_set(enable_prot.yfilter)) leaf_name_data.push_back(enable_prot.get_name_leafdata());
    if (peer_filter.is_set || is_set(peer_filter.yfilter)) leaf_name_data.push_back(peer_filter.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (inf.is_set || is_set(inf.yfilter)) leaf_name_data.push_back(inf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-prot")
    {
        enable_prot = value;
        enable_prot.value_namespace = name_space;
        enable_prot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-filter")
    {
        peer_filter = value;
        peer_filter.value_namespace = name_space;
        peer_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inf")
    {
        inf = value;
        inf.value_namespace = name_space;
        inf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-prot")
    {
        enable_prot.yfilter = yfilter;
    }
    if(value_path == "peer-filter")
    {
        peer_filter.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "inf")
    {
        inf.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-prot" || name == "peer-filter" || name == "seconds" || name == "inf")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::PerAf()
{

    yang_name = "per-af"; yang_parent_name = "global-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::~PerAf()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::has_data() const
{
    for (std::size_t index=0; index<af_cfg.size(); index++)
    {
        if(af_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::has_operation() const
{
    for (std::size_t index=0; index<af_cfg.size(); index++)
    {
        if(af_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-cfg")
    {
        for(auto const & c : af_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg>();
        c->parent = this;
        af_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-cfg")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::AfCfg()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    default_route{YType::boolean, "default-route"},
    ipaddr{YType::str, "ipaddr"},
    interface{YType::str, "interface"},
    implicit{YType::empty, "implicit"}
{

    yang_name = "af-cfg"; yang_parent_name = "per-af"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::~AfCfg()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::has_data() const
{
    return vrf_name.is_set
	|| af_name.is_set
	|| default_route.is_set
	|| ipaddr.is_set
	|| interface.is_set
	|| implicit.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(implicit.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/per-af/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-cfg" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (implicit.is_set || is_set(implicit.yfilter)) leaf_name_data.push_back(implicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipaddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit")
    {
        implicit = value;
        implicit.value_namespace = name_space;
        implicit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "ipaddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "implicit")
    {
        implicit.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "af-name" || name == "default-route" || name == "ipaddr" || name == "interface" || name == "implicit")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::NbrTable::NbrTable()
{

    yang_name = "nbr-table"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::NbrTable::~NbrTable()
{
}

bool MplsLdp::MplsLdpConfig::NbrTable::has_data() const
{
    for (std::size_t index=0; index<nbr_cfg.size(); index++)
    {
        if(nbr_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::NbrTable::has_operation() const
{
    for (std::size_t index=0; index<nbr_cfg.size(); index++)
    {
        if(nbr_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::NbrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::NbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::NbrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::NbrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-cfg")
    {
        for(auto const & c : nbr_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::NbrTable::NbrCfg>();
        c->parent = this;
        nbr_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::NbrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nbr_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::NbrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::NbrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::NbrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-cfg")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::NbrCfg()
    :
    nbr_vrf{YType::str, "nbr-vrf"},
    nbr_ip{YType::str, "nbr-ip"},
    admin_status{YType::enumeration, "admin-status"},
    implicit_withdraw{YType::boolean, "implicit-withdraw"},
    targeted{YType::boolean, "targeted"},
    label_protocol{YType::enumeration, "label-protocol"},
    label_binding_filter{YType::str, "label-binding-filter"},
    password{YType::str, "password"}
{

    yang_name = "nbr-cfg"; yang_parent_name = "nbr-table"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::~NbrCfg()
{
}

bool MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::has_data() const
{
    return nbr_vrf.is_set
	|| nbr_ip.is_set
	|| admin_status.is_set
	|| implicit_withdraw.is_set
	|| targeted.is_set
	|| label_protocol.is_set
	|| label_binding_filter.is_set
	|| password.is_set;
}

bool MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_vrf.yfilter)
	|| ydk::is_set(nbr_ip.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| ydk::is_set(targeted.yfilter)
	|| ydk::is_set(label_protocol.yfilter)
	|| ydk::is_set(label_binding_filter.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/nbr-table/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-cfg" <<"[nbr-vrf='" <<nbr_vrf <<"']" <<"[nbr-ip='" <<nbr_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_vrf.is_set || is_set(nbr_vrf.yfilter)) leaf_name_data.push_back(nbr_vrf.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.yfilter)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.yfilter)) leaf_name_data.push_back(targeted.get_name_leafdata());
    if (label_protocol.is_set || is_set(label_protocol.yfilter)) leaf_name_data.push_back(label_protocol.get_name_leafdata());
    if (label_binding_filter.is_set || is_set(label_binding_filter.yfilter)) leaf_name_data.push_back(label_binding_filter.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf = value;
        nbr_vrf.value_namespace = name_space;
        nbr_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
        nbr_ip.value_namespace = name_space;
        nbr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted")
    {
        targeted = value;
        targeted.value_namespace = name_space;
        targeted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-protocol")
    {
        label_protocol = value;
        label_protocol.value_namespace = name_space;
        label_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-binding-filter")
    {
        label_binding_filter = value;
        label_binding_filter.value_namespace = name_space;
        label_binding_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf.yfilter = yfilter;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "targeted")
    {
        targeted.yfilter = yfilter;
    }
    if(value_path == "label-protocol")
    {
        label_protocol.yfilter = yfilter;
    }
    if(value_path == "label-binding-filter")
    {
        label_binding_filter.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-vrf" || name == "nbr-ip" || name == "admin-status" || name == "implicit-withdraw" || name == "targeted" || name == "label-protocol" || name == "label-binding-filter" || name == "password")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Passwords::Passwords()
{

    yang_name = "passwords"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Passwords::~Passwords()
{
}

bool MplsLdp::MplsLdpConfig::Passwords::has_data() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::Passwords::has_operation() const
{
    for (std::size_t index=0; index<password.size(); index++)
    {
        if(password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::Passwords::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Passwords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Passwords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Passwords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        for(auto const & c : password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::Passwords::Password>();
        c->parent = this;
        password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Passwords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Passwords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Passwords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Passwords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Passwords::Password::Password()
    :
    nbr_vrf{YType::str, "nbr-vrf"},
    nbr_id{YType::str, "nbr-id"},
    password_num{YType::uint32, "password-num"},
    pass_required{YType::boolean, "pass-required"},
    clear_pass{YType::str, "clear-pass"},
    encrypt_pass{YType::str, "encrypt-pass"},
    keychain_pass{YType::str, "keychain-pass"}
{

    yang_name = "password"; yang_parent_name = "passwords"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Passwords::Password::~Password()
{
}

bool MplsLdp::MplsLdpConfig::Passwords::Password::has_data() const
{
    return nbr_vrf.is_set
	|| nbr_id.is_set
	|| password_num.is_set
	|| pass_required.is_set
	|| clear_pass.is_set
	|| encrypt_pass.is_set
	|| keychain_pass.is_set;
}

bool MplsLdp::MplsLdpConfig::Passwords::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_vrf.yfilter)
	|| ydk::is_set(nbr_id.yfilter)
	|| ydk::is_set(password_num.yfilter)
	|| ydk::is_set(pass_required.yfilter)
	|| ydk::is_set(clear_pass.yfilter)
	|| ydk::is_set(encrypt_pass.yfilter)
	|| ydk::is_set(keychain_pass.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Passwords::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/passwords/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Passwords::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[nbr-vrf='" <<nbr_vrf <<"']" <<"[nbr-id='" <<nbr_id <<"']" <<"[password-num='" <<password_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Passwords::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_vrf.is_set || is_set(nbr_vrf.yfilter)) leaf_name_data.push_back(nbr_vrf.get_name_leafdata());
    if (nbr_id.is_set || is_set(nbr_id.yfilter)) leaf_name_data.push_back(nbr_id.get_name_leafdata());
    if (password_num.is_set || is_set(password_num.yfilter)) leaf_name_data.push_back(password_num.get_name_leafdata());
    if (pass_required.is_set || is_set(pass_required.yfilter)) leaf_name_data.push_back(pass_required.get_name_leafdata());
    if (clear_pass.is_set || is_set(clear_pass.yfilter)) leaf_name_data.push_back(clear_pass.get_name_leafdata());
    if (encrypt_pass.is_set || is_set(encrypt_pass.yfilter)) leaf_name_data.push_back(encrypt_pass.get_name_leafdata());
    if (keychain_pass.is_set || is_set(keychain_pass.yfilter)) leaf_name_data.push_back(keychain_pass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Passwords::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Passwords::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Passwords::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf = value;
        nbr_vrf.value_namespace = name_space;
        nbr_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-id")
    {
        nbr_id = value;
        nbr_id.value_namespace = name_space;
        nbr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-num")
    {
        password_num = value;
        password_num.value_namespace = name_space;
        password_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-required")
    {
        pass_required = value;
        pass_required.value_namespace = name_space;
        pass_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-pass")
    {
        clear_pass = value;
        clear_pass.value_namespace = name_space;
        clear_pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt-pass")
    {
        encrypt_pass = value;
        encrypt_pass.value_namespace = name_space;
        encrypt_pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-pass")
    {
        keychain_pass = value;
        keychain_pass.value_namespace = name_space;
        keychain_pass.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Passwords::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf.yfilter = yfilter;
    }
    if(value_path == "nbr-id")
    {
        nbr_id.yfilter = yfilter;
    }
    if(value_path == "password-num")
    {
        password_num.yfilter = yfilter;
    }
    if(value_path == "pass-required")
    {
        pass_required.yfilter = yfilter;
    }
    if(value_path == "clear-pass")
    {
        clear_pass.yfilter = yfilter;
    }
    if(value_path == "encrypt-pass")
    {
        encrypt_pass.yfilter = yfilter;
    }
    if(value_path == "keychain-pass")
    {
        keychain_pass.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Passwords::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-vrf" || name == "nbr-id" || name == "password-num" || name == "pass-required" || name == "clear-pass" || name == "encrypt-pass" || name == "keychain-pass")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Session::Session()
    :
    backoff{YType::uint32, "backoff"},
    seconds{YType::uint16, "seconds"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "session"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Session::~Session()
{
}

bool MplsLdp::MplsLdpConfig::Session::has_data() const
{
    return backoff.is_set
	|| seconds.is_set
	|| infinite.is_set;
}

bool MplsLdp::MplsLdpConfig::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff.is_set || is_set(backoff.yfilter)) leaf_name_data.push_back(backoff.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff")
    {
        backoff = value;
        backoff.value_namespace = name_space;
        backoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff")
    {
        backoff.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff" || name == "seconds" || name == "infinite")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelCfg()
{

    yang_name = "label-cfg"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::LabelCfg::~LabelCfg()
{
}

bool MplsLdp::MplsLdpConfig::LabelCfg::has_data() const
{
    for (std::size_t index=0; index<label_af_cfg.size(); index++)
    {
        if(label_af_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::LabelCfg::has_operation() const
{
    for (std::size_t index=0; index<label_af_cfg.size(); index++)
    {
        if(label_af_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::LabelCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::LabelCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-af-cfg")
    {
        for(auto const & c : label_af_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg>();
        c->parent = this;
        label_af_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::LabelCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_af_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::LabelCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::LabelCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::LabelCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-af-cfg")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::LabelAfCfg()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    prefix_filter{YType::str, "prefix-filter"},
    host_route_enable{YType::boolean, "host-route-enable"}
{

    yang_name = "label-af-cfg"; yang_parent_name = "label-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::~LabelAfCfg()
{
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::has_data() const
{
    for (std::size_t index=0; index<advt_filter.size(); index++)
    {
        if(advt_filter[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| af_name.is_set
	|| prefix_filter.is_set
	|| host_route_enable.is_set;
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::has_operation() const
{
    for (std::size_t index=0; index<advt_filter.size(); index++)
    {
        if(advt_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(prefix_filter.yfilter)
	|| ydk::is_set(host_route_enable.yfilter);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/label-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-af-cfg" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (prefix_filter.is_set || is_set(prefix_filter.yfilter)) leaf_name_data.push_back(prefix_filter.get_name_leafdata());
    if (host_route_enable.is_set || is_set(host_route_enable.yfilter)) leaf_name_data.push_back(host_route_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advt-filter")
    {
        for(auto const & c : advt_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter>();
        c->parent = this;
        advt_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advt_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-filter")
    {
        prefix_filter = value;
        prefix_filter.value_namespace = name_space;
        prefix_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-route-enable")
    {
        host_route_enable = value;
        host_route_enable.value_namespace = name_space;
        host_route_enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "prefix-filter")
    {
        prefix_filter.yfilter = yfilter;
    }
    if(value_path == "host-route-enable")
    {
        host_route_enable.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advt-filter" || name == "vrf-name" || name == "af-name" || name == "prefix-filter" || name == "host-route-enable")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::AdvtFilter()
    :
    prefix_filter{YType::str, "prefix-filter"},
    peer_filter{YType::str, "peer-filter"},
    interface{YType::str, "interface"},
    adv_label_cfg{YType::enumeration, "adv-label-cfg"}
{

    yang_name = "advt-filter"; yang_parent_name = "label-af-cfg"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::~AdvtFilter()
{
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::has_data() const
{
    return prefix_filter.is_set
	|| peer_filter.is_set
	|| interface.is_set
	|| adv_label_cfg.is_set;
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_filter.yfilter)
	|| ydk::is_set(peer_filter.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(adv_label_cfg.yfilter);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-filter" <<"[prefix-filter='" <<prefix_filter <<"']" <<"[peer-filter='" <<peer_filter <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_filter.is_set || is_set(prefix_filter.yfilter)) leaf_name_data.push_back(prefix_filter.get_name_leafdata());
    if (peer_filter.is_set || is_set(peer_filter.yfilter)) leaf_name_data.push_back(peer_filter.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (adv_label_cfg.is_set || is_set(adv_label_cfg.yfilter)) leaf_name_data.push_back(adv_label_cfg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-filter")
    {
        prefix_filter = value;
        prefix_filter.value_namespace = name_space;
        prefix_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-filter")
    {
        peer_filter = value;
        peer_filter.value_namespace = name_space;
        peer_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-label-cfg")
    {
        adv_label_cfg = value;
        adv_label_cfg.value_namespace = name_space;
        adv_label_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-filter")
    {
        prefix_filter.yfilter = yfilter;
    }
    if(value_path == "peer-filter")
    {
        peer_filter.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "adv-label-cfg")
    {
        adv_label_cfg.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-filter" || name == "peer-filter" || name == "interface" || name == "adv-label-cfg")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::Discovery()
    :
    instance_tlv{YType::boolean, "instance-tlv"}
    	,
    link_hello(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::LinkHello>())
	,targeted_hello(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello>())
	,int_trans_addrs(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs>())
{
    link_hello->parent = this;
    targeted_hello->parent = this;
    int_trans_addrs->parent = this;

    yang_name = "discovery"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::~Discovery()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::has_data() const
{
    return instance_tlv.is_set
	|| (link_hello !=  nullptr && link_hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data())
	|| (int_trans_addrs !=  nullptr && int_trans_addrs->has_data());
}

bool MplsLdp::MplsLdpConfig::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_tlv.yfilter)
	|| (link_hello !=  nullptr && link_hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation())
	|| (int_trans_addrs !=  nullptr && int_trans_addrs->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_tlv.is_set || is_set(instance_tlv.yfilter)) leaf_name_data.push_back(instance_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello")
    {
        if(link_hello == nullptr)
        {
            link_hello = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::LinkHello>();
        }
        return link_hello;
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello == nullptr)
        {
            targeted_hello = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello>();
        }
        return targeted_hello;
    }

    if(child_yang_name == "int-trans-addrs")
    {
        if(int_trans_addrs == nullptr)
        {
            int_trans_addrs = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs>();
        }
        return int_trans_addrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_hello != nullptr)
    {
        children["link-hello"] = link_hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    if(int_trans_addrs != nullptr)
    {
        children["int-trans-addrs"] = int_trans_addrs;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-tlv")
    {
        instance_tlv = value;
        instance_tlv.value_namespace = name_space;
        instance_tlv.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-tlv")
    {
        instance_tlv.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello" || name == "targeted-hello" || name == "int-trans-addrs" || name == "instance-tlv")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::LinkHello::LinkHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
{

    yang_name = "link-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::LinkHello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set;
}

bool MplsLdp::MplsLdpConfig::Discovery::LinkHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Discovery::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Discovery::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "interval")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::TargetedHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"},
    enable{YType::boolean, "enable"}
    	,
    accept(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept>())
{
    accept->parent = this;

    yang_name = "targeted-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set
	|| enable.is_set
	|| (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept" || name == "holdtime" || name == "interval" || name == "enable")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::Accept()
    :
    enable{YType::boolean, "enable"},
    src_filter{YType::str, "src-filter"}
{

    yang_name = "accept"; yang_parent_name = "targeted-hello"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::~Accept()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::has_data() const
{
    return enable.is_set
	|| src_filter.is_set;
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(src_filter.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/targeted-hello/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (src_filter.is_set || is_set(src_filter.yfilter)) leaf_name_data.push_back(src_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-filter")
    {
        src_filter = value;
        src_filter.value_namespace = name_space;
        src_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "src-filter")
    {
        src_filter.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "src-filter")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddrs()
{

    yang_name = "int-trans-addrs"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::~IntTransAddrs()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::has_data() const
{
    for (std::size_t index=0; index<int_trans_addr.size(); index++)
    {
        if(int_trans_addr[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::has_operation() const
{
    for (std::size_t index=0; index<int_trans_addr.size(); index++)
    {
        if(int_trans_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "int-trans-addrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "int-trans-addr")
    {
        for(auto const & c : int_trans_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr>();
        c->parent = this;
        int_trans_addr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : int_trans_addr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int-trans-addr")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::IntTransAddr()
    :
    af_name{YType::enumeration, "af-name"},
    int_name{YType::str, "int-name"},
    trans_ip{YType::str, "trans-ip"},
    trans_int{YType::str, "trans-int"}
{

    yang_name = "int-trans-addr"; yang_parent_name = "int-trans-addrs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::~IntTransAddr()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::has_data() const
{
    return af_name.is_set
	|| int_name.is_set
	|| trans_ip.is_set
	|| trans_int.is_set;
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(int_name.yfilter)
	|| ydk::is_set(trans_ip.yfilter)
	|| ydk::is_set(trans_int.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/int-trans-addrs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "int-trans-addr" <<"[af-name='" <<af_name <<"']" <<"[int-name='" <<int_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (int_name.is_set || is_set(int_name.yfilter)) leaf_name_data.push_back(int_name.get_name_leafdata());
    if (trans_ip.is_set || is_set(trans_ip.yfilter)) leaf_name_data.push_back(trans_ip.get_name_leafdata());
    if (trans_int.is_set || is_set(trans_int.yfilter)) leaf_name_data.push_back(trans_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "int-name")
    {
        int_name = value;
        int_name.value_namespace = name_space;
        int_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trans-ip")
    {
        trans_ip = value;
        trans_ip.value_namespace = name_space;
        trans_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trans-int")
    {
        trans_int = value;
        trans_int.value_namespace = name_space;
        trans_int.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "int-name")
    {
        int_name.yfilter = yfilter;
    }
    if(value_path == "trans-ip")
    {
        trans_ip.yfilter = yfilter;
    }
    if(value_path == "trans-int")
    {
        trans_int.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "int-name" || name == "trans-ip" || name == "trans-int")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GracefulRestart::GracefulRestart()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    forwarding_holding{YType::uint32, "forwarding-holding"},
    max_recovery{YType::uint32, "max-recovery"},
    nbr_liveness{YType::uint32, "nbr-liveness"}
{

    yang_name = "graceful-restart"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<helper.size(); index++)
    {
        if(helper[index]->has_data())
            return true;
    }
    return is_graceful_restartable.is_set
	|| forwarding_holding.is_set
	|| max_recovery.is_set
	|| nbr_liveness.is_set;
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<helper.size(); index++)
    {
        if(helper[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_graceful_restartable.yfilter)
	|| ydk::is_set(forwarding_holding.yfilter)
	|| ydk::is_set(max_recovery.yfilter)
	|| ydk::is_set(nbr_liveness.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.yfilter)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (forwarding_holding.is_set || is_set(forwarding_holding.yfilter)) leaf_name_data.push_back(forwarding_holding.get_name_leafdata());
    if (max_recovery.is_set || is_set(max_recovery.yfilter)) leaf_name_data.push_back(max_recovery.get_name_leafdata());
    if (nbr_liveness.is_set || is_set(nbr_liveness.yfilter)) leaf_name_data.push_back(nbr_liveness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        for(auto const & c : helper)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::GracefulRestart::Helper>();
        c->parent = this;
        helper.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
        is_graceful_restartable.value_namespace = name_space;
        is_graceful_restartable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-holding")
    {
        forwarding_holding = value;
        forwarding_holding.value_namespace = name_space;
        forwarding_holding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-recovery")
    {
        max_recovery = value;
        max_recovery.value_namespace = name_space;
        max_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-liveness")
    {
        nbr_liveness = value;
        nbr_liveness.value_namespace = name_space;
        nbr_liveness.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable.yfilter = yfilter;
    }
    if(value_path == "forwarding-holding")
    {
        forwarding_holding.yfilter = yfilter;
    }
    if(value_path == "max-recovery")
    {
        max_recovery.yfilter = yfilter;
    }
    if(value_path == "nbr-liveness")
    {
        nbr_liveness.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "is-graceful-restartable" || name == "forwarding-holding" || name == "max-recovery" || name == "nbr-liveness")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::GracefulRestart::Helper::Helper()
    :
    helper_vrf{YType::str, "helper-vrf"},
    helper_filter{YType::str, "helper-filter"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::GracefulRestart::Helper::~Helper()
{
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::Helper::has_data() const
{
    return helper_vrf.is_set
	|| helper_filter.is_set;
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helper_vrf.yfilter)
	|| ydk::is_set(helper_filter.yfilter);
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper" <<"[helper-vrf='" <<helper_vrf <<"']" <<"[helper-filter='" <<helper_filter <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_vrf.is_set || is_set(helper_vrf.yfilter)) leaf_name_data.push_back(helper_vrf.get_name_leafdata());
    if (helper_filter.is_set || is_set(helper_filter.yfilter)) leaf_name_data.push_back(helper_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helper-vrf")
    {
        helper_vrf = value;
        helper_vrf.value_namespace = name_space;
        helper_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-filter")
    {
        helper_filter = value;
        helper_filter.value_namespace = name_space;
        helper_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helper-vrf")
    {
        helper_vrf.yfilter = yfilter;
    }
    if(value_path == "helper-filter")
    {
        helper_filter.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-vrf" || name == "helper-filter")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Logging::Logging()
    :
    graceful_restart{YType::boolean, "graceful-restart"},
    neighbor{YType::boolean, "neighbor"},
    nsr{YType::boolean, "nsr"},
    adjacency{YType::boolean, "adjacency"},
    session_protection{YType::boolean, "session-protection"}
    	,
    password(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password>())
{
    password->parent = this;

    yang_name = "logging"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Logging::~Logging()
{
}

bool MplsLdp::MplsLdpConfig::Logging::has_data() const
{
    return graceful_restart.is_set
	|| neighbor.is_set
	|| nsr.is_set
	|| adjacency.is_set
	|| session_protection.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::MplsLdpConfig::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(adjacency.yfilter)
	|| ydk::is_set(session_protection.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());
    if (session_protection.is_set || is_set(session_protection.yfilter)) leaf_name_data.push_back(session_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-protection")
    {
        session_protection = value;
        session_protection.value_namespace = name_space;
        session_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
    if(value_path == "session-protection")
    {
        session_protection.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "graceful-restart" || name == "neighbor" || name == "nsr" || name == "adjacency" || name == "session-protection")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Logging::Password::Password()
    :
    config_msg(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg>())
	,rollover_msg(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg>())
{
    config_msg->parent = this;
    rollover_msg->parent = this;

    yang_name = "password"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Logging::Password::~Password()
{
}

bool MplsLdp::MplsLdpConfig::Logging::Password::has_data() const
{
    return (config_msg !=  nullptr && config_msg->has_data())
	|| (rollover_msg !=  nullptr && rollover_msg->has_data());
}

bool MplsLdp::MplsLdpConfig::Logging::Password::has_operation() const
{
    return is_set(yfilter)
	|| (config_msg !=  nullptr && config_msg->has_operation())
	|| (rollover_msg !=  nullptr && rollover_msg->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Logging::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Logging::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-msg")
    {
        if(config_msg == nullptr)
        {
            config_msg = std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg>();
        }
        return config_msg;
    }

    if(child_yang_name == "rollover-msg")
    {
        if(rollover_msg == nullptr)
        {
            rollover_msg = std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg>();
        }
        return rollover_msg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Logging::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_msg != nullptr)
    {
        children["config-msg"] = config_msg;
    }

    if(rollover_msg != nullptr)
    {
        children["rollover-msg"] = rollover_msg;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Logging::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Logging::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Logging::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-msg" || name == "rollover-msg")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::ConfigMsg()
    :
    enable{YType::boolean, "enable"},
    rate_limit{YType::uint32, "rate-limit"}
{

    yang_name = "config-msg"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::~ConfigMsg()
{
}

bool MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::has_data() const
{
    return enable.is_set
	|| rate_limit.is_set;
}

bool MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-msg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "rate-limit")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::RolloverMsg()
    :
    enable{YType::boolean, "enable"},
    rate_limit{YType::uint32, "rate-limit"}
{

    yang_name = "rollover-msg"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::~RolloverMsg()
{
}

bool MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::has_data() const
{
    return enable.is_set
	|| rate_limit.is_set;
}

bool MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover-msg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "rate-limit")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Interfaces::~Interfaces()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Interface()
    :
    vrf{YType::str, "vrf"},
    interface{YType::str, "interface"},
    link_hello_int{YType::uint32, "link-hello-int"},
    link_hello_hold{YType::uint32, "link-hello-hold"},
    disable_quick_start_int{YType::boolean, "disable-quick-start-int"},
    seconds{YType::uint32, "seconds"},
    disable_delay{YType::empty, "disable-delay"}
    	,
    afs(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs>())
{
    afs->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::has_data() const
{
    return vrf.is_set
	|| interface.is_set
	|| link_hello_int.is_set
	|| link_hello_hold.is_set
	|| disable_quick_start_int.is_set
	|| seconds.is_set
	|| disable_delay.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(link_hello_int.yfilter)
	|| ydk::is_set(link_hello_hold.yfilter)
	|| ydk::is_set(disable_quick_start_int.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[vrf='" <<vrf <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (link_hello_int.is_set || is_set(link_hello_int.yfilter)) leaf_name_data.push_back(link_hello_int.get_name_leafdata());
    if (link_hello_hold.is_set || is_set(link_hello_hold.yfilter)) leaf_name_data.push_back(link_hello_hold.get_name_leafdata());
    if (disable_quick_start_int.is_set || is_set(disable_quick_start_int.yfilter)) leaf_name_data.push_back(disable_quick_start_int.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-hello-int")
    {
        link_hello_int = value;
        link_hello_int.value_namespace = name_space;
        link_hello_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-hello-hold")
    {
        link_hello_hold = value;
        link_hello_hold.value_namespace = name_space;
        link_hello_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-quick-start-int")
    {
        disable_quick_start_int = value;
        disable_quick_start_int.value_namespace = name_space;
        disable_quick_start_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "link-hello-int")
    {
        link_hello_int.yfilter = yfilter;
    }
    if(value_path == "link-hello-hold")
    {
        link_hello_hold.yfilter = yfilter;
    }
    if(value_path == "disable-quick-start-int")
    {
        disable_quick_start_int.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf" || name == "interface" || name == "link-hello-int" || name == "link-hello-hold" || name == "disable-quick-start-int" || name == "seconds" || name == "disable-delay")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::boolean, "enable"},
    autoconfig_disable{YType::boolean, "autoconfig-disable"}
    	,
    bgp_redist(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist>())
{
    bgp_redist->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| autoconfig_disable.is_set
	|| (bgp_redist !=  nullptr && bgp_redist->has_data());
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(autoconfig_disable.yfilter)
	|| (bgp_redist !=  nullptr && bgp_redist->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (autoconfig_disable.is_set || is_set(autoconfig_disable.yfilter)) leaf_name_data.push_back(autoconfig_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-redist")
    {
        if(bgp_redist == nullptr)
        {
            bgp_redist = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist>();
        }
        return bgp_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_redist != nullptr)
    {
        children["bgp-redist"] = bgp_redist;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoconfig-disable")
    {
        autoconfig_disable = value;
        autoconfig_disable.value_namespace = name_space;
        autoconfig_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "autoconfig-disable")
    {
        autoconfig_disable.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-redist" || name == "af-name" || name == "enable" || name == "autoconfig-disable")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::BgpRedist()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    advertise_to{YType::str, "advertise-to"},
    enable{YType::boolean, "enable"}
{

    yang_name = "bgp-redist"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::~BgpRedist()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| advertise_to.is_set
	|| enable.is_set;
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(advertise_to.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (advertise_to.is_set || is_set(advertise_to.yfilter)) leaf_name_data.push_back(advertise_to.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-to")
    {
        advertise_to = value;
        advertise_to.value_namespace = name_space;
        advertise_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "advertise-to")
    {
        advertise_to.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "advertise-to" || name == "enable")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Routing::Routing()
{

    yang_name = "routing"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Routing::~Routing()
{
}

bool MplsLdp::MplsLdpConfig::Routing::has_data() const
{
    for (std::size_t index=0; index<routing_inst.size(); index++)
    {
        if(routing_inst[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpConfig::Routing::has_operation() const
{
    for (std::size_t index=0; index<routing_inst.size(); index++)
    {
        if(routing_inst[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::MplsLdpConfig::Routing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-inst")
    {
        for(auto const & c : routing_inst)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::MplsLdpConfig::Routing::RoutingInst>();
        c->parent = this;
        routing_inst.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_inst)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::MplsLdpConfig::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::MplsLdpConfig::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-inst")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::Routing::RoutingInst::RoutingInst()
    :
    routing_inst_name{YType::str, "routing-inst-name"},
    autoconfig_enable{YType::boolean, "autoconfig-enable"},
    area_id{YType::uint32, "area-id"},
    level_id{YType::enumeration, "level-id"},
    sync{YType::boolean, "sync"}
{

    yang_name = "routing-inst"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::Routing::RoutingInst::~RoutingInst()
{
}

bool MplsLdp::MplsLdpConfig::Routing::RoutingInst::has_data() const
{
    return routing_inst_name.is_set
	|| autoconfig_enable.is_set
	|| area_id.is_set
	|| level_id.is_set
	|| sync.is_set;
}

bool MplsLdp::MplsLdpConfig::Routing::RoutingInst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing_inst_name.yfilter)
	|| ydk::is_set(autoconfig_enable.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(level_id.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/routing/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-inst" <<"[routing-inst-name='" <<routing_inst_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing_inst_name.is_set || is_set(routing_inst_name.yfilter)) leaf_name_data.push_back(routing_inst_name.get_name_leafdata());
    if (autoconfig_enable.is_set || is_set(autoconfig_enable.yfilter)) leaf_name_data.push_back(autoconfig_enable.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (level_id.is_set || is_set(level_id.yfilter)) leaf_name_data.push_back(level_id.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::Routing::RoutingInst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing-inst-name")
    {
        routing_inst_name = value;
        routing_inst_name.value_namespace = name_space;
        routing_inst_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoconfig-enable")
    {
        autoconfig_enable = value;
        autoconfig_enable.value_namespace = name_space;
        autoconfig_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-id")
    {
        level_id = value;
        level_id.value_namespace = name_space;
        level_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::Routing::RoutingInst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing-inst-name")
    {
        routing_inst_name.yfilter = yfilter;
    }
    if(value_path == "autoconfig-enable")
    {
        autoconfig_enable.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "level-id")
    {
        level_id.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::Routing::RoutingInst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-inst-name" || name == "autoconfig-enable" || name == "area-id" || name == "level-id" || name == "sync")
        return true;
    return false;
}

MplsLdp::MplsLdpConfig::DualStack::DualStack()
    :
    max_wait{YType::uint32, "max-wait"},
    prefer_ipv4_peers{YType::str, "prefer-ipv4-peers"}
{

    yang_name = "dual-stack"; yang_parent_name = "mpls-ldp-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLdp::MplsLdpConfig::DualStack::~DualStack()
{
}

bool MplsLdp::MplsLdpConfig::DualStack::has_data() const
{
    return max_wait.is_set
	|| prefer_ipv4_peers.is_set;
}

bool MplsLdp::MplsLdpConfig::DualStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| ydk::is_set(prefer_ipv4_peers.yfilter);
}

std::string MplsLdp::MplsLdpConfig::DualStack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::MplsLdpConfig::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::MplsLdpConfig::DualStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (prefer_ipv4_peers.is_set || is_set(prefer_ipv4_peers.yfilter)) leaf_name_data.push_back(prefer_ipv4_peers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::DualStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::DualStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::MplsLdpConfig::DualStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer-ipv4-peers")
    {
        prefer_ipv4_peers = value;
        prefer_ipv4_peers.value_namespace = name_space;
        prefer_ipv4_peers.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::MplsLdpConfig::DualStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
    if(value_path == "prefer-ipv4-peers")
    {
        prefer_ipv4_peers.yfilter = yfilter;
    }
}

bool MplsLdp::MplsLdpConfig::DualStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-wait" || name == "prefer-ipv4-peers")
        return true;
    return false;
}

ClearMsgCounters::ClearMsgCounters()
    :
    input(std::make_shared<ClearMsgCounters::Input>())
	,output(std::make_shared<ClearMsgCounters::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "clear-msg-counters"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp"; is_top_level_class = true; has_list_ancestor = false;
}

ClearMsgCounters::~ClearMsgCounters()
{
}

bool ClearMsgCounters::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearMsgCounters::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearMsgCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMsgCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMsgCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearMsgCounters::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearMsgCounters::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void ClearMsgCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearMsgCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearMsgCounters::clone_ptr() const
{
    return std::make_shared<ClearMsgCounters>();
}

std::string ClearMsgCounters::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearMsgCounters::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearMsgCounters::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearMsgCounters::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ClearMsgCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ClearMsgCounters::Input::Input()
    :
    vrf_name{YType::str, "vrf-name"},
    nbr_ip{YType::str, "nbr-ip"},
    all{YType::empty, "all"}
{

    yang_name = "input"; yang_parent_name = "clear-msg-counters"; is_top_level_class = false; has_list_ancestor = false;
}

ClearMsgCounters::Input::~Input()
{
}

bool ClearMsgCounters::Input::has_data() const
{
    return vrf_name.is_set
	|| nbr_ip.is_set
	|| all.is_set;
}

bool ClearMsgCounters::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(nbr_ip.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string ClearMsgCounters::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearMsgCounters::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMsgCounters::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.yfilter)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMsgCounters::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCounters::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMsgCounters::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
        nbr_ip.value_namespace = name_space;
        nbr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearMsgCounters::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool ClearMsgCounters::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "nbr-ip" || name == "all")
        return true;
    return false;
}

ClearMsgCounters::Output::Output()
    :
    status{YType::str, "status"}
{

    yang_name = "output"; yang_parent_name = "clear-msg-counters"; is_top_level_class = false; has_list_ancestor = false;
}

ClearMsgCounters::Output::~Output()
{
}

bool ClearMsgCounters::Output::has_data() const
{
    return status.is_set;
}

bool ClearMsgCounters::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ClearMsgCounters::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearMsgCounters::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMsgCounters::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMsgCounters::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCounters::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMsgCounters::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ClearMsgCounters::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ClearMsgCounters::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

RestartNeighbor::RestartNeighbor()
    :
    input(std::make_shared<RestartNeighbor::Input>())
	,output(std::make_shared<RestartNeighbor::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "restart-neighbor"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp"; is_top_level_class = true; has_list_ancestor = false;
}

RestartNeighbor::~RestartNeighbor()
{
}

bool RestartNeighbor::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool RestartNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string RestartNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestartNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RestartNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RestartNeighbor::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<RestartNeighbor::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void RestartNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RestartNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RestartNeighbor::clone_ptr() const
{
    return std::make_shared<RestartNeighbor>();
}

std::string RestartNeighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RestartNeighbor::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RestartNeighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RestartNeighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RestartNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

RestartNeighbor::Input::Input()
    :
    vrf_name{YType::str, "vrf-name"},
    nbr_ip{YType::str, "nbr-ip"},
    all{YType::empty, "all"}
{

    yang_name = "input"; yang_parent_name = "restart-neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

RestartNeighbor::Input::~Input()
{
}

bool RestartNeighbor::Input::has_data() const
{
    return vrf_name.is_set
	|| nbr_ip.is_set
	|| all.is_set;
}

bool RestartNeighbor::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(nbr_ip.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string RestartNeighbor::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string RestartNeighbor::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestartNeighbor::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.yfilter)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RestartNeighbor::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighbor::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RestartNeighbor::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
        nbr_ip.value_namespace = name_space;
        nbr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void RestartNeighbor::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool RestartNeighbor::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "nbr-ip" || name == "all")
        return true;
    return false;
}

RestartNeighbor::Output::Output()
    :
    status{YType::str, "status"}
{

    yang_name = "output"; yang_parent_name = "restart-neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

RestartNeighbor::Output::~Output()
{
}

bool RestartNeighbor::Output::has_data() const
{
    return status.is_set;
}

bool RestartNeighbor::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RestartNeighbor::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string RestartNeighbor::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RestartNeighbor::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RestartNeighbor::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighbor::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RestartNeighbor::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RestartNeighbor::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RestartNeighbor::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

ClearForwarding::ClearForwarding()
    :
    input(std::make_shared<ClearForwarding::Input>())
	,output(std::make_shared<ClearForwarding::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "clear-forwarding"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp"; is_top_level_class = true; has_list_ancestor = false;
}

ClearForwarding::~ClearForwarding()
{
}

bool ClearForwarding::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearForwarding::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearForwarding::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearForwarding::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void ClearForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearForwarding::clone_ptr() const
{
    return std::make_shared<ClearForwarding>();
}

std::string ClearForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearForwarding::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearForwarding::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ClearForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ClearForwarding::Input::Input()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix_ip{YType::str, "prefix-ip"},
    all{YType::empty, "all"}
{

    yang_name = "input"; yang_parent_name = "clear-forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

ClearForwarding::Input::~Input()
{
}

bool ClearForwarding::Input::has_data() const
{
    return vrf_name.is_set
	|| prefix_ip.is_set
	|| all.is_set;
}

bool ClearForwarding::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix_ip.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string ClearForwarding::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearForwarding::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearForwarding::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix_ip.is_set || is_set(prefix_ip.yfilter)) leaf_name_data.push_back(prefix_ip.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearForwarding::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwarding::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearForwarding::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-ip")
    {
        prefix_ip = value;
        prefix_ip.value_namespace = name_space;
        prefix_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearForwarding::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix-ip")
    {
        prefix_ip.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool ClearForwarding::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "prefix-ip" || name == "all")
        return true;
    return false;
}

ClearForwarding::Output::Output()
    :
    status{YType::str, "status"}
{

    yang_name = "output"; yang_parent_name = "clear-forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

ClearForwarding::Output::~Output()
{
}

bool ClearForwarding::Output::has_data() const
{
    return status.is_set;
}

bool ClearForwarding::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ClearForwarding::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearForwarding::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearForwarding::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearForwarding::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwarding::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearForwarding::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ClearForwarding::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ClearForwarding::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

NsrSyncNackRsnNone::NsrSyncNackRsnNone()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-none")
{

}

NsrSyncNackRsnNone::~NsrSyncNackRsnNone()
{
}

NsrSyncNackRsnTblIdMismatch::NsrSyncNackRsnTblIdMismatch()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-tbl-id-mismatch")
{

}

NsrSyncNackRsnTblIdMismatch::~NsrSyncNackRsnTblIdMismatch()
{
}

NsrSyncNackRsnPpExists::NsrSyncNackRsnPpExists()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-pp-exists")
{

}

NsrSyncNackRsnPpExists::~NsrSyncNackRsnPpExists()
{
}

NsrSyncNackRsnMissingElem::NsrSyncNackRsnMissingElem()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-missing-elem")
{

}

NsrSyncNackRsnMissingElem::~NsrSyncNackRsnMissingElem()
{
}

NsrSyncNackRsnNoPEndSock::NsrSyncNackRsnNoPEndSock()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-no-p-end-sock")
{

}

NsrSyncNackRsnNoPEndSock::~NsrSyncNackRsnNoPEndSock()
{
}

NsrSyncNackRsnPEndSockNotSynced::NsrSyncNackRsnPEndSockNotSynced()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-p-end-sock-not-synced")
{

}

NsrSyncNackRsnPEndSockNotSynced::~NsrSyncNackRsnPEndSockNotSynced()
{
}

NsrSyncNackRsnErrAdjAdd::NsrSyncNackRsnErrAdjAdd()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-adj-add")
{

}

NsrSyncNackRsnErrAdjAdd::~NsrSyncNackRsnErrAdjAdd()
{
}

NsrSyncNackRsnErrDhcAdd::NsrSyncNackRsnErrDhcAdd()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-dhc-add")
{

}

NsrSyncNackRsnErrDhcAdd::~NsrSyncNackRsnErrDhcAdd()
{
}

NsrSyncNackRsnEnomem::NsrSyncNackRsnEnomem()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-enomem")
{

}

NsrSyncNackRsnEnomem::~NsrSyncNackRsnEnomem()
{
}

NsrSyncNackRsnErrTpCreate::NsrSyncNackRsnErrTpCreate()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-tp-create")
{

}

NsrSyncNackRsnErrTpCreate::~NsrSyncNackRsnErrTpCreate()
{
}

NsrSyncNackRsnErrPpCreate::NsrSyncNackRsnErrPpCreate()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-pp-create")
{

}

NsrSyncNackRsnErrPpCreate::~NsrSyncNackRsnErrPpCreate()
{
}

NsrSyncNackRsnErrAddrBind::NsrSyncNackRsnErrAddrBind()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-addr-bind")
{

}

NsrSyncNackRsnErrAddrBind::~NsrSyncNackRsnErrAddrBind()
{
}

NsrSyncNackRsnErrRxBadPie::NsrSyncNackRsnErrRxBadPie()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-bad-pie")
{

}

NsrSyncNackRsnErrRxBadPie::~NsrSyncNackRsnErrRxBadPie()
{
}

NsrSyncNackRsnErrRxNotif::NsrSyncNackRsnErrRxNotif()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-notif")
{

}

NsrSyncNackRsnErrRxNotif::~NsrSyncNackRsnErrRxNotif()
{
}

NsrSyncNackRsnErrRxUnexpOpen::NsrSyncNackRsnErrRxUnexpOpen()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-unexp-open")
{

}

NsrSyncNackRsnErrRxUnexpOpen::~NsrSyncNackRsnErrRxUnexpOpen()
{
}

NsrSyncNackRsnErrUnexpPeerDown::NsrSyncNackRsnErrUnexpPeerDown()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-unexp-peer-down")
{

}

NsrSyncNackRsnErrUnexpPeerDown::~NsrSyncNackRsnErrUnexpPeerDown()
{
}

NsrSyncNackRsnErrAppNotFound::NsrSyncNackRsnErrAppNotFound()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-app-not-found")
{

}

NsrSyncNackRsnErrAppNotFound::~NsrSyncNackRsnErrAppNotFound()
{
}

NsrSyncNackRsnErrAppInvalid::NsrSyncNackRsnErrAppInvalid()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-app-invalid")
{

}

NsrSyncNackRsnErrAppInvalid::~NsrSyncNackRsnErrAppInvalid()
{
}

NsrSyncNackRsnNoCtx::NsrSyncNackRsnNoCtx()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-no-ctx")
{

}

NsrSyncNackRsnNoCtx::~NsrSyncNackRsnNoCtx()
{
}

NsrPeerSyncErrNone::NsrPeerSyncErrNone()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-none")
{

}

NsrPeerSyncErrNone::~NsrPeerSyncErrNone()
{
}

NsrPeerSyncErrLdpSyncNack::NsrPeerSyncErrLdpSyncNack()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-sync-nack")
{

}

NsrPeerSyncErrLdpSyncNack::~NsrPeerSyncErrLdpSyncNack()
{
}

NsrPeerSyncErrSyncPrep::NsrPeerSyncErrSyncPrep()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-sync-prep")
{

}

NsrPeerSyncErrSyncPrep::~NsrPeerSyncErrSyncPrep()
{
}

NsrPeerSyncErrTcpPeer::NsrPeerSyncErrTcpPeer()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-tcp-peer")
{

}

NsrPeerSyncErrTcpPeer::~NsrPeerSyncErrTcpPeer()
{
}

NsrPeerSyncErrTcpGbl::NsrPeerSyncErrTcpGbl()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-tcp-gbl")
{

}

NsrPeerSyncErrTcpGbl::~NsrPeerSyncErrTcpGbl()
{
}

NsrPeerSyncErrLdpPeer::NsrPeerSyncErrLdpPeer()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-peer")
{

}

NsrPeerSyncErrLdpPeer::~NsrPeerSyncErrLdpPeer()
{
}

NsrPeerSyncErrLdpGbl::NsrPeerSyncErrLdpGbl()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-gbl")
{

}

NsrPeerSyncErrLdpGbl::~NsrPeerSyncErrLdpGbl()
{
}

NsrPeerSyncErrAppFail::NsrPeerSyncErrAppFail()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-app-fail")
{

}

NsrPeerSyncErrAppFail::~NsrPeerSyncErrAppFail()
{
}

IcpmTypeIccp::IcpmTypeIccp()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:icpm-type-iccp")
{

}

IcpmTypeIccp::~IcpmTypeIccp()
{
}

IccpTypeMlacp::IccpTypeMlacp()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:iccp-type-mlacp")
{

}

IccpTypeMlacp::~IccpTypeMlacp()
{
}

LdpNsrPeerSyncStNone::LdpNsrPeerSyncStNone()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-none")
{

}

LdpNsrPeerSyncStNone::~LdpNsrPeerSyncStNone()
{
}

LdpNsrPeerSyncStWait::LdpNsrPeerSyncStWait()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-wait")
{

}

LdpNsrPeerSyncStWait::~LdpNsrPeerSyncStWait()
{
}

LdpNsrPeerSyncStReady::LdpNsrPeerSyncStReady()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-ready")
{

}

LdpNsrPeerSyncStReady::~LdpNsrPeerSyncStReady()
{
}

LdpNsrPeerSyncStPrep::LdpNsrPeerSyncStPrep()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-prep")
{

}

LdpNsrPeerSyncStPrep::~LdpNsrPeerSyncStPrep()
{
}

LdpNsrPeerSyncStAppWait::LdpNsrPeerSyncStAppWait()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-app-wait")
{

}

LdpNsrPeerSyncStAppWait::~LdpNsrPeerSyncStAppWait()
{
}

LdpNsrPeerSyncStOper::LdpNsrPeerSyncStOper()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-oper")
{

}

LdpNsrPeerSyncStOper::~LdpNsrPeerSyncStOper()
{
}

NsrStatusReady::NsrStatusReady()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-status-ready")
{

}

NsrStatusReady::~NsrStatusReady()
{
}

NsrStatusNotReady::NsrStatusNotReady()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-status-not-ready")
{

}

NsrStatusNotReady::~NsrStatusNotReady()
{
}

NsrStatusDisabled::NsrStatusDisabled()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:nsr-status-disabled")
{

}

NsrStatusDisabled::~NsrStatusDisabled()
{
}

DownNbrReasonNa::DownNbrReasonNa()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:down-nbr-reason-na")
{

}

DownNbrReasonNa::~DownNbrReasonNa()
{
}

DownNbrReasonNbrHold::DownNbrReasonNbrHold()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:down-nbr-reason-nbr-hold")
{

}

DownNbrReasonNbrHold::~DownNbrReasonNbrHold()
{
}

DownNbrReasonDiscHello::DownNbrReasonDiscHello()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:down-nbr-reason-disc-hello")
{

}

DownNbrReasonDiscHello::~DownNbrReasonDiscHello()
{
}

RoutePathLblOwnerNone::RoutePathLblOwnerNone()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-none")
{

}

RoutePathLblOwnerNone::~RoutePathLblOwnerNone()
{
}

RoutePathLblOwnerLdp::RoutePathLblOwnerLdp()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-ldp")
{

}

RoutePathLblOwnerLdp::~RoutePathLblOwnerLdp()
{
}

RoutePathLblOwnerBgp::RoutePathLblOwnerBgp()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-bgp")
{

}

RoutePathLblOwnerBgp::~RoutePathLblOwnerBgp()
{
}

RoutePathLblOwnerStatic::RoutePathLblOwnerStatic()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-static")
{

}

RoutePathLblOwnerStatic::~RoutePathLblOwnerStatic()
{
}

LabelTypeMpls::LabelTypeMpls()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:label-type-mpls")
{

}

LabelTypeMpls::~LabelTypeMpls()
{
}

LabelTypeUnLabeled::LabelTypeUnLabeled()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:label-type-un-labeled")
{

}

LabelTypeUnLabeled::~LabelTypeUnLabeled()
{
}

LabelTypeUnknown::LabelTypeUnknown()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:label-type-unknown")
{

}

LabelTypeUnknown::~LabelTypeUnknown()
{
}

RoutePathIpNoFlag::RoutePathIpNoFlag()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-ip-no-flag")
{

}

RoutePathIpNoFlag::~RoutePathIpNoFlag()
{
}

RoutePathIpProtected::RoutePathIpProtected()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-ip-protected")
{

}

RoutePathIpProtected::~RoutePathIpProtected()
{
}

RoutePathIpBackup::RoutePathIpBackup()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-ip-backup")
{

}

RoutePathIpBackup::~RoutePathIpBackup()
{
}

RoutePathIpBackupRemote::RoutePathIpBackupRemote()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-ip-backup-remote")
{

}

RoutePathIpBackupRemote::~RoutePathIpBackupRemote()
{
}

RoutePathIpBgpBackup::RoutePathIpBgpBackup()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:route-path-ip-bgp-backup")
{

}

RoutePathIpBgpBackup::~RoutePathIpBgpBackup()
{
}

IgpSyncDownReasonNa::IgpSyncDownReasonNa()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-na")
{

}

IgpSyncDownReasonNa::~IgpSyncDownReasonNa()
{
}

IgpSyncDownReasonNoHelloAdj::IgpSyncDownReasonNoHelloAdj()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-no-hello-adj")
{

}

IgpSyncDownReasonNoHelloAdj::~IgpSyncDownReasonNoHelloAdj()
{
}

IgpSyncDownReasonNoPeerSess::IgpSyncDownReasonNoPeerSess()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-no-peer-sess")
{

}

IgpSyncDownReasonNoPeerSess::~IgpSyncDownReasonNoPeerSess()
{
}

IgpSyncDownReasonPeerUpdateNotDone::IgpSyncDownReasonPeerUpdateNotDone()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-peer-update-not-done")
{

}

IgpSyncDownReasonPeerUpdateNotDone::~IgpSyncDownReasonPeerUpdateNotDone()
{
}

IgpSyncDownReasonPeerUpdateNotReceived::IgpSyncDownReasonPeerUpdateNotReceived()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-peer-update-not-received")
{

}

IgpSyncDownReasonPeerUpdateNotReceived::~IgpSyncDownReasonPeerUpdateNotReceived()
{
}

IgpSyncDownReasonInternal::IgpSyncDownReasonInternal()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp", "Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-internal")
{

}

IgpSyncDownReasonInternal::~IgpSyncDownReasonInternal()
{
}

const Enum::YLeaf LoopDetectionType::none {1, "none"};
const Enum::YLeaf LoopDetectionType::other {2, "other"};
const Enum::YLeaf LoopDetectionType::hop_count {3, "hop-count"};
const Enum::YLeaf LoopDetectionType::path_vector {4, "path-vector"};
const Enum::YLeaf LoopDetectionType::hop_count_and_path_vector {5, "hop-count-and-path-vector"};

const Enum::YLeaf SessionState::nonexistent {1, "nonexistent"};
const Enum::YLeaf SessionState::initialized {2, "initialized"};
const Enum::YLeaf SessionState::openrec {3, "openrec"};
const Enum::YLeaf SessionState::opensent {4, "opensent"};
const Enum::YLeaf SessionState::operational {5, "operational"};

const Enum::YLeaf AdjState::nonex {0, "nonex"};
const Enum::YLeaf AdjState::unsol_op_pdg {1, "unsol-op-pdg"};
const Enum::YLeaf AdjState::deferred {2, "deferred"};
const Enum::YLeaf AdjState::estab {3, "estab"};
const Enum::YLeaf AdjState::lib_exp_wait {4, "lib-exp-wait"};
const Enum::YLeaf AdjState::destroyed {5, "destroyed"};

const Enum::YLeaf AdvLabelType::use_lable {1, "use-lable"};
const Enum::YLeaf AdvLabelType::use_explicit {2, "use-explicit"};
const Enum::YLeaf AdvLabelType::use_implicit {3, "use-implicit"};
const Enum::YLeaf AdvLabelType::none {4, "none"};

const Enum::YLeaf NbrBgpAdvtState::not_applicable {0, "not-applicable"};
const Enum::YLeaf NbrBgpAdvtState::permit {1, "permit"};
const Enum::YLeaf NbrBgpAdvtState::deny {2, "deny"};

const Enum::YLeaf IccpState::nonexistent {1, "nonexistent"};
const Enum::YLeaf IccpState::initialized {2, "initialized"};
const Enum::YLeaf IccpState::capsent {3, "capsent"};
const Enum::YLeaf IccpState::caprec {4, "caprec"};
const Enum::YLeaf IccpState::connecting {5, "connecting"};
const Enum::YLeaf IccpState::operational {6, "operational"};

const Enum::YLeaf DhcState::none {0, "none"};
const Enum::YLeaf DhcState::dhc_active {1, "dhc-active"};
const Enum::YLeaf DhcState::dhc_passive {2, "dhc-passive"};
const Enum::YLeaf DhcState::dhc_active_passive {3, "dhc-active-passive"};

const Enum::YLeaf IgpSyncState::isync_ready {0, "isync-ready"};
const Enum::YLeaf IgpSyncState::isync_not_ready {1, "isync-not-ready"};
const Enum::YLeaf IgpSyncState::isync_deferred {2, "isync-deferred"};

const Enum::YLeaf LocalLabelState::local_label_state_none {1, "local-label-state-none"};
const Enum::YLeaf LocalLabelState::local_label_state_assigned {2, "local-label-state-assigned"};
const Enum::YLeaf LocalLabelState::local_label_state_withdrawn {3, "local-label-state-withdrawn"};

const Enum::YLeaf Af::ldp_af_none {0, "ldp-af-none"};
const Enum::YLeaf Af::ldp_af_ipv4 {1, "ldp-af-ipv4"};
const Enum::YLeaf Af::ldp_af_ipv6 {2, "ldp-af-ipv6"};
const Enum::YLeaf Af::ldp_af_ipv4_ipv6 {3, "ldp-af-ipv4-ipv6"};

const Enum::YLeaf AfId::ldp_af_id_none {0, "ldp-af-id-none"};
const Enum::YLeaf AfId::ldp_af_id_ipv4 {1, "ldp-af-id-ipv4"};
const Enum::YLeaf AfId::ldp_af_id_ipv6 {2, "ldp-af-id-ipv6"};

const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRole::unknown {1, "unknown"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRole::active {2, "active"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRole::passive {3, "passive"};

const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State::nonexistent {1, "nonexistent"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State::initialized {2, "initialized"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State::openrec {3, "openrec"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State::opensent {4, "opensent"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State::operational {5, "operational"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatus::enable {1, "enable"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatus::disable {2, "disable"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::Protocol::ldp {1, "ldp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::Protocol::tdp {2, "tdp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::Protocol::both {3, "both"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatus::enable {1, "enable"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatus::disable {2, "disable"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocol::ldp {1, "ldp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocol::tdp {2, "tdp"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelId::level_1 {1, "level-1"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelId::level_2 {2, "level-2"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelId::level_1_2 {3, "level-1-2"};


}
}

