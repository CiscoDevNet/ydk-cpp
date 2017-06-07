
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mpls_ldp.hpp"

namespace ydk {
namespace Cisco_IOS_XE_mpls_ldp {

RoutePathLblOwnerIdentity::RoutePathLblOwnerIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner")
{
}

RoutePathLblOwnerIdentity::~RoutePathLblOwnerIdentity()
{
}

IgpSyncDownReasonIdentity::IgpSyncDownReasonIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason")
{
}

IgpSyncDownReasonIdentity::~IgpSyncDownReasonIdentity()
{
}

DownNbrReasonIdentity::DownNbrReasonIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:down-nbr-reason")
{
}

DownNbrReasonIdentity::~DownNbrReasonIdentity()
{
}

RoutePathTypeIdentity::RoutePathTypeIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-type")
{
}

RoutePathTypeIdentity::~RoutePathTypeIdentity()
{
}

IcpmTypeIdentity::IcpmTypeIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:icpm-type")
{
}

IcpmTypeIdentity::~IcpmTypeIdentity()
{
}

NsrPeerSyncErrIdentity::NsrPeerSyncErrIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err")
{
}

NsrPeerSyncErrIdentity::~NsrPeerSyncErrIdentity()
{
}

NsrPeerSyncStateIdentity::NsrPeerSyncStateIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-state")
{
}

NsrPeerSyncStateIdentity::~NsrPeerSyncStateIdentity()
{
}

IccpTypeIdentity::IccpTypeIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:iccp-type")
{
}

IccpTypeIdentity::~IccpTypeIdentity()
{
}

LabelTypeIdentity::LabelTypeIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:label-type")
{
}

LabelTypeIdentity::~LabelTypeIdentity()
{
}

NsrStatusIdentity::NsrStatusIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-status")
{
}

NsrStatusIdentity::~NsrStatusIdentity()
{
}

NsrSyncNackRsnIdentity::NsrSyncNackRsnIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn")
{
}

NsrSyncNackRsnIdentity::~NsrSyncNackRsnIdentity()
{
}

MplsLdp::MplsLdp()
    :
    mpls_ldp_config(std::make_shared<MplsLdp::MplsLdpConfig>())
	,mpls_ldp_state(std::make_shared<MplsLdp::MplsLdpState>())
{
    mpls_ldp_config->parent = this;

    mpls_ldp_state->parent = this;

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp";
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    return (mpls_ldp_config !=  nullptr && mpls_ldp_config->has_data())
	|| (mpls_ldp_state !=  nullptr && mpls_ldp_state->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (mpls_ldp_config !=  nullptr && mpls_ldp_config->has_operation())
	|| (mpls_ldp_state !=  nullptr && mpls_ldp_state->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp";

    return path_buffer.str();

}

const EntityPath MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp-config")
    {
        if(mpls_ldp_config == nullptr)
        {
            mpls_ldp_config = std::make_shared<MplsLdp::MplsLdpConfig>();
        }
        return mpls_ldp_config;
    }

    if(child_yang_name == "mpls-ldp-state")
    {
        if(mpls_ldp_state == nullptr)
        {
            mpls_ldp_state = std::make_shared<MplsLdp::MplsLdpState>();
        }
        return mpls_ldp_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp_config != nullptr)
    {
        children["mpls-ldp-config"] = mpls_ldp_config;
    }

    if(mpls_ldp_state != nullptr)
    {
        children["mpls-ldp-state"] = mpls_ldp_state;
    }

    return children;
}

void MplsLdp::set_value(const std::string & value_path, std::string value)
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

MplsLdp::MplsLdpState::MplsLdpState()
    :
    backoff_parameters(std::make_shared<MplsLdp::MplsLdpState::BackoffParameters>())
	,bindings(std::make_shared<MplsLdp::MplsLdpState::Bindings>())
	,bindings_summary(std::make_shared<MplsLdp::MplsLdpState::BindingsSummary>())
	,capabilities(std::make_shared<MplsLdp::MplsLdpState::Capabilities>())
	,discovery(std::make_shared<MplsLdp::MplsLdpState::Discovery>())
	,forwarding(std::make_shared<MplsLdp::MplsLdpState::Forwarding>())
	,forwarding_summary(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary>())
	,graceful_restart(std::make_shared<MplsLdp::MplsLdpState::GracefulRestart>())
	,icpm_summary_all(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll>())
	,label_ranges(std::make_shared<MplsLdp::MplsLdpState::LabelRanges>())
	,neighbors(std::make_shared<MplsLdp::MplsLdpState::Neighbors>())
	,nsr_summary_all(std::make_shared<MplsLdp::MplsLdpState::NsrSummaryAll>())
	,oper_summary(std::make_shared<MplsLdp::MplsLdpState::OperSummary>())
	,parameters(std::make_shared<MplsLdp::MplsLdpState::Parameters>())
	,vrfs(std::make_shared<MplsLdp::MplsLdpState::Vrfs>())
{
    backoff_parameters->parent = this;

    bindings->parent = this;

    bindings_summary->parent = this;

    capabilities->parent = this;

    discovery->parent = this;

    forwarding->parent = this;

    forwarding_summary->parent = this;

    graceful_restart->parent = this;

    icpm_summary_all->parent = this;

    label_ranges->parent = this;

    neighbors->parent = this;

    nsr_summary_all->parent = this;

    oper_summary->parent = this;

    parameters->parent = this;

    vrfs->parent = this;

    yang_name = "mpls-ldp-state"; yang_parent_name = "mpls-ldp";
}

MplsLdp::MplsLdpState::~MplsLdpState()
{
}

bool MplsLdp::MplsLdpState::has_data() const
{
    return (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (bindings !=  nullptr && bindings->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (icpm_summary_all !=  nullptr && icpm_summary_all->has_data())
	|| (label_ranges !=  nullptr && label_ranges->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_data())
	|| (oper_summary !=  nullptr && oper_summary->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::MplsLdpState::has_operation() const
{
    return is_set(operation)
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (icpm_summary_all !=  nullptr && icpm_summary_all->has_operation())
	|| (label_ranges !=  nullptr && label_ranges->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_operation())
	|| (oper_summary !=  nullptr && oper_summary->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::MplsLdpState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-state";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters == nullptr)
        {
            backoff_parameters = std::make_shared<MplsLdp::MplsLdpState::BackoffParameters>();
        }
        return backoff_parameters;
    }

    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<MplsLdp::MplsLdpState::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary == nullptr)
        {
            bindings_summary = std::make_shared<MplsLdp::MplsLdpState::BindingsSummary>();
        }
        return bindings_summary;
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::MplsLdpState::Capabilities>();
        }
        return capabilities;
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

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary == nullptr)
        {
            forwarding_summary = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary>();
        }
        return forwarding_summary;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::MplsLdpState::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "icpm-summary-all")
    {
        if(icpm_summary_all == nullptr)
        {
            icpm_summary_all = std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll>();
        }
        return icpm_summary_all;
    }

    if(child_yang_name == "label-ranges")
    {
        if(label_ranges == nullptr)
        {
            label_ranges = std::make_shared<MplsLdp::MplsLdpState::LabelRanges>();
        }
        return label_ranges;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLdp::MplsLdpState::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "nsr-summary-all")
    {
        if(nsr_summary_all == nullptr)
        {
            nsr_summary_all = std::make_shared<MplsLdp::MplsLdpState::NsrSummaryAll>();
        }
        return nsr_summary_all;
    }

    if(child_yang_name == "oper-summary")
    {
        if(oper_summary == nullptr)
        {
            oper_summary = std::make_shared<MplsLdp::MplsLdpState::OperSummary>();
        }
        return oper_summary;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<MplsLdp::MplsLdpState::Parameters>();
        }
        return parameters;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::MplsLdpState::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backoff_parameters != nullptr)
    {
        children["backoff-parameters"] = backoff_parameters;
    }

    if(bindings != nullptr)
    {
        children["bindings"] = bindings;
    }

    if(bindings_summary != nullptr)
    {
        children["bindings-summary"] = bindings_summary;
    }

    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    if(forwarding_summary != nullptr)
    {
        children["forwarding-summary"] = forwarding_summary;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(icpm_summary_all != nullptr)
    {
        children["icpm-summary-all"] = icpm_summary_all;
    }

    if(label_ranges != nullptr)
    {
        children["label-ranges"] = label_ranges;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(nsr_summary_all != nullptr)
    {
        children["nsr-summary-all"] = nsr_summary_all;
    }

    if(oper_summary != nullptr)
    {
        children["oper-summary"] = oper_summary;
    }

    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void MplsLdp::MplsLdpState::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::OperSummary::OperSummary()
    :
    no_of_ipv4_rib_tbl{YType::uint32, "no-of-ipv4-rib-tbl"},
    no_of_ipv4_rib_tbl_reg{YType::uint32, "no-of-ipv4-rib-tbl-reg"},
    number_of_autocfg_interfaces{YType::uint32, "number-of-autocfg-interfaces"},
    number_of_fwd_ref_interfaces{YType::uint32, "number-of-fwd-ref-interfaces"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"},
    number_of_vrf{YType::uint32, "number-of-vrf"},
    number_of_vrf_oper{YType::uint32, "number-of-vrf-oper"}
    	,
    common(std::make_shared<MplsLdp::MplsLdpState::OperSummary::Common>())
{
    common->parent = this;

    yang_name = "oper-summary"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::OperSummary::~OperSummary()
{
}

bool MplsLdp::MplsLdpState::OperSummary::has_data() const
{
    return no_of_ipv4_rib_tbl.is_set
	|| no_of_ipv4_rib_tbl_reg.is_set
	|| number_of_autocfg_interfaces.is_set
	|| number_of_fwd_ref_interfaces.is_set
	|| number_of_interfaces.is_set
	|| number_of_vrf.is_set
	|| number_of_vrf_oper.is_set
	|| (common !=  nullptr && common->has_data());
}

bool MplsLdp::MplsLdpState::OperSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(no_of_ipv4_rib_tbl.operation)
	|| is_set(no_of_ipv4_rib_tbl_reg.operation)
	|| is_set(number_of_autocfg_interfaces.operation)
	|| is_set(number_of_fwd_ref_interfaces.operation)
	|| is_set(number_of_interfaces.operation)
	|| is_set(number_of_vrf.operation)
	|| is_set(number_of_vrf_oper.operation)
	|| (common !=  nullptr && common->has_operation());
}

std::string MplsLdp::MplsLdpState::OperSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::OperSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_rib_tbl.is_set || is_set(no_of_ipv4_rib_tbl.operation)) leaf_name_data.push_back(no_of_ipv4_rib_tbl.get_name_leafdata());
    if (no_of_ipv4_rib_tbl_reg.is_set || is_set(no_of_ipv4_rib_tbl_reg.operation)) leaf_name_data.push_back(no_of_ipv4_rib_tbl_reg.get_name_leafdata());
    if (number_of_autocfg_interfaces.is_set || is_set(number_of_autocfg_interfaces.operation)) leaf_name_data.push_back(number_of_autocfg_interfaces.get_name_leafdata());
    if (number_of_fwd_ref_interfaces.is_set || is_set(number_of_fwd_ref_interfaces.operation)) leaf_name_data.push_back(number_of_fwd_ref_interfaces.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.operation)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());
    if (number_of_vrf.is_set || is_set(number_of_vrf.operation)) leaf_name_data.push_back(number_of_vrf.get_name_leafdata());
    if (number_of_vrf_oper.is_set || is_set(number_of_vrf_oper.operation)) leaf_name_data.push_back(number_of_vrf_oper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::OperSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no-of-ipv4-rib-tbl")
    {
        no_of_ipv4_rib_tbl = value;
    }
    if(value_path == "no-of-ipv4-rib-tbl-reg")
    {
        no_of_ipv4_rib_tbl_reg = value;
    }
    if(value_path == "number-of-autocfg-interfaces")
    {
        number_of_autocfg_interfaces = value;
    }
    if(value_path == "number-of-fwd-ref-interfaces")
    {
        number_of_fwd_ref_interfaces = value;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
    }
    if(value_path == "number-of-vrf")
    {
        number_of_vrf = value;
    }
    if(value_path == "number-of-vrf-oper")
    {
        number_of_vrf_oper = value;
    }
}

MplsLdp::MplsLdpState::OperSummary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    numberof_ipv4_hello_adj{YType::uint32, "numberof-ipv4-hello-adj"}
{
    yang_name = "common"; yang_parent_name = "oper-summary";
}

MplsLdp::MplsLdpState::OperSummary::Common::~Common()
{
}

bool MplsLdp::MplsLdpState::OperSummary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_neighbors.is_set
	|| numberof_ipv4_hello_adj.is_set;
}

bool MplsLdp::MplsLdpState::OperSummary::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(numberof_ipv4_hello_adj.operation);
}

std::string MplsLdp::MplsLdpState::OperSummary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::OperSummary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/oper-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (numberof_ipv4_hello_adj.is_set || is_set(numberof_ipv4_hello_adj.operation)) leaf_name_data.push_back(numberof_ipv4_hello_adj.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::OperSummary::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::ForwardingSummary()
    :
    intfs_fwd_count{YType::uint16, "intfs-fwd-count"},
    local_lbls{YType::uint16, "local-lbls"}
    	,
    nhs(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Nhs>())
	,pfxs(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs>())
{
    nhs->parent = this;

    pfxs->parent = this;

    yang_name = "forwarding-summary"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::has_data() const
{
    return intfs_fwd_count.is_set
	|| local_lbls.is_set
	|| (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::MplsLdpState::ForwardingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(intfs_fwd_count.operation)
	|| is_set(local_lbls.operation)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfs_fwd_count.is_set || is_set(intfs_fwd_count.operation)) leaf_name_data.push_back(intfs_fwd_count.get_name_leafdata());
    if (local_lbls.is_set || is_set(local_lbls.operation)) leaf_name_data.push_back(local_lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs>();
        }
        return pfxs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::ForwardingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(pfxs != nullptr)
    {
        children["pfxs"] = pfxs;
    }

    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count = value;
    }
    if(value_path == "local-lbls")
    {
        local_lbls = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;

    labeled_pfxs_backup->parent = this;

    labeled_pfxs_primary->parent = this;

    yang_name = "pfxs"; yang_parent_name = "forwarding-summary";
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::~Pfxs()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::has_operation() const
{
    return is_set(operation)
	|| is_set(ecmp_pfxs.operation)
	|| is_set(protected_pfxs.operation)
	|| is_set(total_pfxs.operation)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.operation)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.operation)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.operation)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
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

    if(labeled_pfxs_backup != nullptr)
    {
        children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    return children;
}

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/pfxs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::ForwardingSummary::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "forwarding-summary";
}

MplsLdp::MplsLdpState::ForwardingSummary::Nhs::~Nhs()
{
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::MplsLdpState::ForwardingSummary::Nhs::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_paths.operation)
	|| is_set(labeled_backup_paths.operation)
	|| is_set(labeled_paths.operation)
	|| is_set(protected_paths.operation)
	|| is_set(remote_backup_paths.operation)
	|| is_set(total_paths.operation);
}

std::string MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::ForwardingSummary::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.operation)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.operation)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.operation)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.operation)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.operation)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::ForwardingSummary::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
}

MplsLdp::MplsLdpState::BindingsSummary::BindingsSummary()
    :
    binding_local{YType::uint32, "binding-local"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
{
    yang_name = "bindings-summary"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::MplsLdpState::BindingsSummary::has_data() const
{
    return binding_local.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set;
}

bool MplsLdp::MplsLdpState::BindingsSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation);
}

std::string MplsLdp::MplsLdpState::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::BindingsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::BindingsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::MplsLdpState::NsrSummaryAll::NsrSummaryAll()
    :
    nsr_sum_in_label_reqs_created{YType::uint32, "nsr-sum-in-label-reqs-created"},
    nsr_sum_in_label_reqs_freed{YType::uint32, "nsr-sum-in-label-reqs-freed"},
    nsr_sum_in_label_withdraw_created{YType::uint32, "nsr-sum-in-label-withdraw-created"},
    nsr_sum_in_label_withdraw_freed{YType::uint32, "nsr-sum-in-label-withdraw-freed"},
    nsr_sum_lcl_addr_withdraw_cleared{YType::uint32, "nsr-sum-lcl-addr-withdraw-cleared"},
    nsr_sum_lcl_addr_withdraw_set{YType::uint32, "nsr-sum-lcl-addr-withdraw-set"}
{
    yang_name = "nsr-summary-all"; yang_parent_name = "mpls-ldp-state";
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
	|| nsr_sum_lcl_addr_withdraw_cleared.is_set
	|| nsr_sum_lcl_addr_withdraw_set.is_set;
}

bool MplsLdp::MplsLdpState::NsrSummaryAll::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sum_in_label_reqs_created.operation)
	|| is_set(nsr_sum_in_label_reqs_freed.operation)
	|| is_set(nsr_sum_in_label_withdraw_created.operation)
	|| is_set(nsr_sum_in_label_withdraw_freed.operation)
	|| is_set(nsr_sum_lcl_addr_withdraw_cleared.operation)
	|| is_set(nsr_sum_lcl_addr_withdraw_set.operation);
}

std::string MplsLdp::MplsLdpState::NsrSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-summary-all";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::NsrSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sum_in_label_reqs_created.is_set || is_set(nsr_sum_in_label_reqs_created.operation)) leaf_name_data.push_back(nsr_sum_in_label_reqs_created.get_name_leafdata());
    if (nsr_sum_in_label_reqs_freed.is_set || is_set(nsr_sum_in_label_reqs_freed.operation)) leaf_name_data.push_back(nsr_sum_in_label_reqs_freed.get_name_leafdata());
    if (nsr_sum_in_label_withdraw_created.is_set || is_set(nsr_sum_in_label_withdraw_created.operation)) leaf_name_data.push_back(nsr_sum_in_label_withdraw_created.get_name_leafdata());
    if (nsr_sum_in_label_withdraw_freed.is_set || is_set(nsr_sum_in_label_withdraw_freed.operation)) leaf_name_data.push_back(nsr_sum_in_label_withdraw_freed.get_name_leafdata());
    if (nsr_sum_lcl_addr_withdraw_cleared.is_set || is_set(nsr_sum_lcl_addr_withdraw_cleared.operation)) leaf_name_data.push_back(nsr_sum_lcl_addr_withdraw_cleared.get_name_leafdata());
    if (nsr_sum_lcl_addr_withdraw_set.is_set || is_set(nsr_sum_lcl_addr_withdraw_set.operation)) leaf_name_data.push_back(nsr_sum_lcl_addr_withdraw_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::NsrSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sum-in-label-reqs-created")
    {
        nsr_sum_in_label_reqs_created = value;
    }
    if(value_path == "nsr-sum-in-label-reqs-freed")
    {
        nsr_sum_in_label_reqs_freed = value;
    }
    if(value_path == "nsr-sum-in-label-withdraw-created")
    {
        nsr_sum_in_label_withdraw_created = value;
    }
    if(value_path == "nsr-sum-in-label-withdraw-freed")
    {
        nsr_sum_in_label_withdraw_freed = value;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-cleared")
    {
        nsr_sum_lcl_addr_withdraw_cleared = value;
    }
    if(value_path == "nsr-sum-lcl-addr-withdraw-set")
    {
        nsr_sum_lcl_addr_withdraw_set = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSummaryAll()
    :
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"}
    	,
    icpm_rgid_table_info(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo>())
	,icpm_session_table(std::make_shared<MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable>())
{
    icpm_rgid_table_info->parent = this;

    icpm_session_table->parent = this;

    yang_name = "icpm-summary-all"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::IcpmSummaryAll::~IcpmSummaryAll()
{
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::has_data() const
{
    return iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| (icpm_rgid_table_info !=  nullptr && icpm_rgid_table_info->has_data())
	|| (icpm_session_table !=  nullptr && icpm_session_table->has_data());
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| (icpm_rgid_table_info !=  nullptr && icpm_rgid_table_info->has_operation())
	|| (icpm_session_table !=  nullptr && icpm_session_table->has_operation());
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-summary-all";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::IcpmRgidTableInfo()
{
    yang_name = "icpm-rgid-table-info"; yang_parent_name = "icpm-summary-all";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-rgid-table-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::RedGroup()
    :
    rg_id{YType::uint32, "rg-id"}
{
    yang_name = "red-group"; yang_parent_name = "icpm-rgid-table-info";
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
    return is_set(operation)
	|| is_set(rg_id.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-group" <<"[rg-id='" <<rg_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/icpm-rgid-table-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.operation)) leaf_name_data.push_back(rg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::IcpmProtocols()
    :
    icpm_type{YType::identityref, "icpm-type"}
{
    yang_name = "icpm-protocols"; yang_parent_name = "red-group";
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
    return is_set(operation)
	|| is_set(icpm_type.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-protocols" <<"[icpm-type='" <<icpm_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcpmProtocols' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icpm_type.is_set || is_set(icpm_type.operation)) leaf_name_data.push_back(icpm_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icpm-type")
    {
        icpm_type = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::RedunGroups()
    :
    rg_id{YType::uint32, "rg-id"},
    client_id{YType::uint32, "client_id"},
    peer_id{YType::str, "peer-id"},
    state{YType::str, "state"}
{
    yang_name = "redun-groups"; yang_parent_name = "icpm-protocols";
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
	|| client_id.is_set
	|| peer_id.is_set
	|| state.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rg_id.operation)
	|| is_set(client_id.operation)
	|| is_set(peer_id.operation)
	|| is_set(state.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redun-groups" <<"[rg-id='" <<rg_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedunGroups' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.operation)) leaf_name_data.push_back(rg_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
    }
    if(value_path == "client_id")
    {
        client_id = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::IccpApps()
    :
    iccp_app{YType::identityref, "iccp-app"},
    app_state{YType::enumeration, "app-state"},
    ptcl_ver{YType::uint32, "ptcl-ver"}
{
    yang_name = "iccp-apps"; yang_parent_name = "redun-groups";
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
    return is_set(operation)
	|| is_set(iccp_app.operation)
	|| is_set(app_state.operation)
	|| is_set(ptcl_ver.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-apps" <<"[iccp-app='" <<iccp_app <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpApps' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_app.is_set || is_set(iccp_app.operation)) leaf_name_data.push_back(iccp_app.get_name_leafdata());
    if (app_state.is_set || is_set(app_state.operation)) leaf_name_data.push_back(app_state.get_name_leafdata());
    if (ptcl_ver.is_set || is_set(ptcl_ver.operation)) leaf_name_data.push_back(ptcl_ver.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-app")
    {
        iccp_app = value;
    }
    if(value_path == "app-state")
    {
        app_state = value;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::IcpmSessionTable()
{
    yang_name = "icpm-session-table"; yang_parent_name = "icpm-summary-all";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-session-table";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::SessionTable()
    :
    session_id{YType::uint32, "session-id"}
{
    yang_name = "session-table"; yang_parent_name = "icpm-session-table";
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
    return is_set(operation)
	|| is_set(session_id.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-table" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/icpm-summary-all/icpm-session-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::IcpmProtocols()
    :
    icpm_type{YType::identityref, "icpm-type"}
{
    yang_name = "icpm-protocols"; yang_parent_name = "session-table";
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
    return is_set(operation)
	|| is_set(icpm_type.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icpm-protocols" <<"[icpm-type='" <<icpm_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcpmProtocols' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icpm_type.is_set || is_set(icpm_type.operation)) leaf_name_data.push_back(icpm_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icpm-type")
    {
        icpm_type = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::RedunGroups()
    :
    rg_id{YType::uint32, "rg-id"},
    client_id{YType::uint32, "client_id"},
    peer_id{YType::str, "peer-id"},
    state{YType::str, "state"}
{
    yang_name = "redun-groups"; yang_parent_name = "icpm-protocols";
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
	|| client_id.is_set
	|| peer_id.is_set
	|| state.is_set;
}

bool MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_apps.size(); index++)
    {
        if(iccp_apps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rg_id.operation)
	|| is_set(client_id.operation)
	|| is_set(peer_id.operation)
	|| is_set(state.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redun-groups" <<"[rg-id='" <<rg_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedunGroups' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_id.is_set || is_set(rg_id.operation)) leaf_name_data.push_back(rg_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-id")
    {
        rg_id = value;
    }
    if(value_path == "client_id")
    {
        client_id = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::IccpApps()
    :
    iccp_app{YType::identityref, "iccp-app"},
    app_state{YType::enumeration, "app-state"},
    ptcl_ver{YType::uint32, "ptcl-ver"}
{
    yang_name = "iccp-apps"; yang_parent_name = "redun-groups";
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
    return is_set(operation)
	|| is_set(iccp_app.operation)
	|| is_set(app_state.operation)
	|| is_set(ptcl_ver.operation);
}

std::string MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-apps" <<"[iccp-app='" <<iccp_app <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpApps' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_app.is_set || is_set(iccp_app.operation)) leaf_name_data.push_back(iccp_app.get_name_leafdata());
    if (app_state.is_set || is_set(app_state.operation)) leaf_name_data.push_back(app_state.get_name_leafdata());
    if (ptcl_ver.is_set || is_set(ptcl_ver.operation)) leaf_name_data.push_back(ptcl_ver.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-app")
    {
        iccp_app = value;
    }
    if(value_path == "app-state")
    {
        app_state = value;
    }
    if(value_path == "ptcl-ver")
    {
        ptcl_ver = value;
    }
}

MplsLdp::MplsLdpState::Parameters::Parameters()
    :
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"},
    dod_max_hop{YType::uint32, "dod-max-hop"},
    feature{YType::str, "feature"},
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    loop_detection{YType::enumeration, "loop-detection"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    out_of_mem_state{YType::uint32, "out-of-mem-state"},
    protocol_version{YType::uint32, "protocol-version"},
    session_hold_time{YType::uint32, "session-hold-time"}
{
    yang_name = "parameters"; yang_parent_name = "mpls-ldp-state";
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
    return af_binding_withdraw_delay.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| dod_max_hop.is_set
	|| global_md5_password_enabled.is_set
	|| keepalive_interval.is_set
	|| le_no_route_timeout.is_set
	|| loop_detection.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| out_of_mem_state.is_set
	|| protocol_version.is_set
	|| session_hold_time.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(af_binding_withdraw_delay.operation)
	|| is_set(discovery_quick_start_disabled_on_interfaces.operation)
	|| is_set(dod_max_hop.operation)
	|| is_set(feature.operation)
	|| is_set(global_md5_password_enabled.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(le_no_route_timeout.operation)
	|| is_set(loop_detection.operation)
	|| is_set(max_intf_attached.operation)
	|| is_set(max_intf_te.operation)
	|| is_set(max_peer.operation)
	|| is_set(out_of_mem_state.operation)
	|| is_set(protocol_version.operation)
	|| is_set(session_hold_time.operation);
}

std::string MplsLdp::MplsLdpState::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.operation)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.operation)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());
    if (dod_max_hop.is_set || is_set(dod_max_hop.operation)) leaf_name_data.push_back(dod_max_hop.get_name_leafdata());
    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.operation)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.operation)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.operation)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.operation)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.operation)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.operation)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (out_of_mem_state.is_set || is_set(out_of_mem_state.operation)) leaf_name_data.push_back(out_of_mem_state.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.operation)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.operation)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());

    auto feature_name_datas = feature.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), feature_name_datas.begin(), feature_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
    }
    if(value_path == "dod-max-hop")
    {
        dod_max_hop = value;
    }
    if(value_path == "feature")
    {
        feature.append(value);
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached = value;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te = value;
    }
    if(value_path == "max-peer")
    {
        max_peer = value;
    }
    if(value_path == "out-of-mem-state")
    {
        out_of_mem_state = value;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
    }
}

MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    discovery_transport_address{YType::str, "discovery-transport-address"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    targeted_hello_filter{YType::str, "targeted-hello-filter"}
{
    yang_name = "address-family-parameter"; yang_parent_name = "parameters";
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
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(discovery_transport_address.operation)
	|| is_set(is_accepting_targeted_hellos.operation)
	|| is_set(targeted_hello_filter.operation);
}

std::string MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter" <<"[address-family='" <<address_family <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (discovery_transport_address.is_set || is_set(discovery_transport_address.operation)) leaf_name_data.push_back(discovery_transport_address.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.operation)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (targeted_hello_filter.is_set || is_set(targeted_hello_filter.operation)) leaf_name_data.push_back(targeted_hello_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "discovery-transport-address")
    {
        discovery_transport_address = value;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
    }
    if(value_path == "targeted-hello-filter")
    {
        targeted_hello_filter = value;
    }
}

MplsLdp::MplsLdpState::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Capabilities::Capability::Capability()
    :
    cap_type{YType::uint16, "cap-type"},
    cap_des{YType::str, "cap-des"},
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    capability_owner{YType::str, "capability-owner"}
{
    yang_name = "capability"; yang_parent_name = "capabilities";
}

MplsLdp::MplsLdpState::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::MplsLdpState::Capabilities::Capability::has_data() const
{
    return cap_type.is_set
	|| cap_des.is_set
	|| capability_data.is_set
	|| capability_data_length.is_set
	|| capability_owner.is_set;
}

bool MplsLdp::MplsLdpState::Capabilities::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(cap_type.operation)
	|| is_set(cap_des.operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(capability_owner.operation);
}

std::string MplsLdp::MplsLdpState::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[cap-type='" <<cap_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Capabilities::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.operation)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.operation)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.operation)) leaf_name_data.push_back(capability_owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Capabilities::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
    }
}

MplsLdp::MplsLdpState::BackoffParameters::BackoffParameters()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{
    yang_name = "backoff-parameters"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::MplsLdpState::BackoffParameters::has_data() const
{
    return backoff_seconds.is_set
	|| initial_seconds.is_set
	|| maximum_seconds.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::MplsLdpState::BackoffParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_seconds.operation)
	|| is_set(initial_seconds.operation)
	|| is_set(maximum_seconds.operation)
	|| is_set(waiting_seconds.operation);
}

std::string MplsLdp::MplsLdpState::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::BackoffParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.operation)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (initial_seconds.is_set || is_set(initial_seconds.operation)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.operation)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.operation)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::BackoffParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
    }
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
    }
}

MplsLdp::MplsLdpState::GracefulRestart::GracefulRestart()
    :
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"},
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    is_forwarding_state_hold_timer_running{YType::empty, "is-forwarding-state-hold-timer-running"},
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"}
{
    yang_name = "graceful-restart"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::MplsLdpState::GracefulRestart::has_data() const
{
    return forwarding_state_hold_timer_remaining_seconds.is_set
	|| graceful_restart_forwarding_state_hold_time.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| is_graceful_restart_configured.is_set;
}

bool MplsLdp::MplsLdpState::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_state_hold_timer_remaining_seconds.operation)
	|| is_set(graceful_restart_forwarding_state_hold_time.operation)
	|| is_set(graceful_restart_reconnect_timeout.operation)
	|| is_set(is_forwarding_state_hold_timer_running.operation)
	|| is_set(is_graceful_restart_configured.operation);
}

std::string MplsLdp::MplsLdpState::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.operation)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());
    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.operation)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.operation)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.operation)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());
    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.operation)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
    }
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
    }
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    afs(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs>())
	,vrf_summary(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary>())
{
    afs->parent = this;

    vrf_summary->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::MplsLdpState::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary>();
        }
        return vrf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(vrf_summary != nullptr)
    {
        children["vrf-summary"] = vrf_summary;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::VrfSummary()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    numberof_ipv4_hello_adj{YType::uint32, "numberof-ipv4-hello-adj"}
{
    yang_name = "vrf-summary"; yang_parent_name = "vrf";
}

MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::~VrfSummary()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::has_data() const
{
    return address_families.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_neighbors.is_set
	|| numberof_ipv4_hello_adj.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(numberof_ipv4_hello_adj.operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSummary' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (numberof_ipv4_hello_adj.is_set || is_set(numberof_ipv4_hello_adj.operation)) leaf_name_data.push_back(numberof_ipv4_hello_adj.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "numberof-ipv4-hello-adj")
    {
        numberof_ipv4_hello_adj = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    igp(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp>())
	,interface_summary(std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary>())
{
    igp->parent = this;

    interface_summary->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (igp !=  nullptr && igp->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data());
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (igp !=  nullptr && igp->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation());
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary>();
        }
        return interface_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(interface_summary != nullptr)
    {
        children["interface-summary"] = interface_summary;
    }

    return children;
}

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    auto_config{YType::uint32, "auto-config"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"},
    configured_attached_interface{YType::uint32, "configured-attached-interface"},
    configured_te_interface{YType::uint32, "configured-te-interface"},
    forward_references{YType::uint32, "forward-references"},
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"}
{
    yang_name = "interface-summary"; yang_parent_name = "af";
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_data() const
{
    return auto_config.is_set
	|| auto_config_disabled.is_set
	|| auto_config_forward_reference_interfaces.is_set
	|| configured_attached_interface.is_set
	|| configured_te_interface.is_set
	|| forward_references.is_set
	|| known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation)
	|| is_set(auto_config_disabled.operation)
	|| is_set(auto_config_forward_reference_interfaces.operation)
	|| is_set(configured_attached_interface.operation)
	|| is_set(configured_te_interface.operation)
	|| is_set(forward_references.operation)
	|| is_set(known_ip_interface_count.operation)
	|| is_set(known_ip_interface_ldp_enabled.operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.operation)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.operation)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());
    if (configured_attached_interface.is_set || is_set(configured_attached_interface.operation)) leaf_name_data.push_back(configured_attached_interface.get_name_leafdata());
    if (configured_te_interface.is_set || is_set(configured_te_interface.operation)) leaf_name_data.push_back(configured_te_interface.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.operation)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.operation)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.operation)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
    }
    if(value_path == "configured-attached-interface")
    {
        configured_attached_interface = value;
    }
    if(value_path == "configured-te-interface")
    {
        configured_te_interface = value;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Igp()
{
    yang_name = "igp"; yang_parent_name = "af";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Sync()
    :
    interface{YType::str, "interface"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_down_reason{YType::identityref, "igp-sync-down-reason"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    is_delay_timer_running{YType::empty, "is-delay-timer-running"}
{
    yang_name = "sync"; yang_parent_name = "igp";
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
	|| delay_timer_remaining.is_set
	|| igp_sync_down_reason.is_set
	|| igp_sync_state.is_set
	|| is_delay_timer_running.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::has_operation() const
{
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(delay_timer_remaining.operation)
	|| is_set(igp_sync_down_reason.operation)
	|| is_set(igp_sync_state.operation)
	|| is_set(is_delay_timer_running.operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.operation)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.operation)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.operation)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.operation)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
    }
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::Peers()
    :
    is_chkpt_created{YType::empty, "is-chkpt-created"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "peers"; yang_parent_name = "sync";
}

MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::~Peers()
{
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::has_data() const
{
    return is_chkpt_created.is_set
	|| is_gr_enabled.is_set
	|| peer_id.is_set;
}

bool MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::has_operation() const
{
    return is_set(operation)
	|| is_set(is_chkpt_created.operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_chkpt_created.is_set || is_set(is_chkpt_created.operation)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
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

    yang_name = "discovery"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation)
	|| (discovery_stats !=  nullptr && discovery_stats->has_operation())
	|| (link_hello_state !=  nullptr && link_hello_state->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::MplsLdpState::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Discovery::DiscoveryStats::DiscoveryStats()
    :
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"}
{
    yang_name = "discovery-stats"; yang_parent_name = "discovery";
}

MplsLdp::MplsLdpState::Discovery::DiscoveryStats::~DiscoveryStats()
{
}

bool MplsLdp::MplsLdpState::Discovery::DiscoveryStats::has_data() const
{
    return num_of_active_ldp_interfaces.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_tgt_disc_xmit.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::DiscoveryStats::has_operation() const
{
    return is_set(operation)
	|| is_set(num_of_active_ldp_interfaces.operation)
	|| is_set(num_of_ldp_interfaces.operation)
	|| is_set(num_of_lnk_disc_recv.operation)
	|| is_set(num_of_lnk_disc_xmit.operation)
	|| is_set(num_of_tgt_disc_recv.operation)
	|| is_set(num_of_tgt_disc_xmit.operation);
}

std::string MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-stats";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::DiscoveryStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.operation)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.operation)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.operation)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.operation)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::DiscoveryStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
    }
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHelloState()
{
    yang_name = "link-hello-state"; yang_parent_name = "discovery";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-state";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::LinkHelloState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::LinkHellos()
    :
    interface{YType::str, "interface"},
    nbr_transport_addr{YType::str, "nbr-transport-addr"},
    hello_interval{YType::uint32, "hello-interval"},
    hold_time_remaining{YType::uint32, "hold-time-remaining"},
    local_src_addr{YType::str, "local-src-addr"},
    local_transport_addr{YType::str, "local-transport-addr"},
    nbr_hold_time{YType::uint32, "nbr-hold-time"},
    nbr_ldp_id{YType::str, "nbr-ldp-id"},
    nbr_src_addr{YType::str, "nbr-src-addr"},
    next_hello{YType::uint32, "next-hello"},
    session_up{YType::empty, "session-up"}
{
    yang_name = "link-hellos"; yang_parent_name = "link-hello-state";
}

MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::has_data() const
{
    return interface.is_set
	|| nbr_transport_addr.is_set
	|| hello_interval.is_set
	|| hold_time_remaining.is_set
	|| local_src_addr.is_set
	|| local_transport_addr.is_set
	|| nbr_hold_time.is_set
	|| nbr_ldp_id.is_set
	|| nbr_src_addr.is_set
	|| next_hello.is_set
	|| session_up.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(nbr_transport_addr.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hold_time_remaining.operation)
	|| is_set(local_src_addr.operation)
	|| is_set(local_transport_addr.operation)
	|| is_set(nbr_hold_time.operation)
	|| is_set(nbr_ldp_id.operation)
	|| is_set(nbr_src_addr.operation)
	|| is_set(next_hello.operation)
	|| is_set(session_up.operation);
}

std::string MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos" <<"[interface='" <<interface <<"']" <<"[nbr-transport-addr='" <<nbr_transport_addr <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/link-hello-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nbr_transport_addr.is_set || is_set(nbr_transport_addr.operation)) leaf_name_data.push_back(nbr_transport_addr.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time_remaining.is_set || is_set(hold_time_remaining.operation)) leaf_name_data.push_back(hold_time_remaining.get_name_leafdata());
    if (local_src_addr.is_set || is_set(local_src_addr.operation)) leaf_name_data.push_back(local_src_addr.get_name_leafdata());
    if (local_transport_addr.is_set || is_set(local_transport_addr.operation)) leaf_name_data.push_back(local_transport_addr.get_name_leafdata());
    if (nbr_hold_time.is_set || is_set(nbr_hold_time.operation)) leaf_name_data.push_back(nbr_hold_time.get_name_leafdata());
    if (nbr_ldp_id.is_set || is_set(nbr_ldp_id.operation)) leaf_name_data.push_back(nbr_ldp_id.get_name_leafdata());
    if (nbr_src_addr.is_set || is_set(nbr_src_addr.operation)) leaf_name_data.push_back(nbr_src_addr.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "nbr-transport-addr")
    {
        nbr_transport_addr = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining = value;
    }
    if(value_path == "local-src-addr")
    {
        local_src_addr = value;
    }
    if(value_path == "local-transport-addr")
    {
        local_transport_addr = value;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time = value;
    }
    if(value_path == "nbr-ldp-id")
    {
        nbr_ldp_id = value;
    }
    if(value_path == "nbr-src-addr")
    {
        nbr_src_addr = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHellos()
    :
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"},
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"}
{
    yang_name = "targeted-hellos"; yang_parent_name = "discovery";
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
    return targeted_hello_hold_time.is_set
	|| targeted_hello_interval.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(targeted_hello_hold_time.operation)
	|| is_set(targeted_hello_interval.operation);
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hellos";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::TargetedHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.operation)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());
    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.operation)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
    }
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::TargetedHello()
    :
    vrf_name{YType::str, "vrf-name"},
    target_address{YType::str, "target-address"},
    hold_time_remaining{YType::uint32, "hold-time-remaining"},
    local_address{YType::str, "local-address"},
    nbr_hold_time{YType::uint32, "nbr-hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    next_hello{YType::uint32, "next-hello"},
    state{YType::enumeration, "state"}
{
    yang_name = "targeted-hello"; yang_parent_name = "targeted-hellos";
}

MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::has_data() const
{
    return vrf_name.is_set
	|| target_address.is_set
	|| hold_time_remaining.is_set
	|| local_address.is_set
	|| nbr_hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| next_hello.is_set
	|| state.is_set;
}

bool MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(target_address.operation)
	|| is_set(hold_time_remaining.operation)
	|| is_set(local_address.operation)
	|| is_set(nbr_hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(next_hello.operation)
	|| is_set(state.operation);
}

std::string MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello" <<"[vrf-name='" <<vrf_name <<"']" <<"[target-address='" <<target_address <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/discovery/targeted-hellos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (hold_time_remaining.is_set || is_set(hold_time_remaining.operation)) leaf_name_data.push_back(hold_time_remaining.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (nbr_hold_time.is_set || is_set(nbr_hold_time.operation)) leaf_name_data.push_back(nbr_hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
    if(value_path == "hold-time-remaining")
    {
        hold_time_remaining = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "nbr-hold-time")
    {
        nbr_hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::Forwarding()
    :
    forwarding_vrf_summs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms>())
{
    forwarding_vrf_summs->parent = this;

    yang_name = "forwarding"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation)
	|| (forwarding_vrf_summs !=  nullptr && forwarding_vrf_summs->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "forwarding-vrf-summs")
    {
        if(forwarding_vrf_summs == nullptr)
        {
            forwarding_vrf_summs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms>();
        }
        return forwarding_vrf_summs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_detail)
    {
        children[c->get_segment_path()] = c;
    }

    if(forwarding_vrf_summs != nullptr)
    {
        children["forwarding-vrf-summs"] = forwarding_vrf_summs;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumms()
{
    yang_name = "forwarding-vrf-summs"; yang_parent_name = "forwarding";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-vrf-summs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::ForwardingVrfSumm()
    :
    vrf_name{YType::str, "vrf-name"},
    intfs_fwd_count{YType::uint16, "intfs-fwd-count"},
    local_lbls{YType::uint16, "local-lbls"}
    	,
    nhs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs>())
	,pfxs(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs>())
{
    nhs->parent = this;

    pfxs->parent = this;

    yang_name = "forwarding-vrf-summ"; yang_parent_name = "forwarding-vrf-summs";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::~ForwardingVrfSumm()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::has_data() const
{
    return vrf_name.is_set
	|| intfs_fwd_count.is_set
	|| local_lbls.is_set
	|| (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(intfs_fwd_count.operation)
	|| is_set(local_lbls.operation)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-vrf-summ" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/forwarding-vrf-summs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (intfs_fwd_count.is_set || is_set(intfs_fwd_count.operation)) leaf_name_data.push_back(intfs_fwd_count.get_name_leafdata());
    if (local_lbls.is_set || is_set(local_lbls.operation)) leaf_name_data.push_back(local_lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs == nullptr)
        {
            pfxs = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs>();
        }
        return pfxs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(pfxs != nullptr)
    {
        children["pfxs"] = pfxs;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "intfs-fwd-count")
    {
        intfs_fwd_count = value;
    }
    if(value_path == "local-lbls")
    {
        local_lbls = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;

    labeled_pfxs_backup->parent = this;

    labeled_pfxs_primary->parent = this;

    yang_name = "pfxs"; yang_parent_name = "forwarding-vrf-summ";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::~Pfxs()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::has_operation() const
{
    return is_set(operation)
	|| is_set(ecmp_pfxs.operation)
	|| is_set(protected_pfxs.operation)
	|| is_set(total_pfxs.operation)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfxs' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.operation)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.operation)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.operation)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup == nullptr)
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup>();
        }
        return labeled_pfxs_backup;
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary == nullptr)
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary>();
        }
        return labeled_pfxs_primary;
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

    if(labeled_pfxs_backup != nullptr)
    {
        children["labeled-pfxs-backup"] = labeled_pfxs_backup;
    }

    if(labeled_pfxs_primary != nullptr)
    {
        children["labeled-pfxs-primary"] = labeled_pfxs_primary;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsAggr' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsPrimary' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
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
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsBackup' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "forwarding-vrf-summ";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::~Nhs()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_paths.operation)
	|| is_set(labeled_backup_paths.operation)
	|| is_set(labeled_paths.operation)
	|| is_set(protected_paths.operation)
	|| is_set(remote_backup_paths.operation)
	|| is_set(total_paths.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhs' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.operation)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.operation)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.operation)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.operation)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.operation)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::ForwardingDetail()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    fwd_prefix{YType::str, "fwd-prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    table_id{YType::uint32, "table-id"}
    	,
    route(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route>())
{
    route->parent = this;

    yang_name = "forwarding-detail"; yang_parent_name = "forwarding";
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
	|| prefix_length.is_set
	|| table_id.is_set
	|| (route !=  nullptr && route->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(prefix.operation)
	|| is_set(fwd_prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(table_id.operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-detail" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (fwd_prefix.is_set || is_set(fwd_prefix.operation)) leaf_name_data.push_back(fwd_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::Route()
    :
    forwarding_update_age{YType::uint64, "forwarding-update-age"},
    forwarding_update_count{YType::uint32, "forwarding-update-count"},
    forwarding_update_timestamp{YType::uint64, "forwarding-update-timestamp"},
    is_local_vrf_leaked{YType::boolean, "is-local-vrf-leaked"},
    local_label{YType::uint32, "local-label"},
    metric{YType::uint32, "metric"},
    priority{YType::uint8, "priority"},
    routing_update_age{YType::uint64, "routing-update-age"},
    routing_update_count{YType::uint32, "routing-update-count"},
    routing_update_timestamp{YType::uint64, "routing-update-timestamp"},
    source{YType::uint16, "source"},
    type{YType::uint16, "type"},
    version{YType::uint32, "version"}
{
    yang_name = "route"; yang_parent_name = "forwarding-detail";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::~Route()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::has_data() const
{
    return forwarding_update_age.is_set
	|| forwarding_update_count.is_set
	|| forwarding_update_timestamp.is_set
	|| is_local_vrf_leaked.is_set
	|| local_label.is_set
	|| metric.is_set
	|| priority.is_set
	|| routing_update_age.is_set
	|| routing_update_count.is_set
	|| routing_update_timestamp.is_set
	|| source.is_set
	|| type.is_set
	|| version.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_update_age.operation)
	|| is_set(forwarding_update_count.operation)
	|| is_set(forwarding_update_timestamp.operation)
	|| is_set(is_local_vrf_leaked.operation)
	|| is_set(local_label.operation)
	|| is_set(metric.operation)
	|| is_set(priority.operation)
	|| is_set(routing_update_age.operation)
	|| is_set(routing_update_count.operation)
	|| is_set(routing_update_timestamp.operation)
	|| is_set(source.operation)
	|| is_set(type.operation)
	|| is_set(version.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_update_age.is_set || is_set(forwarding_update_age.operation)) leaf_name_data.push_back(forwarding_update_age.get_name_leafdata());
    if (forwarding_update_count.is_set || is_set(forwarding_update_count.operation)) leaf_name_data.push_back(forwarding_update_count.get_name_leafdata());
    if (forwarding_update_timestamp.is_set || is_set(forwarding_update_timestamp.operation)) leaf_name_data.push_back(forwarding_update_timestamp.get_name_leafdata());
    if (is_local_vrf_leaked.is_set || is_set(is_local_vrf_leaked.operation)) leaf_name_data.push_back(is_local_vrf_leaked.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (routing_update_age.is_set || is_set(routing_update_age.operation)) leaf_name_data.push_back(routing_update_age.get_name_leafdata());
    if (routing_update_count.is_set || is_set(routing_update_count.operation)) leaf_name_data.push_back(routing_update_count.get_name_leafdata());
    if (routing_update_timestamp.is_set || is_set(routing_update_timestamp.operation)) leaf_name_data.push_back(routing_update_timestamp.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age = value;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count = value;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp = value;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age = value;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count = value;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Paths()
    :
    mpls(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls>())
	,routing(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing>())
{
    mpls->parent = this;

    routing->parent = this;

    yang_name = "paths"; yang_parent_name = "forwarding-detail";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::~Paths()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing>();
        }
        return routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    return children;
}

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::Routing()
    :
    bkup_path_id{YType::uint8, "bkup-path-id"},
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"},
    interface{YType::str, "interface"},
    load_metric{YType::uint32, "load-metric"},
    next_hop{YType::str, "next-hop"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    nexthop_id{YType::uint32, "nexthop-id"},
    nh_is_overriden{YType::empty, "nh-is-overriden"},
    path_id{YType::uint8, "path-id"},
    path_type{YType::identityref, "path-type"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "routing"; yang_parent_name = "paths";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::~Routing()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::has_data() const
{
    return bkup_path_id.is_set
	|| has_remote_lfa_bkup.is_set
	|| interface.is_set
	|| load_metric.is_set
	|| next_hop.is_set
	|| next_hop_table_id.is_set
	|| nexthop_id.is_set
	|| nh_is_overriden.is_set
	|| path_id.is_set
	|| path_type.is_set
	|| remote_node_id.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(bkup_path_id.operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| is_set(interface.operation)
	|| is_set(load_metric.operation)
	|| is_set(next_hop.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(nexthop_id.operation)
	|| is_set(nh_is_overriden.operation)
	|| is_set(path_id.operation)
	|| is_set(path_type.operation)
	|| is_set(remote_node_id.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bkup_path_id.is_set || is_set(bkup_path_id.operation)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (nexthop_id.is_set || is_set(nexthop_id.operation)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (nh_is_overriden.is_set || is_set(nh_is_overriden.operation)) leaf_name_data.push_back(nh_is_overriden.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.operation)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo>())
	,remote_lfa(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;

    remote_lfa->parent = this;

    yang_name = "mpls"; yang_parent_name = "paths";
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
    return is_set(operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::identityref, "out-label-owner"},
    out_label_type{YType::identityref, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
    	,
    mpls_outgoing_info(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "mpls";
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
    return is_set(operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::identityref, "out-label-owner"},
    out_label_type{YType::identityref, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::MplsLdpState::Bindings::Bindings()
    :
    bindings_sum_afs(std::make_shared<MplsLdp::MplsLdpState::Bindings::BindingsSumAfs>())
{
    bindings_sum_afs->parent = this;

    yang_name = "bindings"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation)
	|| (bindings_sum_afs !=  nullptr && bindings_sum_afs->has_operation());
}

std::string MplsLdp::MplsLdpState::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "bindings-sum-afs")
    {
        if(bindings_sum_afs == nullptr)
        {
            bindings_sum_afs = std::make_shared<MplsLdp::MplsLdpState::Bindings::BindingsSumAfs>();
        }
        return bindings_sum_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    if(bindings_sum_afs != nullptr)
    {
        children["bindings-sum-afs"] = bindings_sum_afs;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingsSumAfs()
{
    yang_name = "bindings-sum-afs"; yang_parent_name = "bindings";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-sum-afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::BindingSumAf()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    binding_local{YType::uint32, "binding-local"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
{
    yang_name = "binding-sum-af"; yang_parent_name = "bindings-sum-afs";
}

MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::~BindingSumAf()
{
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::has_data() const
{
    return vrf_name.is_set
	|| af_name.is_set
	|| binding_local.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(af_name.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation);
}

std::string MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sum-af" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/bindings-sum-afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::MplsLdpState::Bindings::Binding::Binding()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    advertise_lsr_filter{YType::str, "advertise-lsr-filter"},
    advertise_prefix_filter{YType::str, "advertise-prefix-filter"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    fwd_prefix{YType::str, "fwd-prefix"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    local_label{YType::uint32, "local-label"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "binding"; yang_parent_name = "bindings";
}

MplsLdp::MplsLdpState::Bindings::Binding::~Binding()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| prefix.is_set
	|| advertise_lsr_filter.is_set
	|| advertise_prefix_filter.is_set
	|| config_enforced_local_label_value.is_set
	|| fwd_prefix.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| local_label.is_set
	|| prefix_length.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(prefix.operation)
	|| is_set(advertise_lsr_filter.operation)
	|| is_set(advertise_prefix_filter.operation)
	|| is_set(config_enforced_local_label_value.operation)
	|| is_set(fwd_prefix.operation)
	|| is_set(is_no_route.operation)
	|| is_set(label_oor.operation)
	|| is_set(le_local_binding_revision.operation)
	|| is_set(le_local_label_state.operation)
	|| is_set(local_label.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/bindings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise_lsr_filter.is_set || is_set(advertise_lsr_filter.operation)) leaf_name_data.push_back(advertise_lsr_filter.get_name_leafdata());
    if (advertise_prefix_filter.is_set || is_set(advertise_prefix_filter.operation)) leaf_name_data.push_back(advertise_prefix_filter.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.operation)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (fwd_prefix.is_set || is_set(fwd_prefix.operation)) leaf_name_data.push_back(fwd_prefix.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.operation)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.operation)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.operation)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Bindings::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise-lsr-filter")
    {
        advertise_lsr_filter = value;
    }
    if(value_path == "advertise-prefix-filter")
    {
        advertise_prefix_filter = value;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
    }
    if(value_path == "fwd-prefix")
    {
        fwd_prefix = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    is_stale{YType::boolean, "is-stale"},
    remote_label{YType::uint32, "remote-label"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;

    yang_name = "remote-binding"; yang_parent_name = "binding";
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::has_data() const
{
    return is_stale.is_set
	|| remote_label.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(is_stale.operation)
	|| is_set(remote_label.operation)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteBinding' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding";
}

MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssigningPeerLdpIdent' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    label_space_id{YType::uint16, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-advertised-to"; yang_parent_name = "binding";
}

MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAdvertisedTo' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbors()
    :
    backoffs(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Backoffs>())
	,nsr_nbr_detail(std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail>())
	,stats_info(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo>())
{
    backoffs->parent = this;

    nsr_nbr_detail->parent = this;

    stats_info->parent = this;

    yang_name = "neighbors"; yang_parent_name = "mpls-ldp-state";
}

MplsLdp::MplsLdpState::Neighbors::~Neighbors()
{
}

bool MplsLdp::MplsLdpState::Neighbors::has_data() const
{
    for (std::size_t index=0; index<nbr_adjs.size(); index++)
    {
        if(nbr_adjs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (backoffs !=  nullptr && backoffs->has_data())
	|| (nsr_nbr_detail !=  nullptr && nsr_nbr_detail->has_data())
	|| (stats_info !=  nullptr && stats_info->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<nbr_adjs.size(); index++)
    {
        if(nbr_adjs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (nsr_nbr_detail !=  nullptr && nsr_nbr_detail->has_operation())
	|| (stats_info !=  nullptr && stats_info->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoffs")
    {
        if(backoffs == nullptr)
        {
            backoffs = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Backoffs>();
        }
        return backoffs;
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

    if(child_yang_name == "nsr-nbr-detail")
    {
        if(nsr_nbr_detail == nullptr)
        {
            nsr_nbr_detail = std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail>();
        }
        return nsr_nbr_detail;
    }

    if(child_yang_name == "stats-info")
    {
        if(stats_info == nullptr)
        {
            stats_info = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo>();
        }
        return stats_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backoffs != nullptr)
    {
        children["backoffs"] = backoffs;
    }

    for (auto const & c : nbr_adjs)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(nsr_nbr_detail != nullptr)
    {
        children["nsr-nbr-detail"] = nsr_nbr_detail;
    }

    if(stats_info != nullptr)
    {
        children["stats-info"] = stats_info;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Neighbor()
    :
    vrf_name{YType::str, "vrf-name"},
    lsr_id{YType::str, "lsr-id"},
    advertise_bgp_prefixes{YType::boolean, "advertise-bgp-prefixes"},
    bgp_advertisement_state{YType::enumeration, "bgp-advertisement-state"},
    client{YType::str, "client"},
    downstream_on_demand{YType::boolean, "downstream-on-demand"},
    duplicate_address{YType::str, "duplicate-address"},
    has_sp{YType::boolean, "has-sp"},
    inbound_ipv4{YType::str, "inbound-ipv4"},
    inbound_ipv6_filter{YType::str, "inbound-ipv6-filter"},
    label_space_id{YType::uint32, "label-space-id"},
    nbr_bound_address{YType::str, "nbr-bound-address"},
    nbr_path_vector_limit{YType::int32, "nbr-path-vector-limit"},
    outbound_ipv4_filter{YType::str, "outbound-ipv4-filter"},
    outbound_ipv6_filter{YType::str, "outbound-ipv6-filter"},
    peer_hold_time{YType::uint32, "peer-hold-time"},
    peer_keep_alive_interval{YType::uint32, "peer-keep-alive-interval"},
    peer_state{YType::enumeration, "peer-state"},
    session_prot_ver{YType::uint32, "session-prot-ver"},
    session_role{YType::enumeration, "session-role"},
    sp_duration{YType::uint32, "sp-duration"},
    sp_filter{YType::str, "sp-filter"},
    sp_has_duration{YType::boolean, "sp-has-duration"},
    sp_state{YType::str, "sp-state"},
    spht_remaining{YType::uint32, "spht-remaining"},
    spht_running{YType::boolean, "spht-running"},
    up_time_seconds{YType::uint32, "up-time-seconds"}
    	,
    capabilities(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities>())
	,graceful_restart_adjacency(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency>())
	,nbr_stats(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats>())
	,tcp_information(std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation>())
{
    capabilities->parent = this;

    graceful_restart_adjacency->parent = this;

    nbr_stats->parent = this;

    tcp_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
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
	|| advertise_bgp_prefixes.is_set
	|| bgp_advertisement_state.is_set
	|| downstream_on_demand.is_set
	|| has_sp.is_set
	|| inbound_ipv4.is_set
	|| inbound_ipv6_filter.is_set
	|| label_space_id.is_set
	|| nbr_path_vector_limit.is_set
	|| outbound_ipv4_filter.is_set
	|| outbound_ipv6_filter.is_set
	|| peer_hold_time.is_set
	|| peer_keep_alive_interval.is_set
	|| peer_state.is_set
	|| session_prot_ver.is_set
	|| session_role.is_set
	|| sp_duration.is_set
	|| sp_filter.is_set
	|| sp_has_duration.is_set
	|| sp_state.is_set
	|| spht_remaining.is_set
	|| spht_running.is_set
	|| up_time_seconds.is_set
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (graceful_restart_adjacency !=  nullptr && graceful_restart_adjacency->has_data())
	|| (nbr_stats !=  nullptr && nbr_stats->has_data())
	|| (tcp_information !=  nullptr && tcp_information->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::has_operation() const
{
    for (auto const & leaf : client.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : duplicate_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : nbr_bound_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(lsr_id.operation)
	|| is_set(advertise_bgp_prefixes.operation)
	|| is_set(bgp_advertisement_state.operation)
	|| is_set(client.operation)
	|| is_set(downstream_on_demand.operation)
	|| is_set(duplicate_address.operation)
	|| is_set(has_sp.operation)
	|| is_set(inbound_ipv4.operation)
	|| is_set(inbound_ipv6_filter.operation)
	|| is_set(label_space_id.operation)
	|| is_set(nbr_bound_address.operation)
	|| is_set(nbr_path_vector_limit.operation)
	|| is_set(outbound_ipv4_filter.operation)
	|| is_set(outbound_ipv6_filter.operation)
	|| is_set(peer_hold_time.operation)
	|| is_set(peer_keep_alive_interval.operation)
	|| is_set(peer_state.operation)
	|| is_set(session_prot_ver.operation)
	|| is_set(session_role.operation)
	|| is_set(sp_duration.operation)
	|| is_set(sp_filter.operation)
	|| is_set(sp_has_duration.operation)
	|| is_set(sp_state.operation)
	|| is_set(spht_remaining.operation)
	|| is_set(spht_running.operation)
	|| is_set(up_time_seconds.operation)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (graceful_restart_adjacency !=  nullptr && graceful_restart_adjacency->has_operation())
	|| (nbr_stats !=  nullptr && nbr_stats->has_operation())
	|| (tcp_information !=  nullptr && tcp_information->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[vrf-name='" <<vrf_name <<"']" <<"[lsr-id='" <<lsr_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (advertise_bgp_prefixes.is_set || is_set(advertise_bgp_prefixes.operation)) leaf_name_data.push_back(advertise_bgp_prefixes.get_name_leafdata());
    if (bgp_advertisement_state.is_set || is_set(bgp_advertisement_state.operation)) leaf_name_data.push_back(bgp_advertisement_state.get_name_leafdata());
    if (downstream_on_demand.is_set || is_set(downstream_on_demand.operation)) leaf_name_data.push_back(downstream_on_demand.get_name_leafdata());
    if (has_sp.is_set || is_set(has_sp.operation)) leaf_name_data.push_back(has_sp.get_name_leafdata());
    if (inbound_ipv4.is_set || is_set(inbound_ipv4.operation)) leaf_name_data.push_back(inbound_ipv4.get_name_leafdata());
    if (inbound_ipv6_filter.is_set || is_set(inbound_ipv6_filter.operation)) leaf_name_data.push_back(inbound_ipv6_filter.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (nbr_path_vector_limit.is_set || is_set(nbr_path_vector_limit.operation)) leaf_name_data.push_back(nbr_path_vector_limit.get_name_leafdata());
    if (outbound_ipv4_filter.is_set || is_set(outbound_ipv4_filter.operation)) leaf_name_data.push_back(outbound_ipv4_filter.get_name_leafdata());
    if (outbound_ipv6_filter.is_set || is_set(outbound_ipv6_filter.operation)) leaf_name_data.push_back(outbound_ipv6_filter.get_name_leafdata());
    if (peer_hold_time.is_set || is_set(peer_hold_time.operation)) leaf_name_data.push_back(peer_hold_time.get_name_leafdata());
    if (peer_keep_alive_interval.is_set || is_set(peer_keep_alive_interval.operation)) leaf_name_data.push_back(peer_keep_alive_interval.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.operation)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (session_prot_ver.is_set || is_set(session_prot_ver.operation)) leaf_name_data.push_back(session_prot_ver.get_name_leafdata());
    if (session_role.is_set || is_set(session_role.operation)) leaf_name_data.push_back(session_role.get_name_leafdata());
    if (sp_duration.is_set || is_set(sp_duration.operation)) leaf_name_data.push_back(sp_duration.get_name_leafdata());
    if (sp_filter.is_set || is_set(sp_filter.operation)) leaf_name_data.push_back(sp_filter.get_name_leafdata());
    if (sp_has_duration.is_set || is_set(sp_has_duration.operation)) leaf_name_data.push_back(sp_has_duration.get_name_leafdata());
    if (sp_state.is_set || is_set(sp_state.operation)) leaf_name_data.push_back(sp_state.get_name_leafdata());
    if (spht_remaining.is_set || is_set(spht_remaining.operation)) leaf_name_data.push_back(spht_remaining.get_name_leafdata());
    if (spht_running.is_set || is_set(spht_running.operation)) leaf_name_data.push_back(spht_running.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.operation)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());

    auto client_name_datas = client.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), client_name_datas.begin(), client_name_datas.end());
    auto duplicate_address_name_datas = duplicate_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), duplicate_address_name_datas.begin(), duplicate_address_name_datas.end());
    auto nbr_bound_address_name_datas = nbr_bound_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbr_bound_address_name_datas.begin(), nbr_bound_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "graceful-restart-adjacency")
    {
        if(graceful_restart_adjacency == nullptr)
        {
            graceful_restart_adjacency = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency>();
        }
        return graceful_restart_adjacency;
    }

    if(child_yang_name == "nbr-stats")
    {
        if(nbr_stats == nullptr)
        {
            nbr_stats = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats>();
        }
        return nbr_stats;
    }

    if(child_yang_name == "tcp-information")
    {
        if(tcp_information == nullptr)
        {
            tcp_information = std::make_shared<MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation>();
        }
        return tcp_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(graceful_restart_adjacency != nullptr)
    {
        children["graceful-restart-adjacency"] = graceful_restart_adjacency;
    }

    if(nbr_stats != nullptr)
    {
        children["nbr-stats"] = nbr_stats;
    }

    if(tcp_information != nullptr)
    {
        children["tcp-information"] = tcp_information;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes = value;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state = value;
    }
    if(value_path == "client")
    {
        client.append(value);
    }
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand = value;
    }
    if(value_path == "duplicate-address")
    {
        duplicate_address.append(value);
    }
    if(value_path == "has-sp")
    {
        has_sp = value;
    }
    if(value_path == "inbound-ipv4")
    {
        inbound_ipv4 = value;
    }
    if(value_path == "inbound-ipv6-filter")
    {
        inbound_ipv6_filter = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "nbr-bound-address")
    {
        nbr_bound_address.append(value);
    }
    if(value_path == "nbr-path-vector-limit")
    {
        nbr_path_vector_limit = value;
    }
    if(value_path == "outbound-ipv4-filter")
    {
        outbound_ipv4_filter = value;
    }
    if(value_path == "outbound-ipv6-filter")
    {
        outbound_ipv6_filter = value;
    }
    if(value_path == "peer-hold-time")
    {
        peer_hold_time = value;
    }
    if(value_path == "peer-keep-alive-interval")
    {
        peer_keep_alive_interval = value;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
    }
    if(value_path == "session-prot-ver")
    {
        session_prot_ver = value;
    }
    if(value_path == "session-role")
    {
        session_role = value;
    }
    if(value_path == "sp-duration")
    {
        sp_duration = value;
    }
    if(value_path == "sp-filter")
    {
        sp_filter = value;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration = value;
    }
    if(value_path == "sp-state")
    {
        sp_state = value;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining = value;
    }
    if(value_path == "spht-running")
    {
        spht_running = value;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::NbrStats()
    :
    num_of_nbr_ipv4_addresses{YType::uint32, "num-of-nbr-ipv4-addresses"},
    num_of_nbr_ipv4_discovery{YType::uint32, "num-of-nbr-ipv4-discovery"},
    num_of_nbr_ipv4_lbl{YType::uint32, "num-of-nbr-ipv4-lbl"},
    num_of_nbr_ipv6_addresses{YType::uint32, "num-of-nbr-ipv6-addresses"},
    num_of_nbr_ipv6_discovery{YType::uint32, "num-of-nbr-ipv6-discovery"},
    num_of_nbr_ipv6_lbl{YType::uint32, "num-of-nbr-ipv6-lbl"},
    ta_pies_rcvd{YType::uint32, "ta-pies-rcvd"},
    ta_pies_sent{YType::uint32, "ta-pies-sent"}
{
    yang_name = "nbr-stats"; yang_parent_name = "neighbor";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::~NbrStats()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::has_data() const
{
    return num_of_nbr_ipv4_addresses.is_set
	|| num_of_nbr_ipv4_discovery.is_set
	|| num_of_nbr_ipv4_lbl.is_set
	|| num_of_nbr_ipv6_addresses.is_set
	|| num_of_nbr_ipv6_discovery.is_set
	|| num_of_nbr_ipv6_lbl.is_set
	|| ta_pies_rcvd.is_set
	|| ta_pies_sent.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(num_of_nbr_ipv4_addresses.operation)
	|| is_set(num_of_nbr_ipv4_discovery.operation)
	|| is_set(num_of_nbr_ipv4_lbl.operation)
	|| is_set(num_of_nbr_ipv6_addresses.operation)
	|| is_set(num_of_nbr_ipv6_discovery.operation)
	|| is_set(num_of_nbr_ipv6_lbl.operation)
	|| is_set(ta_pies_rcvd.operation)
	|| is_set(ta_pies_sent.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-stats";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NbrStats' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_nbr_ipv4_addresses.is_set || is_set(num_of_nbr_ipv4_addresses.operation)) leaf_name_data.push_back(num_of_nbr_ipv4_addresses.get_name_leafdata());
    if (num_of_nbr_ipv4_discovery.is_set || is_set(num_of_nbr_ipv4_discovery.operation)) leaf_name_data.push_back(num_of_nbr_ipv4_discovery.get_name_leafdata());
    if (num_of_nbr_ipv4_lbl.is_set || is_set(num_of_nbr_ipv4_lbl.operation)) leaf_name_data.push_back(num_of_nbr_ipv4_lbl.get_name_leafdata());
    if (num_of_nbr_ipv6_addresses.is_set || is_set(num_of_nbr_ipv6_addresses.operation)) leaf_name_data.push_back(num_of_nbr_ipv6_addresses.get_name_leafdata());
    if (num_of_nbr_ipv6_discovery.is_set || is_set(num_of_nbr_ipv6_discovery.operation)) leaf_name_data.push_back(num_of_nbr_ipv6_discovery.get_name_leafdata());
    if (num_of_nbr_ipv6_lbl.is_set || is_set(num_of_nbr_ipv6_lbl.operation)) leaf_name_data.push_back(num_of_nbr_ipv6_lbl.get_name_leafdata());
    if (ta_pies_rcvd.is_set || is_set(ta_pies_rcvd.operation)) leaf_name_data.push_back(ta_pies_rcvd.get_name_leafdata());
    if (ta_pies_sent.is_set || is_set(ta_pies_sent.operation)) leaf_name_data.push_back(ta_pies_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-of-nbr-ipv4-addresses")
    {
        num_of_nbr_ipv4_addresses = value;
    }
    if(value_path == "num-of-nbr-ipv4-discovery")
    {
        num_of_nbr_ipv4_discovery = value;
    }
    if(value_path == "num-of-nbr-ipv4-lbl")
    {
        num_of_nbr_ipv4_lbl = value;
    }
    if(value_path == "num-of-nbr-ipv6-addresses")
    {
        num_of_nbr_ipv6_addresses = value;
    }
    if(value_path == "num-of-nbr-ipv6-discovery")
    {
        num_of_nbr_ipv6_discovery = value;
    }
    if(value_path == "num-of-nbr-ipv6-lbl")
    {
        num_of_nbr_ipv6_lbl = value;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd = value;
    }
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::GracefulRestartAdjacency()
    :
    down_nbr_down_reason{YType::identityref, "down-nbr-down-reason"},
    down_nbr_flap_count{YType::uint32, "down-nbr-flap-count"},
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    is_liveness_timer_running{YType::empty, "is-liveness-timer-running"},
    is_recovery_timer_running{YType::empty, "is-recovery-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    recovery_time{YType::uint32, "recovery-time"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"}
{
    yang_name = "graceful-restart-adjacency"; yang_parent_name = "neighbor";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::~GracefulRestartAdjacency()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::has_data() const
{
    return down_nbr_down_reason.is_set
	|| down_nbr_flap_count.is_set
	|| is_graceful_restartable.is_set
	|| is_liveness_timer_running.is_set
	|| is_recovery_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| reconnect_timeout.is_set
	|| recovery_time.is_set
	|| recovery_timer_remaining_seconds.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(down_nbr_down_reason.operation)
	|| is_set(down_nbr_flap_count.operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(is_liveness_timer_running.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(liveness_timer_remaining_seconds.operation)
	|| is_set(reconnect_timeout.operation)
	|| is_set(recovery_time.operation)
	|| is_set(recovery_timer_remaining_seconds.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-adjacency";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestartAdjacency' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.operation)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.operation)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.operation)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.operation)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.operation)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.operation)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
    }
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::TcpInformation()
    :
    foreign_host{YType::str, "foreign-host"},
    foreign_port{YType::uint16, "foreign-port"},
    is_md5_on{YType::boolean, "is-md5-on"},
    local_host{YType::str, "local-host"},
    local_port{YType::uint16, "local-port"},
    up_time{YType::str, "up-time"}
{
    yang_name = "tcp-information"; yang_parent_name = "neighbor";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::~TcpInformation()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::has_data() const
{
    return foreign_host.is_set
	|| foreign_port.is_set
	|| is_md5_on.is_set
	|| local_host.is_set
	|| local_port.is_set
	|| up_time.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(foreign_host.operation)
	|| is_set(foreign_port.operation)
	|| is_set(is_md5_on.operation)
	|| is_set(local_host.operation)
	|| is_set(local_port.operation)
	|| is_set(up_time.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-information";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInformation' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_host.is_set || is_set(foreign_host.operation)) leaf_name_data.push_back(foreign_host.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (is_md5_on.is_set || is_set(is_md5_on.operation)) leaf_name_data.push_back(is_md5_on.get_name_leafdata());
    if (local_host.is_set || is_set(local_host.operation)) leaf_name_data.push_back(local_host.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.operation)) leaf_name_data.push_back(up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foreign-host")
    {
        foreign_host = value;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on = value;
    }
    if(value_path == "local-host")
    {
        local_host = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "up-time")
    {
        up_time = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "neighbor";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::~Capabilities()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::has_data() const
{
    for (std::size_t index=0; index<received_caps.size(); index++)
    {
        if(received_caps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sent_caps.size(); index++)
    {
        if(sent_caps[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<received_caps.size(); index++)
    {
        if(received_caps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sent_caps.size(); index++)
    {
        if(sent_caps[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : received_caps)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sent_caps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::SentCaps()
    :
    cap_type{YType::uint16, "cap-type"},
    cap_des{YType::str, "cap-des"},
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"}
{
    yang_name = "sent-caps"; yang_parent_name = "capabilities";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::~SentCaps()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::has_data() const
{
    return cap_type.is_set
	|| cap_des.is_set
	|| capability_data.is_set
	|| capability_data_length.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::has_operation() const
{
    return is_set(operation)
	|| is_set(cap_type.operation)
	|| is_set(cap_des.operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent-caps" <<"[cap-type='" <<cap_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SentCaps' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.operation)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.operation)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::ReceivedCaps()
    :
    cap_type{YType::uint16, "cap-type"},
    cap_des{YType::str, "cap-des"},
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"}
{
    yang_name = "received-caps"; yang_parent_name = "capabilities";
}

MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::~ReceivedCaps()
{
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::has_data() const
{
    return cap_type.is_set
	|| cap_des.is_set
	|| capability_data.is_set
	|| capability_data_length.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::has_operation() const
{
    return is_set(operation)
	|| is_set(cap_type.operation)
	|| is_set(cap_des.operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-caps" <<"[cap-type='" <<cap_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedCaps' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cap_type.is_set || is_set(cap_type.operation)) leaf_name_data.push_back(cap_type.get_name_leafdata());
    if (cap_des.is_set || is_set(cap_des.operation)) leaf_name_data.push_back(cap_des.get_name_leafdata());
    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cap-type")
    {
        cap_type = value;
    }
    if(value_path == "cap-des")
    {
        cap_des = value;
    }
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::NbrAdjs::NbrAdjs()
    :
    interface{YType::str, "interface"},
    local_address{YType::str, "local-address"},
    target_address{YType::str, "target-address"},
    target_state{YType::enumeration, "target-state"}
{
    yang_name = "nbr-adjs"; yang_parent_name = "neighbors";
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
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(local_address.operation)
	|| is_set(target_address.operation)
	|| is_set(target_state.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-adjs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::NbrAdjs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_state.is_set || is_set(target_state.operation)) leaf_name_data.push_back(target_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::NbrAdjs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
    if(value_path == "target-state")
    {
        target_state = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::StatsInfo()
    :
    bad_ldpid{YType::uint32, "bad-ldpid"},
    bad_msg_len{YType::uint32, "bad-msg-len"},
    bad_pdu_len{YType::uint32, "bad-pdu-len"},
    bad_tlv_len{YType::uint32, "bad-tlv-len"},
    discon_time{YType::uint32, "discon-time"},
    keep_alive_exp{YType::uint32, "keep-alive-exp"},
    malformed_tlv_val{YType::uint32, "malformed-tlv-val"},
    sess_rej_ad{YType::uint32, "sess-rej-ad"},
    sess_rej_lr{YType::uint32, "sess-rej-lr"},
    sess_rej_max_pdu{YType::uint32, "sess-rej-max-pdu"},
    sess_reject_no_hello{YType::uint32, "sess-reject-no-hello"},
    session_attempts{YType::uint32, "session-attempts"},
    shutdow_notif_sent{YType::uint32, "shutdow-notif-sent"},
    shutdown_notif_rec{YType::uint32, "shutdown-notif-rec"}
    	,
    message_in(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn>())
	,message_out(std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut>())
{
    message_in->parent = this;

    message_out->parent = this;

    yang_name = "stats-info"; yang_parent_name = "neighbors";
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::~StatsInfo()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::has_data() const
{
    return bad_ldpid.is_set
	|| bad_msg_len.is_set
	|| bad_pdu_len.is_set
	|| bad_tlv_len.is_set
	|| discon_time.is_set
	|| keep_alive_exp.is_set
	|| malformed_tlv_val.is_set
	|| sess_rej_ad.is_set
	|| sess_rej_lr.is_set
	|| sess_rej_max_pdu.is_set
	|| sess_reject_no_hello.is_set
	|| session_attempts.is_set
	|| shutdow_notif_sent.is_set
	|| shutdown_notif_rec.is_set
	|| (message_in !=  nullptr && message_in->has_data())
	|| (message_out !=  nullptr && message_out->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_ldpid.operation)
	|| is_set(bad_msg_len.operation)
	|| is_set(bad_pdu_len.operation)
	|| is_set(bad_tlv_len.operation)
	|| is_set(discon_time.operation)
	|| is_set(keep_alive_exp.operation)
	|| is_set(malformed_tlv_val.operation)
	|| is_set(sess_rej_ad.operation)
	|| is_set(sess_rej_lr.operation)
	|| is_set(sess_rej_max_pdu.operation)
	|| is_set(sess_reject_no_hello.operation)
	|| is_set(session_attempts.operation)
	|| is_set(shutdow_notif_sent.operation)
	|| is_set(shutdown_notif_rec.operation)
	|| (message_in !=  nullptr && message_in->has_operation())
	|| (message_out !=  nullptr && message_out->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-info";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_ldpid.is_set || is_set(bad_ldpid.operation)) leaf_name_data.push_back(bad_ldpid.get_name_leafdata());
    if (bad_msg_len.is_set || is_set(bad_msg_len.operation)) leaf_name_data.push_back(bad_msg_len.get_name_leafdata());
    if (bad_pdu_len.is_set || is_set(bad_pdu_len.operation)) leaf_name_data.push_back(bad_pdu_len.get_name_leafdata());
    if (bad_tlv_len.is_set || is_set(bad_tlv_len.operation)) leaf_name_data.push_back(bad_tlv_len.get_name_leafdata());
    if (discon_time.is_set || is_set(discon_time.operation)) leaf_name_data.push_back(discon_time.get_name_leafdata());
    if (keep_alive_exp.is_set || is_set(keep_alive_exp.operation)) leaf_name_data.push_back(keep_alive_exp.get_name_leafdata());
    if (malformed_tlv_val.is_set || is_set(malformed_tlv_val.operation)) leaf_name_data.push_back(malformed_tlv_val.get_name_leafdata());
    if (sess_rej_ad.is_set || is_set(sess_rej_ad.operation)) leaf_name_data.push_back(sess_rej_ad.get_name_leafdata());
    if (sess_rej_lr.is_set || is_set(sess_rej_lr.operation)) leaf_name_data.push_back(sess_rej_lr.get_name_leafdata());
    if (sess_rej_max_pdu.is_set || is_set(sess_rej_max_pdu.operation)) leaf_name_data.push_back(sess_rej_max_pdu.get_name_leafdata());
    if (sess_reject_no_hello.is_set || is_set(sess_reject_no_hello.operation)) leaf_name_data.push_back(sess_reject_no_hello.get_name_leafdata());
    if (session_attempts.is_set || is_set(session_attempts.operation)) leaf_name_data.push_back(session_attempts.get_name_leafdata());
    if (shutdow_notif_sent.is_set || is_set(shutdow_notif_sent.operation)) leaf_name_data.push_back(shutdow_notif_sent.get_name_leafdata());
    if (shutdown_notif_rec.is_set || is_set(shutdown_notif_rec.operation)) leaf_name_data.push_back(shutdown_notif_rec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message-in")
    {
        if(message_in == nullptr)
        {
            message_in = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn>();
        }
        return message_in;
    }

    if(child_yang_name == "message-out")
    {
        if(message_out == nullptr)
        {
            message_out = std::make_shared<MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut>();
        }
        return message_out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpState::Neighbors::StatsInfo::get_children() const
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

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-ldpid")
    {
        bad_ldpid = value;
    }
    if(value_path == "bad-msg-len")
    {
        bad_msg_len = value;
    }
    if(value_path == "bad-pdu-len")
    {
        bad_pdu_len = value;
    }
    if(value_path == "bad-tlv-len")
    {
        bad_tlv_len = value;
    }
    if(value_path == "discon-time")
    {
        discon_time = value;
    }
    if(value_path == "keep-alive-exp")
    {
        keep_alive_exp = value;
    }
    if(value_path == "malformed-tlv-val")
    {
        malformed_tlv_val = value;
    }
    if(value_path == "sess-rej-ad")
    {
        sess_rej_ad = value;
    }
    if(value_path == "sess-rej-lr")
    {
        sess_rej_lr = value;
    }
    if(value_path == "sess-rej-max-pdu")
    {
        sess_rej_max_pdu = value;
    }
    if(value_path == "sess-reject-no-hello")
    {
        sess_reject_no_hello = value;
    }
    if(value_path == "session-attempts")
    {
        session_attempts = value;
    }
    if(value_path == "shutdow-notif-sent")
    {
        shutdow_notif_sent = value;
    }
    if(value_path == "shutdown-notif-rec")
    {
        shutdown_notif_rec = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::MessageOut()
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
    yang_name = "message-out"; yang_parent_name = "stats-info";
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::~MessageOut()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::has_data() const
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

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/stats-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::MessageIn()
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
    yang_name = "message-in"; yang_parent_name = "stats-info";
}

MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::~MessageIn()
{
}

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::has_data() const
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

bool MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/stats-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::Backoffs::Backoffs()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{
    yang_name = "backoffs"; yang_parent_name = "neighbors";
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
    return is_set(operation)
	|| is_set(backoff_seconds.operation)
	|| is_set(waiting_seconds.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::Backoffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.operation)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.operation)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::Backoffs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NsrNbrDetail()
    :
    nsr_nbr_in_label_reqs_created{YType::uint32, "nsr-nbr-in-label-reqs-created"},
    nsr_nbr_in_label_reqs_freed{YType::uint32, "nsr-nbr-in-label-reqs-freed"},
    nsr_nbr_in_label_withdraw_created{YType::uint32, "nsr-nbr-in-label-withdraw-created"},
    nsr_nbr_in_label_withdraw_freed{YType::uint32, "nsr-nbr-in-label-withdraw-freed"},
    nsr_nbr_last_sync_error{YType::identityref, "nsr-nbr-last-sync-error"},
    nsr_nbr_last_sync_nack_reason{YType::identityref, "nsr-nbr-last-sync-nack-reason"},
    nsr_nbr_lcl_addr_withdraw_cleared{YType::uint32, "nsr-nbr-lcl-addr-withdraw-cleared"},
    nsr_nbr_lcl_addr_withdraw_set{YType::uint32, "nsr-nbr-lcl-addr-withdraw-set"},
    nsr_nbr_pend_label_req_resps{YType::uint32, "nsr-nbr-pend-label-req-resps"},
    nsr_nbr_pend_label_withdraw_resps{YType::uint32, "nsr-nbr-pend-label-withdraw-resps"},
    nsr_nbr_pend_lcl_addr_withdraw_acks{YType::uint32, "nsr-nbr-pend-lcl-addr-withdraw-acks"},
    nsr_nbr_sync_state{YType::identityref, "nsr-nbr-sync-state"},
    nsr_nbr_xmit_ctxt_deq{YType::uint32, "nsr-nbr-xmit-ctxt-deq"},
    nsr_nbr_xmit_ctxt_enq{YType::uint32, "nsr-nbr-xmit-ctxt-enq"},
    nsr_state{YType::identityref, "nsr-state"},
    path_vector_limit{YType::int32, "path-vector-limit"}
    	,
    nbr_sess(std::make_shared<MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess>())
{
    nbr_sess->parent = this;

    yang_name = "nsr-nbr-detail"; yang_parent_name = "neighbors";
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::~NsrNbrDetail()
{
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::has_data() const
{
    return nsr_nbr_in_label_reqs_created.is_set
	|| nsr_nbr_in_label_reqs_freed.is_set
	|| nsr_nbr_in_label_withdraw_created.is_set
	|| nsr_nbr_in_label_withdraw_freed.is_set
	|| nsr_nbr_last_sync_error.is_set
	|| nsr_nbr_last_sync_nack_reason.is_set
	|| nsr_nbr_lcl_addr_withdraw_cleared.is_set
	|| nsr_nbr_lcl_addr_withdraw_set.is_set
	|| nsr_nbr_pend_label_req_resps.is_set
	|| nsr_nbr_pend_label_withdraw_resps.is_set
	|| nsr_nbr_pend_lcl_addr_withdraw_acks.is_set
	|| nsr_nbr_sync_state.is_set
	|| nsr_nbr_xmit_ctxt_deq.is_set
	|| nsr_nbr_xmit_ctxt_enq.is_set
	|| nsr_state.is_set
	|| path_vector_limit.is_set
	|| (nbr_sess !=  nullptr && nbr_sess->has_data());
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_nbr_in_label_reqs_created.operation)
	|| is_set(nsr_nbr_in_label_reqs_freed.operation)
	|| is_set(nsr_nbr_in_label_withdraw_created.operation)
	|| is_set(nsr_nbr_in_label_withdraw_freed.operation)
	|| is_set(nsr_nbr_last_sync_error.operation)
	|| is_set(nsr_nbr_last_sync_nack_reason.operation)
	|| is_set(nsr_nbr_lcl_addr_withdraw_cleared.operation)
	|| is_set(nsr_nbr_lcl_addr_withdraw_set.operation)
	|| is_set(nsr_nbr_pend_label_req_resps.operation)
	|| is_set(nsr_nbr_pend_label_withdraw_resps.operation)
	|| is_set(nsr_nbr_pend_lcl_addr_withdraw_acks.operation)
	|| is_set(nsr_nbr_sync_state.operation)
	|| is_set(nsr_nbr_xmit_ctxt_deq.operation)
	|| is_set(nsr_nbr_xmit_ctxt_enq.operation)
	|| is_set(nsr_state.operation)
	|| is_set(path_vector_limit.operation)
	|| (nbr_sess !=  nullptr && nbr_sess->has_operation());
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-nbr-detail";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_nbr_in_label_reqs_created.is_set || is_set(nsr_nbr_in_label_reqs_created.operation)) leaf_name_data.push_back(nsr_nbr_in_label_reqs_created.get_name_leafdata());
    if (nsr_nbr_in_label_reqs_freed.is_set || is_set(nsr_nbr_in_label_reqs_freed.operation)) leaf_name_data.push_back(nsr_nbr_in_label_reqs_freed.get_name_leafdata());
    if (nsr_nbr_in_label_withdraw_created.is_set || is_set(nsr_nbr_in_label_withdraw_created.operation)) leaf_name_data.push_back(nsr_nbr_in_label_withdraw_created.get_name_leafdata());
    if (nsr_nbr_in_label_withdraw_freed.is_set || is_set(nsr_nbr_in_label_withdraw_freed.operation)) leaf_name_data.push_back(nsr_nbr_in_label_withdraw_freed.get_name_leafdata());
    if (nsr_nbr_last_sync_error.is_set || is_set(nsr_nbr_last_sync_error.operation)) leaf_name_data.push_back(nsr_nbr_last_sync_error.get_name_leafdata());
    if (nsr_nbr_last_sync_nack_reason.is_set || is_set(nsr_nbr_last_sync_nack_reason.operation)) leaf_name_data.push_back(nsr_nbr_last_sync_nack_reason.get_name_leafdata());
    if (nsr_nbr_lcl_addr_withdraw_cleared.is_set || is_set(nsr_nbr_lcl_addr_withdraw_cleared.operation)) leaf_name_data.push_back(nsr_nbr_lcl_addr_withdraw_cleared.get_name_leafdata());
    if (nsr_nbr_lcl_addr_withdraw_set.is_set || is_set(nsr_nbr_lcl_addr_withdraw_set.operation)) leaf_name_data.push_back(nsr_nbr_lcl_addr_withdraw_set.get_name_leafdata());
    if (nsr_nbr_pend_label_req_resps.is_set || is_set(nsr_nbr_pend_label_req_resps.operation)) leaf_name_data.push_back(nsr_nbr_pend_label_req_resps.get_name_leafdata());
    if (nsr_nbr_pend_label_withdraw_resps.is_set || is_set(nsr_nbr_pend_label_withdraw_resps.operation)) leaf_name_data.push_back(nsr_nbr_pend_label_withdraw_resps.get_name_leafdata());
    if (nsr_nbr_pend_lcl_addr_withdraw_acks.is_set || is_set(nsr_nbr_pend_lcl_addr_withdraw_acks.operation)) leaf_name_data.push_back(nsr_nbr_pend_lcl_addr_withdraw_acks.get_name_leafdata());
    if (nsr_nbr_sync_state.is_set || is_set(nsr_nbr_sync_state.operation)) leaf_name_data.push_back(nsr_nbr_sync_state.get_name_leafdata());
    if (nsr_nbr_xmit_ctxt_deq.is_set || is_set(nsr_nbr_xmit_ctxt_deq.operation)) leaf_name_data.push_back(nsr_nbr_xmit_ctxt_deq.get_name_leafdata());
    if (nsr_nbr_xmit_ctxt_enq.is_set || is_set(nsr_nbr_xmit_ctxt_enq.operation)) leaf_name_data.push_back(nsr_nbr_xmit_ctxt_enq.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (path_vector_limit.is_set || is_set(path_vector_limit.operation)) leaf_name_data.push_back(path_vector_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-nbr-in-label-reqs-created")
    {
        nsr_nbr_in_label_reqs_created = value;
    }
    if(value_path == "nsr-nbr-in-label-reqs-freed")
    {
        nsr_nbr_in_label_reqs_freed = value;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-created")
    {
        nsr_nbr_in_label_withdraw_created = value;
    }
    if(value_path == "nsr-nbr-in-label-withdraw-freed")
    {
        nsr_nbr_in_label_withdraw_freed = value;
    }
    if(value_path == "nsr-nbr-last-sync-error")
    {
        nsr_nbr_last_sync_error = value;
    }
    if(value_path == "nsr-nbr-last-sync-nack-reason")
    {
        nsr_nbr_last_sync_nack_reason = value;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-cleared")
    {
        nsr_nbr_lcl_addr_withdraw_cleared = value;
    }
    if(value_path == "nsr-nbr-lcl-addr-withdraw-set")
    {
        nsr_nbr_lcl_addr_withdraw_set = value;
    }
    if(value_path == "nsr-nbr-pend-label-req-resps")
    {
        nsr_nbr_pend_label_req_resps = value;
    }
    if(value_path == "nsr-nbr-pend-label-withdraw-resps")
    {
        nsr_nbr_pend_label_withdraw_resps = value;
    }
    if(value_path == "nsr-nbr-pend-lcl-addr-withdraw-acks")
    {
        nsr_nbr_pend_lcl_addr_withdraw_acks = value;
    }
    if(value_path == "nsr-nbr-sync-state")
    {
        nsr_nbr_sync_state = value;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-deq")
    {
        nsr_nbr_xmit_ctxt_deq = value;
    }
    if(value_path == "nsr-nbr-xmit-ctxt-enq")
    {
        nsr_nbr_xmit_ctxt_enq = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "path-vector-limit")
    {
        path_vector_limit = value;
    }
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::NbrSess()
    :
    discon_time{YType::uint32, "discon-time"},
    keep_alive_remain{YType::uint32, "keep-alive-remain"},
    keep_alive_time{YType::uint32, "keep-alive-time"},
    last_stat_change{YType::uint32, "last-stat-change"},
    max_pdu{YType::uint32, "max-pdu"},
    state{YType::enumeration, "state"},
    unknown_mess_err{YType::uint32, "unknown-mess-err"},
    unknown_tlv{YType::uint32, "unknown-tlv"}
{
    yang_name = "nbr-sess"; yang_parent_name = "nsr-nbr-detail";
}

MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::~NbrSess()
{
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::has_data() const
{
    return discon_time.is_set
	|| keep_alive_remain.is_set
	|| keep_alive_time.is_set
	|| last_stat_change.is_set
	|| max_pdu.is_set
	|| state.is_set
	|| unknown_mess_err.is_set
	|| unknown_tlv.is_set;
}

bool MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::has_operation() const
{
    return is_set(operation)
	|| is_set(discon_time.operation)
	|| is_set(keep_alive_remain.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(last_stat_change.operation)
	|| is_set(max_pdu.operation)
	|| is_set(state.operation)
	|| is_set(unknown_mess_err.operation)
	|| is_set(unknown_tlv.operation);
}

std::string MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-sess";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/neighbors/nsr-nbr-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discon_time.is_set || is_set(discon_time.operation)) leaf_name_data.push_back(discon_time.get_name_leafdata());
    if (keep_alive_remain.is_set || is_set(keep_alive_remain.operation)) leaf_name_data.push_back(keep_alive_remain.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (last_stat_change.is_set || is_set(last_stat_change.operation)) leaf_name_data.push_back(last_stat_change.get_name_leafdata());
    if (max_pdu.is_set || is_set(max_pdu.operation)) leaf_name_data.push_back(max_pdu.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (unknown_mess_err.is_set || is_set(unknown_mess_err.operation)) leaf_name_data.push_back(unknown_mess_err.get_name_leafdata());
    if (unknown_tlv.is_set || is_set(unknown_tlv.operation)) leaf_name_data.push_back(unknown_tlv.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discon-time")
    {
        discon_time = value;
    }
    if(value_path == "keep-alive-remain")
    {
        keep_alive_remain = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "last-stat-change")
    {
        last_stat_change = value;
    }
    if(value_path == "max-pdu")
    {
        max_pdu = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "unknown-mess-err")
    {
        unknown_mess_err = value;
    }
    if(value_path == "unknown-tlv")
    {
        unknown_tlv = value;
    }
}

MplsLdp::MplsLdpState::LabelRanges::LabelRanges()
{
    yang_name = "label-ranges"; yang_parent_name = "mpls-ldp-state";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpState::LabelRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-ranges";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::LabelRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::LabelRanges::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpState::LabelRanges::LabelRange::LabelRange()
    :
    lr_min{YType::uint32, "lr-min"},
    lr_max{YType::uint32, "lr-max"}
{
    yang_name = "label-range"; yang_parent_name = "label-ranges";
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
    return is_set(operation)
	|| is_set(lr_min.operation)
	|| is_set(lr_max.operation);
}

std::string MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range" <<"[lr-min='" <<lr_min <<"']" <<"[lr-max='" <<lr_max <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpState::LabelRanges::LabelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-state/label-ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lr_min.is_set || is_set(lr_min.operation)) leaf_name_data.push_back(lr_min.get_name_leafdata());
    if (lr_max.is_set || is_set(lr_max.operation)) leaf_name_data.push_back(lr_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpState::LabelRanges::LabelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lr-min")
    {
        lr_min = value;
    }
    if(value_path == "lr-max")
    {
        lr_max = value;
    }
}

MplsLdp::MplsLdpConfig::MplsLdpConfig()
    :
    discovery(std::make_shared<MplsLdp::MplsLdpConfig::Discovery>())
	,dual_stack(std::make_shared<MplsLdp::MplsLdpConfig::DualStack>())
	,global_cfg(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg>())
	,graceful_restart(std::make_shared<MplsLdp::MplsLdpConfig::GracefulRestart>())
	,interfaces(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces>())
	,label_cfg(std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg>())
	,logging(std::make_shared<MplsLdp::MplsLdpConfig::Logging>())
	,nbr_table(std::make_shared<MplsLdp::MplsLdpConfig::NbrTable>())
	,passwords(std::make_shared<MplsLdp::MplsLdpConfig::Passwords>())
	,routing(std::make_shared<MplsLdp::MplsLdpConfig::Routing>())
	,session(std::make_shared<MplsLdp::MplsLdpConfig::Session>())
{
    discovery->parent = this;

    dual_stack->parent = this;

    global_cfg->parent = this;

    graceful_restart->parent = this;

    interfaces->parent = this;

    label_cfg->parent = this;

    logging->parent = this;

    nbr_table->parent = this;

    passwords->parent = this;

    routing->parent = this;

    session->parent = this;

    yang_name = "mpls-ldp-config"; yang_parent_name = "mpls-ldp";
}

MplsLdp::MplsLdpConfig::~MplsLdpConfig()
{
}

bool MplsLdp::MplsLdpConfig::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data())
	|| (dual_stack !=  nullptr && dual_stack->has_data())
	|| (global_cfg !=  nullptr && global_cfg->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (label_cfg !=  nullptr && label_cfg->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (nbr_table !=  nullptr && nbr_table->has_data())
	|| (passwords !=  nullptr && passwords->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::MplsLdpConfig::has_operation() const
{
    return is_set(operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (dual_stack !=  nullptr && dual_stack->has_operation())
	|| (global_cfg !=  nullptr && global_cfg->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (label_cfg !=  nullptr && label_cfg->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (nbr_table !=  nullptr && nbr_table->has_operation())
	|| (passwords !=  nullptr && passwords->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::MplsLdpConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-config";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::MplsLdpConfig::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "dual-stack")
    {
        if(dual_stack == nullptr)
        {
            dual_stack = std::make_shared<MplsLdp::MplsLdpConfig::DualStack>();
        }
        return dual_stack;
    }

    if(child_yang_name == "global-cfg")
    {
        if(global_cfg == nullptr)
        {
            global_cfg = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg>();
        }
        return global_cfg;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::MplsLdpConfig::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::MplsLdpConfig::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "label-cfg")
    {
        if(label_cfg == nullptr)
        {
            label_cfg = std::make_shared<MplsLdp::MplsLdpConfig::LabelCfg>();
        }
        return label_cfg;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsLdp::MplsLdpConfig::Logging>();
        }
        return logging;
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

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<MplsLdp::MplsLdpConfig::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::MplsLdpConfig::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(dual_stack != nullptr)
    {
        children["dual-stack"] = dual_stack;
    }

    if(global_cfg != nullptr)
    {
        children["global-cfg"] = global_cfg;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(label_cfg != nullptr)
    {
        children["label-cfg"] = label_cfg;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(nbr_table != nullptr)
    {
        children["nbr-table"] = nbr_table;
    }

    if(passwords != nullptr)
    {
        children["passwords"] = passwords;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::GlobalCfg::GlobalCfg()
    :
    admin_status{YType::enumeration, "admin-status"},
    dcsp_val{YType::uint32, "dcsp-val"},
    disable_delay{YType::empty, "disable-delay"},
    disable_delay_proc{YType::empty, "disable-delay-proc"},
    disable_quick_start{YType::boolean, "disable-quick-start"},
    enable_nsr{YType::boolean, "enable-nsr"},
    high_priority{YType::boolean, "high-priority"},
    init_sess_thresh{YType::int32, "init-sess-thresh"},
    loop_detection{YType::boolean, "loop-detection"},
    protocol{YType::enumeration, "protocol"},
    seconds{YType::uint32, "seconds"},
    seconds_delay_proc{YType::uint32, "seconds-delay-proc"},
    shutdown{YType::empty, "shutdown"}
    	,
    per_af(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::PerAf>())
	,session(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session>())
{
    per_af->parent = this;

    session->parent = this;

    yang_name = "global-cfg"; yang_parent_name = "mpls-ldp-config";
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
    return admin_status.is_set
	|| dcsp_val.is_set
	|| disable_delay.is_set
	|| disable_delay_proc.is_set
	|| disable_quick_start.is_set
	|| enable_nsr.is_set
	|| high_priority.is_set
	|| init_sess_thresh.is_set
	|| loop_detection.is_set
	|| protocol.is_set
	|| seconds.is_set
	|| seconds_delay_proc.is_set
	|| shutdown.is_set
	|| (per_af !=  nullptr && per_af->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::has_operation() const
{
    for (std::size_t index=0; index<router_id.size(); index++)
    {
        if(router_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_status.operation)
	|| is_set(dcsp_val.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_delay_proc.operation)
	|| is_set(disable_quick_start.operation)
	|| is_set(enable_nsr.operation)
	|| is_set(high_priority.operation)
	|| is_set(init_sess_thresh.operation)
	|| is_set(loop_detection.operation)
	|| is_set(protocol.operation)
	|| is_set(seconds.operation)
	|| is_set(seconds_delay_proc.operation)
	|| is_set(shutdown.operation)
	|| (per_af !=  nullptr && per_af->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (dcsp_val.is_set || is_set(dcsp_val.operation)) leaf_name_data.push_back(dcsp_val.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_delay_proc.is_set || is_set(disable_delay_proc.operation)) leaf_name_data.push_back(disable_delay_proc.get_name_leafdata());
    if (disable_quick_start.is_set || is_set(disable_quick_start.operation)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());
    if (enable_nsr.is_set || is_set(enable_nsr.operation)) leaf_name_data.push_back(enable_nsr.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.operation)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (init_sess_thresh.is_set || is_set(init_sess_thresh.operation)) leaf_name_data.push_back(init_sess_thresh.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.operation)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (seconds_delay_proc.is_set || is_set(seconds_delay_proc.operation)) leaf_name_data.push_back(seconds_delay_proc.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::GlobalCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-af")
    {
        if(per_af == nullptr)
        {
            per_af = std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::PerAf>();
        }
        return per_af;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::GlobalCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_af != nullptr)
    {
        children["per-af"] = per_af;
    }

    for (auto const & c : router_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::GlobalCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "dcsp-val")
    {
        dcsp_val = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-delay-proc")
    {
        disable_delay_proc = value;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
    }
    if(value_path == "enable-nsr")
    {
        enable_nsr = value;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
    }
    if(value_path == "init-sess-thresh")
    {
        init_sess_thresh = value;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
    if(value_path == "seconds-delay-proc")
    {
        seconds_delay_proc = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::RouterId()
    :
    vrf_name{YType::str, "vrf-name"},
    force{YType::empty, "force"},
    lsr_id_if{YType::str, "lsr-id-if"},
    lsr_id_ip{YType::str, "lsr-id-ip"}
{
    yang_name = "router-id"; yang_parent_name = "global-cfg";
}

MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::~RouterId()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::has_data() const
{
    return vrf_name.is_set
	|| force.is_set
	|| lsr_id_if.is_set
	|| lsr_id_ip.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(force.operation)
	|| is_set(lsr_id_if.operation)
	|| is_set(lsr_id_ip.operation);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (lsr_id_if.is_set || is_set(lsr_id_if.operation)) leaf_name_data.push_back(lsr_id_if.get_name_leafdata());
    if (lsr_id_ip.is_set || is_set(lsr_id_ip.operation)) leaf_name_data.push_back(lsr_id_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "lsr-id-if")
    {
        lsr_id_if = value;
    }
    if(value_path == "lsr-id-ip")
    {
        lsr_id_ip = value;
    }
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Session()
    :
    backoff_init{YType::uint32, "backoff-init"},
    backoff_max{YType::uint32, "backoff-max"},
    infinite{YType::boolean, "infinite"},
    seconds{YType::uint16, "seconds"}
    	,
    protection(std::make_shared<MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection>())
{
    protection->parent = this;

    yang_name = "session"; yang_parent_name = "global-cfg";
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
	|| infinite.is_set
	|| seconds.is_set
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::has_operation() const
{
    for (std::size_t index=0; index<downstream_on_demand.size(); index++)
    {
        if(downstream_on_demand[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backoff_init.operation)
	|| is_set(backoff_max.operation)
	|| is_set(infinite.operation)
	|| is_set(seconds.operation)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_init.is_set || is_set(backoff_init.operation)) leaf_name_data.push_back(backoff_init.get_name_leafdata());
    if (backoff_max.is_set || is_set(backoff_max.operation)) leaf_name_data.push_back(backoff_max.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-init")
    {
        backoff_init = value;
    }
    if(value_path == "backoff-max")
    {
        backoff_max = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    vrf_name{YType::str, "vrf-name"},
    enabled{YType::boolean, "enabled"},
    filter{YType::str, "filter"}
{
    yang_name = "downstream-on-demand"; yang_parent_name = "session";
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
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enabled.operation)
	|| is_set(filter.operation);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "filter")
    {
        filter = value;
    }
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::Protection()
    :
    enable_prot{YType::boolean, "enable-prot"},
    inf{YType::empty, "inf"},
    peer_filter{YType::str, "peer-filter"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "protection"; yang_parent_name = "session";
}

MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::~Protection()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::has_data() const
{
    return enable_prot.is_set
	|| inf.is_set
	|| peer_filter.is_set
	|| seconds.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_prot.operation)
	|| is_set(inf.operation)
	|| is_set(peer_filter.operation)
	|| is_set(seconds.operation);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_prot.is_set || is_set(enable_prot.operation)) leaf_name_data.push_back(enable_prot.get_name_leafdata());
    if (inf.is_set || is_set(inf.operation)) leaf_name_data.push_back(inf.get_name_leafdata());
    if (peer_filter.is_set || is_set(peer_filter.operation)) leaf_name_data.push_back(peer_filter.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-prot")
    {
        enable_prot = value;
    }
    if(value_path == "inf")
    {
        inf = value;
    }
    if(value_path == "peer-filter")
    {
        peer_filter = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::PerAf()
{
    yang_name = "per-af"; yang_parent_name = "global-cfg";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-af";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::AfCfg()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    default_route{YType::boolean, "default-route"},
    implicit{YType::empty, "implicit"},
    interface{YType::str, "interface"},
    ipaddr{YType::str, "ipaddr"}
{
    yang_name = "af-cfg"; yang_parent_name = "per-af";
}

MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::~AfCfg()
{
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::has_data() const
{
    return vrf_name.is_set
	|| af_name.is_set
	|| default_route.is_set
	|| implicit.is_set
	|| interface.is_set
	|| ipaddr.is_set;
}

bool MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(af_name.operation)
	|| is_set(default_route.operation)
	|| is_set(implicit.operation)
	|| is_set(interface.operation)
	|| is_set(ipaddr.operation);
}

std::string MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-cfg" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/global-cfg/per-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (default_route.is_set || is_set(default_route.operation)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (implicit.is_set || is_set(implicit.operation)) leaf_name_data.push_back(implicit.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.operation)) leaf_name_data.push_back(ipaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "default-route")
    {
        default_route = value;
    }
    if(value_path == "implicit")
    {
        implicit = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "ipaddr")
    {
        ipaddr = value;
    }
}

MplsLdp::MplsLdpConfig::NbrTable::NbrTable()
{
    yang_name = "nbr-table"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::NbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-table";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::NbrTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::NbrTable::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::NbrCfg()
    :
    nbr_vrf{YType::str, "nbr-vrf"},
    nbr_ip{YType::str, "nbr-ip"},
    admin_status{YType::enumeration, "admin-status"},
    implicit_withdraw{YType::boolean, "implicit-withdraw"},
    label_binding_filter{YType::str, "label-binding-filter"},
    label_protocol{YType::enumeration, "label-protocol"},
    password{YType::str, "password"},
    targeted{YType::boolean, "targeted"}
{
    yang_name = "nbr-cfg"; yang_parent_name = "nbr-table";
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
	|| label_binding_filter.is_set
	|| label_protocol.is_set
	|| password.is_set
	|| targeted.is_set;
}

bool MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(nbr_vrf.operation)
	|| is_set(nbr_ip.operation)
	|| is_set(admin_status.operation)
	|| is_set(implicit_withdraw.operation)
	|| is_set(label_binding_filter.operation)
	|| is_set(label_protocol.operation)
	|| is_set(password.operation)
	|| is_set(targeted.operation);
}

std::string MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-cfg" <<"[nbr-vrf='" <<nbr_vrf <<"']" <<"[nbr-ip='" <<nbr_ip <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/nbr-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_vrf.is_set || is_set(nbr_vrf.operation)) leaf_name_data.push_back(nbr_vrf.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.operation)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.operation)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (label_binding_filter.is_set || is_set(label_binding_filter.operation)) leaf_name_data.push_back(label_binding_filter.get_name_leafdata());
    if (label_protocol.is_set || is_set(label_protocol.operation)) leaf_name_data.push_back(label_protocol.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.operation)) leaf_name_data.push_back(targeted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf = value;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
    }
    if(value_path == "label-binding-filter")
    {
        label_binding_filter = value;
    }
    if(value_path == "label-protocol")
    {
        label_protocol = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "targeted")
    {
        targeted = value;
    }
}

MplsLdp::MplsLdpConfig::Passwords::Passwords()
{
    yang_name = "passwords"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::Passwords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passwords";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Passwords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Passwords::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Passwords::Password::Password()
    :
    nbr_vrf{YType::str, "nbr-vrf"},
    nbr_id{YType::str, "nbr-id"},
    password_num{YType::uint32, "password-num"},
    clear_pass{YType::str, "clear-pass"},
    encrypt_pass{YType::str, "encrypt-pass"},
    keychain_pass{YType::str, "keychain-pass"},
    pass_required{YType::boolean, "pass-required"}
{
    yang_name = "password"; yang_parent_name = "passwords";
}

MplsLdp::MplsLdpConfig::Passwords::Password::~Password()
{
}

bool MplsLdp::MplsLdpConfig::Passwords::Password::has_data() const
{
    return nbr_vrf.is_set
	|| nbr_id.is_set
	|| password_num.is_set
	|| clear_pass.is_set
	|| encrypt_pass.is_set
	|| keychain_pass.is_set
	|| pass_required.is_set;
}

bool MplsLdp::MplsLdpConfig::Passwords::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(nbr_vrf.operation)
	|| is_set(nbr_id.operation)
	|| is_set(password_num.operation)
	|| is_set(clear_pass.operation)
	|| is_set(encrypt_pass.operation)
	|| is_set(keychain_pass.operation)
	|| is_set(pass_required.operation);
}

std::string MplsLdp::MplsLdpConfig::Passwords::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password" <<"[nbr-vrf='" <<nbr_vrf <<"']" <<"[nbr-id='" <<nbr_id <<"']" <<"[password-num='" <<password_num <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Passwords::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/passwords/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_vrf.is_set || is_set(nbr_vrf.operation)) leaf_name_data.push_back(nbr_vrf.get_name_leafdata());
    if (nbr_id.is_set || is_set(nbr_id.operation)) leaf_name_data.push_back(nbr_id.get_name_leafdata());
    if (password_num.is_set || is_set(password_num.operation)) leaf_name_data.push_back(password_num.get_name_leafdata());
    if (clear_pass.is_set || is_set(clear_pass.operation)) leaf_name_data.push_back(clear_pass.get_name_leafdata());
    if (encrypt_pass.is_set || is_set(encrypt_pass.operation)) leaf_name_data.push_back(encrypt_pass.get_name_leafdata());
    if (keychain_pass.is_set || is_set(keychain_pass.operation)) leaf_name_data.push_back(keychain_pass.get_name_leafdata());
    if (pass_required.is_set || is_set(pass_required.operation)) leaf_name_data.push_back(pass_required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Passwords::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbr-vrf")
    {
        nbr_vrf = value;
    }
    if(value_path == "nbr-id")
    {
        nbr_id = value;
    }
    if(value_path == "password-num")
    {
        password_num = value;
    }
    if(value_path == "clear-pass")
    {
        clear_pass = value;
    }
    if(value_path == "encrypt-pass")
    {
        encrypt_pass = value;
    }
    if(value_path == "keychain-pass")
    {
        keychain_pass = value;
    }
    if(value_path == "pass-required")
    {
        pass_required = value;
    }
}

MplsLdp::MplsLdpConfig::Session::Session()
    :
    backoff{YType::uint32, "backoff"},
    infinite{YType::empty, "infinite"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "session"; yang_parent_name = "mpls-ldp-config";
}

MplsLdp::MplsLdpConfig::Session::~Session()
{
}

bool MplsLdp::MplsLdpConfig::Session::has_data() const
{
    return backoff.is_set
	|| infinite.is_set
	|| seconds.is_set;
}

bool MplsLdp::MplsLdpConfig::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff.operation)
	|| is_set(infinite.operation)
	|| is_set(seconds.operation);
}

std::string MplsLdp::MplsLdpConfig::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff.is_set || is_set(backoff.operation)) leaf_name_data.push_back(backoff.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff")
    {
        backoff = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelCfg()
{
    yang_name = "label-cfg"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-cfg";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::LabelCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::LabelCfg::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::LabelAfCfg()
    :
    vrf_name{YType::str, "vrf-name"},
    af_name{YType::enumeration, "af-name"},
    host_route_enable{YType::boolean, "host-route-enable"},
    prefix_filter{YType::str, "prefix-filter"}
{
    yang_name = "label-af-cfg"; yang_parent_name = "label-cfg";
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
	|| host_route_enable.is_set
	|| prefix_filter.is_set;
}

bool MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::has_operation() const
{
    for (std::size_t index=0; index<advt_filter.size(); index++)
    {
        if(advt_filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(af_name.operation)
	|| is_set(host_route_enable.operation)
	|| is_set(prefix_filter.operation);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-af-cfg" <<"[vrf-name='" <<vrf_name <<"']" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/label-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (host_route_enable.is_set || is_set(host_route_enable.operation)) leaf_name_data.push_back(host_route_enable.get_name_leafdata());
    if (prefix_filter.is_set || is_set(prefix_filter.operation)) leaf_name_data.push_back(prefix_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "host-route-enable")
    {
        host_route_enable = value;
    }
    if(value_path == "prefix-filter")
    {
        prefix_filter = value;
    }
}

MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::AdvtFilter()
    :
    prefix_filter{YType::str, "prefix-filter"},
    peer_filter{YType::str, "peer-filter"},
    interface{YType::str, "interface"},
    adv_label_cfg{YType::enumeration, "adv-label-cfg"}
{
    yang_name = "advt-filter"; yang_parent_name = "label-af-cfg";
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
    return is_set(operation)
	|| is_set(prefix_filter.operation)
	|| is_set(peer_filter.operation)
	|| is_set(interface.operation)
	|| is_set(adv_label_cfg.operation);
}

std::string MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-filter" <<"[prefix-filter='" <<prefix_filter <<"']" <<"[peer-filter='" <<peer_filter <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvtFilter' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_filter.is_set || is_set(prefix_filter.operation)) leaf_name_data.push_back(prefix_filter.get_name_leafdata());
    if (peer_filter.is_set || is_set(peer_filter.operation)) leaf_name_data.push_back(peer_filter.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (adv_label_cfg.is_set || is_set(adv_label_cfg.operation)) leaf_name_data.push_back(adv_label_cfg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-filter")
    {
        prefix_filter = value;
    }
    if(value_path == "peer-filter")
    {
        peer_filter = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "adv-label-cfg")
    {
        adv_label_cfg = value;
    }
}

MplsLdp::MplsLdpConfig::Discovery::Discovery()
    :
    instance_tlv{YType::boolean, "instance-tlv"}
    	,
    int_trans_addrs(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs>())
	,link_hello(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::LinkHello>())
	,targeted_hello(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello>())
{
    int_trans_addrs->parent = this;

    link_hello->parent = this;

    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "mpls-ldp-config";
}

MplsLdp::MplsLdpConfig::Discovery::~Discovery()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::has_data() const
{
    return instance_tlv.is_set
	|| (int_trans_addrs !=  nullptr && int_trans_addrs->has_data())
	|| (link_hello !=  nullptr && link_hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool MplsLdp::MplsLdpConfig::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_tlv.operation)
	|| (int_trans_addrs !=  nullptr && int_trans_addrs->has_operation())
	|| (link_hello !=  nullptr && link_hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_tlv.is_set || is_set(instance_tlv.operation)) leaf_name_data.push_back(instance_tlv.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::MplsLdpConfig::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "int-trans-addrs")
    {
        if(int_trans_addrs == nullptr)
        {
            int_trans_addrs = std::make_shared<MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs>();
        }
        return int_trans_addrs;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::MplsLdpConfig::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(int_trans_addrs != nullptr)
    {
        children["int-trans-addrs"] = int_trans_addrs;
    }

    if(link_hello != nullptr)
    {
        children["link-hello"] = link_hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    return children;
}

void MplsLdp::MplsLdpConfig::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-tlv")
    {
        instance_tlv = value;
    }
}

MplsLdp::MplsLdpConfig::Discovery::LinkHello::LinkHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
{
    yang_name = "link-hello"; yang_parent_name = "discovery";
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
    return is_set(operation)
	|| is_set(holdtime.operation)
	|| is_set(interval.operation);
}

std::string MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Discovery::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::TargetedHello()
    :
    enable{YType::boolean, "enable"},
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
    	,
    accept(std::make_shared<MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept>())
{
    accept->parent = this;

    yang_name = "targeted-hello"; yang_parent_name = "discovery";
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::has_data() const
{
    return enable.is_set
	|| holdtime.is_set
	|| interval.is_set
	|| (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::MplsLdpConfig::Discovery::TargetedHello::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(holdtime.operation)
	|| is_set(interval.operation)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::Accept()
    :
    enable{YType::boolean, "enable"},
    src_filter{YType::str, "src-filter"}
{
    yang_name = "accept"; yang_parent_name = "targeted-hello";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(src_filter.operation);
}

std::string MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/targeted-hello/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (src_filter.is_set || is_set(src_filter.operation)) leaf_name_data.push_back(src_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "src-filter")
    {
        src_filter = value;
    }
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddrs()
{
    yang_name = "int-trans-addrs"; yang_parent_name = "discovery";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "int-trans-addrs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::IntTransAddr()
    :
    af_name{YType::enumeration, "af-name"},
    int_name{YType::str, "int-name"},
    trans_int{YType::str, "trans-int"},
    trans_ip{YType::str, "trans-ip"}
{
    yang_name = "int-trans-addr"; yang_parent_name = "int-trans-addrs";
}

MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::~IntTransAddr()
{
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::has_data() const
{
    return af_name.is_set
	|| int_name.is_set
	|| trans_int.is_set
	|| trans_ip.is_set;
}

bool MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(int_name.operation)
	|| is_set(trans_int.operation)
	|| is_set(trans_ip.operation);
}

std::string MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "int-trans-addr" <<"[af-name='" <<af_name <<"']" <<"[int-name='" <<int_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/discovery/int-trans-addrs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (int_name.is_set || is_set(int_name.operation)) leaf_name_data.push_back(int_name.get_name_leafdata());
    if (trans_int.is_set || is_set(trans_int.operation)) leaf_name_data.push_back(trans_int.get_name_leafdata());
    if (trans_ip.is_set || is_set(trans_ip.operation)) leaf_name_data.push_back(trans_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "int-name")
    {
        int_name = value;
    }
    if(value_path == "trans-int")
    {
        trans_int = value;
    }
    if(value_path == "trans-ip")
    {
        trans_ip = value;
    }
}

MplsLdp::MplsLdpConfig::GracefulRestart::GracefulRestart()
    :
    forwarding_holding{YType::uint32, "forwarding-holding"},
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    max_recovery{YType::uint32, "max-recovery"},
    nbr_liveness{YType::uint32, "nbr-liveness"}
{
    yang_name = "graceful-restart"; yang_parent_name = "mpls-ldp-config";
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
    return forwarding_holding.is_set
	|| is_graceful_restartable.is_set
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
    return is_set(operation)
	|| is_set(forwarding_holding.operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(max_recovery.operation)
	|| is_set(nbr_liveness.operation);
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_holding.is_set || is_set(forwarding_holding.operation)) leaf_name_data.push_back(forwarding_holding.get_name_leafdata());
    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (max_recovery.is_set || is_set(max_recovery.operation)) leaf_name_data.push_back(max_recovery.get_name_leafdata());
    if (nbr_liveness.is_set || is_set(nbr_liveness.operation)) leaf_name_data.push_back(nbr_liveness.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding = value;
    }
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "max-recovery")
    {
        max_recovery = value;
    }
    if(value_path == "nbr-liveness")
    {
        nbr_liveness = value;
    }
}

MplsLdp::MplsLdpConfig::GracefulRestart::Helper::Helper()
    :
    helper_vrf{YType::str, "helper-vrf"},
    helper_filter{YType::str, "helper-filter"}
{
    yang_name = "helper"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(helper_vrf.operation)
	|| is_set(helper_filter.operation);
}

std::string MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper" <<"[helper-vrf='" <<helper_vrf <<"']" <<"[helper-filter='" <<helper_filter <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::GracefulRestart::Helper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_vrf.is_set || is_set(helper_vrf.operation)) leaf_name_data.push_back(helper_vrf.get_name_leafdata());
    if (helper_filter.is_set || is_set(helper_filter.operation)) leaf_name_data.push_back(helper_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::GracefulRestart::Helper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "helper-vrf")
    {
        helper_vrf = value;
    }
    if(value_path == "helper-filter")
    {
        helper_filter = value;
    }
}

MplsLdp::MplsLdpConfig::Logging::Logging()
    :
    adjacency{YType::boolean, "adjacency"},
    graceful_restart{YType::boolean, "graceful-restart"},
    neighbor{YType::boolean, "neighbor"},
    nsr{YType::boolean, "nsr"},
    session_protection{YType::boolean, "session-protection"}
    	,
    password(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password>())
{
    password->parent = this;

    yang_name = "logging"; yang_parent_name = "mpls-ldp-config";
}

MplsLdp::MplsLdpConfig::Logging::~Logging()
{
}

bool MplsLdp::MplsLdpConfig::Logging::has_data() const
{
    return adjacency.is_set
	|| graceful_restart.is_set
	|| neighbor.is_set
	|| nsr.is_set
	|| session_protection.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::MplsLdpConfig::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency.operation)
	|| is_set(graceful_restart.operation)
	|| is_set(neighbor.operation)
	|| is_set(nsr.operation)
	|| is_set(session_protection.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.operation)) leaf_name_data.push_back(adjacency.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.operation)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (session_protection.is_set || is_set(session_protection.operation)) leaf_name_data.push_back(session_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "session-protection")
    {
        session_protection = value;
    }
}

MplsLdp::MplsLdpConfig::Logging::Password::Password()
    :
    config_msg(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg>())
	,rollover_msg(std::make_shared<MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg>())
{
    config_msg->parent = this;

    rollover_msg->parent = this;

    yang_name = "password"; yang_parent_name = "logging";
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
    return is_set(operation)
	|| (config_msg !=  nullptr && config_msg->has_operation())
	|| (rollover_msg !=  nullptr && rollover_msg->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Logging::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Logging::Password::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::ConfigMsg()
    :
    enable{YType::boolean, "enable"},
    rate_limit{YType::uint32, "rate-limit"}
{
    yang_name = "config-msg"; yang_parent_name = "password";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rate_limit.operation);
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-msg";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::RolloverMsg()
    :
    enable{YType::boolean, "enable"},
    rate_limit{YType::uint32, "rate-limit"}
{
    yang_name = "rollover-msg"; yang_parent_name = "password";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rate_limit.operation);
}

std::string MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover-msg";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/logging/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

MplsLdp::MplsLdpConfig::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Interface()
    :
    vrf{YType::str, "vrf"},
    interface{YType::str, "interface"},
    disable_delay{YType::empty, "disable-delay"},
    disable_quick_start_int{YType::boolean, "disable-quick-start-int"},
    link_hello_hold{YType::uint32, "link-hello-hold"},
    link_hello_int{YType::uint32, "link-hello-int"},
    seconds{YType::uint32, "seconds"}
    	,
    afs(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs>())
{
    afs->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::has_data() const
{
    return vrf.is_set
	|| interface.is_set
	|| disable_delay.is_set
	|| disable_quick_start_int.is_set
	|| link_hello_hold.is_set
	|| link_hello_int.is_set
	|| seconds.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| is_set(interface.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_quick_start_int.operation)
	|| is_set(link_hello_hold.operation)
	|| is_set(link_hello_int.operation)
	|| is_set(seconds.operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[vrf='" <<vrf <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_quick_start_int.is_set || is_set(disable_quick_start_int.operation)) leaf_name_data.push_back(disable_quick_start_int.get_name_leafdata());
    if (link_hello_hold.is_set || is_set(link_hello_hold.operation)) leaf_name_data.push_back(link_hello_hold.get_name_leafdata());
    if (link_hello_int.is_set || is_set(link_hello_int.operation)) leaf_name_data.push_back(link_hello_int.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-quick-start-int")
    {
        disable_quick_start_int = value;
    }
    if(value_path == "link-hello-hold")
    {
        link_hello_hold = value;
    }
    if(value_path == "link-hello-int")
    {
        link_hello_int = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    autoconfig_disable{YType::boolean, "autoconfig-disable"},
    enable{YType::boolean, "enable"}
    	,
    bgp_redist(std::make_shared<MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist>())
{
    bgp_redist->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| autoconfig_disable.is_set
	|| enable.is_set
	|| (bgp_redist !=  nullptr && bgp_redist->has_data());
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(autoconfig_disable.operation)
	|| is_set(enable.operation)
	|| (bgp_redist !=  nullptr && bgp_redist->has_operation());
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (autoconfig_disable.is_set || is_set(autoconfig_disable.operation)) leaf_name_data.push_back(autoconfig_disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "autoconfig-disable")
    {
        autoconfig_disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::BgpRedist()
    :
    advertise_to{YType::str, "advertise-to"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    enable{YType::boolean, "enable"}
{
    yang_name = "bgp-redist"; yang_parent_name = "af";
}

MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::~BgpRedist()
{
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::has_data() const
{
    return advertise_to.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| enable.is_set;
}

bool MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_to.operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(enable.operation);
}

std::string MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-redist";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpRedist' in Cisco_IOS_XE_mpls_ldp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_to.is_set || is_set(advertise_to.operation)) leaf_name_data.push_back(advertise_to.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-to")
    {
        advertise_to = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::MplsLdpConfig::Routing::Routing()
{
    yang_name = "routing"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation);
}

std::string MplsLdp::MplsLdpConfig::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Routing::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::MplsLdpConfig::Routing::RoutingInst::RoutingInst()
    :
    routing_inst_name{YType::str, "routing-inst-name"},
    area_id{YType::uint32, "area-id"},
    autoconfig_enable{YType::boolean, "autoconfig-enable"},
    level_id{YType::enumeration, "level-id"},
    sync{YType::boolean, "sync"}
{
    yang_name = "routing-inst"; yang_parent_name = "routing";
}

MplsLdp::MplsLdpConfig::Routing::RoutingInst::~RoutingInst()
{
}

bool MplsLdp::MplsLdpConfig::Routing::RoutingInst::has_data() const
{
    return routing_inst_name.is_set
	|| area_id.is_set
	|| autoconfig_enable.is_set
	|| level_id.is_set
	|| sync.is_set;
}

bool MplsLdp::MplsLdpConfig::Routing::RoutingInst::has_operation() const
{
    return is_set(operation)
	|| is_set(routing_inst_name.operation)
	|| is_set(area_id.operation)
	|| is_set(autoconfig_enable.operation)
	|| is_set(level_id.operation)
	|| is_set(sync.operation);
}

std::string MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-inst" <<"[routing-inst-name='" <<routing_inst_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::Routing::RoutingInst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing_inst_name.is_set || is_set(routing_inst_name.operation)) leaf_name_data.push_back(routing_inst_name.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (autoconfig_enable.is_set || is_set(autoconfig_enable.operation)) leaf_name_data.push_back(autoconfig_enable.get_name_leafdata());
    if (level_id.is_set || is_set(level_id.operation)) leaf_name_data.push_back(level_id.get_name_leafdata());
    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::Routing::RoutingInst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "routing-inst-name")
    {
        routing_inst_name = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "autoconfig-enable")
    {
        autoconfig_enable = value;
    }
    if(value_path == "level-id")
    {
        level_id = value;
    }
    if(value_path == "sync")
    {
        sync = value;
    }
}

MplsLdp::MplsLdpConfig::DualStack::DualStack()
    :
    max_wait{YType::uint32, "max-wait"},
    prefer_ipv4_peers{YType::str, "prefer-ipv4-peers"}
{
    yang_name = "dual-stack"; yang_parent_name = "mpls-ldp-config";
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
    return is_set(operation)
	|| is_set(max_wait.operation)
	|| is_set(prefer_ipv4_peers.operation);
}

std::string MplsLdp::MplsLdpConfig::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";

    return path_buffer.str();

}

const EntityPath MplsLdp::MplsLdpConfig::DualStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:mpls-ldp/mpls-ldp-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.operation)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (prefer_ipv4_peers.is_set || is_set(prefer_ipv4_peers.operation)) leaf_name_data.push_back(prefer_ipv4_peers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsLdp::MplsLdpConfig::DualStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-wait")
    {
        max_wait = value;
    }
    if(value_path == "prefer-ipv4-peers")
    {
        prefer_ipv4_peers = value;
    }
}

ClearMsgCountersRpc::ClearMsgCountersRpc()
    :
    input(std::make_shared<ClearMsgCountersRpc::Input>())
	,output(std::make_shared<ClearMsgCountersRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "clear-msg-counters"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp";
}

ClearMsgCountersRpc::~ClearMsgCountersRpc()
{
}

bool ClearMsgCountersRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearMsgCountersRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearMsgCountersRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters";

    return path_buffer.str();

}

const EntityPath ClearMsgCountersRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMsgCountersRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearMsgCountersRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearMsgCountersRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCountersRpc::get_children() const
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

void ClearMsgCountersRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearMsgCountersRpc::clone_ptr() const
{
    return std::make_shared<ClearMsgCountersRpc>();
}

std::string ClearMsgCountersRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearMsgCountersRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearMsgCountersRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

ClearMsgCountersRpc::Input::Input()
    :
    all{YType::empty, "all"},
    nbr_ip{YType::str, "nbr-ip"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-msg-counters";
}

ClearMsgCountersRpc::Input::~Input()
{
}

bool ClearMsgCountersRpc::Input::has_data() const
{
    return all.is_set
	|| nbr_ip.is_set
	|| vrf_name.is_set;
}

bool ClearMsgCountersRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(nbr_ip.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearMsgCountersRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearMsgCountersRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.operation)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMsgCountersRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCountersRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMsgCountersRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearMsgCountersRpc::Output::Output()
    :
    status{YType::str, "status"}
{
    yang_name = "output"; yang_parent_name = "clear-msg-counters";
}

ClearMsgCountersRpc::Output::~Output()
{
}

bool ClearMsgCountersRpc::Output::has_data() const
{
    return status.is_set;
}

bool ClearMsgCountersRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string ClearMsgCountersRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ClearMsgCountersRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-msg-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMsgCountersRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMsgCountersRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMsgCountersRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

RestartNeighborRpc::RestartNeighborRpc()
    :
    input(std::make_shared<RestartNeighborRpc::Input>())
	,output(std::make_shared<RestartNeighborRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "restart-neighbor"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp";
}

RestartNeighborRpc::~RestartNeighborRpc()
{
}

bool RestartNeighborRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool RestartNeighborRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string RestartNeighborRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor";

    return path_buffer.str();

}

const EntityPath RestartNeighborRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RestartNeighborRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RestartNeighborRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<RestartNeighborRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighborRpc::get_children() const
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

void RestartNeighborRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RestartNeighborRpc::clone_ptr() const
{
    return std::make_shared<RestartNeighborRpc>();
}

std::string RestartNeighborRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RestartNeighborRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RestartNeighborRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

RestartNeighborRpc::Input::Input()
    :
    all{YType::empty, "all"},
    nbr_ip{YType::str, "nbr-ip"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "restart-neighbor";
}

RestartNeighborRpc::Input::~Input()
{
}

bool RestartNeighborRpc::Input::has_data() const
{
    return all.is_set
	|| nbr_ip.is_set
	|| vrf_name.is_set;
}

bool RestartNeighborRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(nbr_ip.operation)
	|| is_set(vrf_name.operation);
}

std::string RestartNeighborRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RestartNeighborRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (nbr_ip.is_set || is_set(nbr_ip.operation)) leaf_name_data.push_back(nbr_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RestartNeighborRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighborRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RestartNeighborRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "nbr-ip")
    {
        nbr_ip = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RestartNeighborRpc::Output::Output()
    :
    status{YType::str, "status"}
{
    yang_name = "output"; yang_parent_name = "restart-neighbor";
}

RestartNeighborRpc::Output::~Output()
{
}

bool RestartNeighborRpc::Output::has_data() const
{
    return status.is_set;
}

bool RestartNeighborRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string RestartNeighborRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath RestartNeighborRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:restart-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RestartNeighborRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RestartNeighborRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RestartNeighborRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

ClearForwardingRpc::ClearForwardingRpc()
    :
    input(std::make_shared<ClearForwardingRpc::Input>())
	,output(std::make_shared<ClearForwardingRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "clear-forwarding"; yang_parent_name = "Cisco-IOS-XE-mpls-ldp";
}

ClearForwardingRpc::~ClearForwardingRpc()
{
}

bool ClearForwardingRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearForwardingRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearForwardingRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding";

    return path_buffer.str();

}

const EntityPath ClearForwardingRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearForwardingRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearForwardingRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearForwardingRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwardingRpc::get_children() const
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

void ClearForwardingRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearForwardingRpc::clone_ptr() const
{
    return std::make_shared<ClearForwardingRpc>();
}

std::string ClearForwardingRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearForwardingRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearForwardingRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

ClearForwardingRpc::Input::Input()
    :
    all{YType::empty, "all"},
    prefix_ip{YType::str, "prefix-ip"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-forwarding";
}

ClearForwardingRpc::Input::~Input()
{
}

bool ClearForwardingRpc::Input::has_data() const
{
    return all.is_set
	|| prefix_ip.is_set
	|| vrf_name.is_set;
}

bool ClearForwardingRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(prefix_ip.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearForwardingRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearForwardingRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (prefix_ip.is_set || is_set(prefix_ip.operation)) leaf_name_data.push_back(prefix_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearForwardingRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwardingRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearForwardingRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "prefix-ip")
    {
        prefix_ip = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearForwardingRpc::Output::Output()
    :
    status{YType::str, "status"}
{
    yang_name = "output"; yang_parent_name = "clear-forwarding";
}

ClearForwardingRpc::Output::~Output()
{
}

bool ClearForwardingRpc::Output::has_data() const
{
    return status.is_set;
}

bool ClearForwardingRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string ClearForwardingRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ClearForwardingRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-ldp:clear-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearForwardingRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearForwardingRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearForwardingRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

DownNbrReasonDiscHelloIdentity::DownNbrReasonDiscHelloIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:down-nbr-reason-disc-hello")
{
}

DownNbrReasonDiscHelloIdentity::~DownNbrReasonDiscHelloIdentity()
{
}

NsrPeerSyncErrAppFailIdentity::NsrPeerSyncErrAppFailIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-app-fail")
{
}

NsrPeerSyncErrAppFailIdentity::~NsrPeerSyncErrAppFailIdentity()
{
}

RoutePathLblOwnerBgpIdentity::RoutePathLblOwnerBgpIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-bgp")
{
}

RoutePathLblOwnerBgpIdentity::~RoutePathLblOwnerBgpIdentity()
{
}

NsrSyncNackRsnErrAppNotFoundIdentity::NsrSyncNackRsnErrAppNotFoundIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-app-not-found")
{
}

NsrSyncNackRsnErrAppNotFoundIdentity::~NsrSyncNackRsnErrAppNotFoundIdentity()
{
}

LdpNsrPeerSyncStOperIdentity::LdpNsrPeerSyncStOperIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-oper")
{
}

LdpNsrPeerSyncStOperIdentity::~LdpNsrPeerSyncStOperIdentity()
{
}

IgpSyncDownReasonNaIdentity::IgpSyncDownReasonNaIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-na")
{
}

IgpSyncDownReasonNaIdentity::~IgpSyncDownReasonNaIdentity()
{
}

NsrSyncNackRsnNoPEndSockIdentity::NsrSyncNackRsnNoPEndSockIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-no-p-end-sock")
{
}

NsrSyncNackRsnNoPEndSockIdentity::~NsrSyncNackRsnNoPEndSockIdentity()
{
}

NsrPeerSyncErrLdpGblIdentity::NsrPeerSyncErrLdpGblIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-gbl")
{
}

NsrPeerSyncErrLdpGblIdentity::~NsrPeerSyncErrLdpGblIdentity()
{
}

DownNbrReasonNbrHoldIdentity::DownNbrReasonNbrHoldIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:down-nbr-reason-nbr-hold")
{
}

DownNbrReasonNbrHoldIdentity::~DownNbrReasonNbrHoldIdentity()
{
}

NsrPeerSyncErrTcpGblIdentity::NsrPeerSyncErrTcpGblIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-tcp-gbl")
{
}

NsrPeerSyncErrTcpGblIdentity::~NsrPeerSyncErrTcpGblIdentity()
{
}

IgpSyncDownReasonPeerUpdateNotReceivedIdentity::IgpSyncDownReasonPeerUpdateNotReceivedIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-peer-update-not-received")
{
}

IgpSyncDownReasonPeerUpdateNotReceivedIdentity::~IgpSyncDownReasonPeerUpdateNotReceivedIdentity()
{
}

IcpmTypeIccpIdentity::IcpmTypeIccpIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:icpm-type-iccp")
{
}

IcpmTypeIccpIdentity::~IcpmTypeIccpIdentity()
{
}

NsrStatusReadyIdentity::NsrStatusReadyIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-status-ready")
{
}

NsrStatusReadyIdentity::~NsrStatusReadyIdentity()
{
}

NsrSyncNackRsnErrAdjAddIdentity::NsrSyncNackRsnErrAdjAddIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-adj-add")
{
}

NsrSyncNackRsnErrAdjAddIdentity::~NsrSyncNackRsnErrAdjAddIdentity()
{
}

NsrSyncNackRsnErrUnexpPeerDownIdentity::NsrSyncNackRsnErrUnexpPeerDownIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-unexp-peer-down")
{
}

NsrSyncNackRsnErrUnexpPeerDownIdentity::~NsrSyncNackRsnErrUnexpPeerDownIdentity()
{
}

NsrSyncNackRsnNoneIdentity::NsrSyncNackRsnNoneIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-none")
{
}

NsrSyncNackRsnNoneIdentity::~NsrSyncNackRsnNoneIdentity()
{
}

NsrSyncNackRsnNoCtxIdentity::NsrSyncNackRsnNoCtxIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-no-ctx")
{
}

NsrSyncNackRsnNoCtxIdentity::~NsrSyncNackRsnNoCtxIdentity()
{
}

NsrSyncNackRsnMissingElemIdentity::NsrSyncNackRsnMissingElemIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-missing-elem")
{
}

NsrSyncNackRsnMissingElemIdentity::~NsrSyncNackRsnMissingElemIdentity()
{
}

NsrPeerSyncErrLdpPeerIdentity::NsrPeerSyncErrLdpPeerIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-peer")
{
}

NsrPeerSyncErrLdpPeerIdentity::~NsrPeerSyncErrLdpPeerIdentity()
{
}

NsrSyncNackRsnErrAppInvalidIdentity::NsrSyncNackRsnErrAppInvalidIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-app-invalid")
{
}

NsrSyncNackRsnErrAppInvalidIdentity::~NsrSyncNackRsnErrAppInvalidIdentity()
{
}

NsrStatusDisabledIdentity::NsrStatusDisabledIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-status-disabled")
{
}

NsrStatusDisabledIdentity::~NsrStatusDisabledIdentity()
{
}

RoutePathIpNoFlagIdentity::RoutePathIpNoFlagIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-ip-no-flag")
{
}

RoutePathIpNoFlagIdentity::~RoutePathIpNoFlagIdentity()
{
}

NsrPeerSyncErrTcpPeerIdentity::NsrPeerSyncErrTcpPeerIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-tcp-peer")
{
}

NsrPeerSyncErrTcpPeerIdentity::~NsrPeerSyncErrTcpPeerIdentity()
{
}

NsrPeerSyncErrNoneIdentity::NsrPeerSyncErrNoneIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-none")
{
}

NsrPeerSyncErrNoneIdentity::~NsrPeerSyncErrNoneIdentity()
{
}

LdpNsrPeerSyncStNoneIdentity::LdpNsrPeerSyncStNoneIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-none")
{
}

LdpNsrPeerSyncStNoneIdentity::~LdpNsrPeerSyncStNoneIdentity()
{
}

NsrSyncNackRsnErrPpCreateIdentity::NsrSyncNackRsnErrPpCreateIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-pp-create")
{
}

NsrSyncNackRsnErrPpCreateIdentity::~NsrSyncNackRsnErrPpCreateIdentity()
{
}

NsrSyncNackRsnErrRxUnexpOpenIdentity::NsrSyncNackRsnErrRxUnexpOpenIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-unexp-open")
{
}

NsrSyncNackRsnErrRxUnexpOpenIdentity::~NsrSyncNackRsnErrRxUnexpOpenIdentity()
{
}

LabelTypeUnknownIdentity::LabelTypeUnknownIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:label-type-unknown")
{
}

LabelTypeUnknownIdentity::~LabelTypeUnknownIdentity()
{
}

IgpSyncDownReasonNoPeerSessIdentity::IgpSyncDownReasonNoPeerSessIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-no-peer-sess")
{
}

IgpSyncDownReasonNoPeerSessIdentity::~IgpSyncDownReasonNoPeerSessIdentity()
{
}

LdpNsrPeerSyncStPrepIdentity::LdpNsrPeerSyncStPrepIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-prep")
{
}

LdpNsrPeerSyncStPrepIdentity::~LdpNsrPeerSyncStPrepIdentity()
{
}

RoutePathLblOwnerStaticIdentity::RoutePathLblOwnerStaticIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-static")
{
}

RoutePathLblOwnerStaticIdentity::~RoutePathLblOwnerStaticIdentity()
{
}

NsrPeerSyncErrLdpSyncNackIdentity::NsrPeerSyncErrLdpSyncNackIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-ldp-sync-nack")
{
}

NsrPeerSyncErrLdpSyncNackIdentity::~NsrPeerSyncErrLdpSyncNackIdentity()
{
}

NsrSyncNackRsnTblIdMismatchIdentity::NsrSyncNackRsnTblIdMismatchIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-tbl-id-mismatch")
{
}

NsrSyncNackRsnTblIdMismatchIdentity::~NsrSyncNackRsnTblIdMismatchIdentity()
{
}

NsrSyncNackRsnErrAddrBindIdentity::NsrSyncNackRsnErrAddrBindIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-addr-bind")
{
}

NsrSyncNackRsnErrAddrBindIdentity::~NsrSyncNackRsnErrAddrBindIdentity()
{
}

RoutePathIpBackupIdentity::RoutePathIpBackupIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-ip-backup")
{
}

RoutePathIpBackupIdentity::~RoutePathIpBackupIdentity()
{
}

LabelTypeMplsIdentity::LabelTypeMplsIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:label-type-mpls")
{
}

LabelTypeMplsIdentity::~LabelTypeMplsIdentity()
{
}

NsrSyncNackRsnErrDhcAddIdentity::NsrSyncNackRsnErrDhcAddIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-dhc-add")
{
}

NsrSyncNackRsnErrDhcAddIdentity::~NsrSyncNackRsnErrDhcAddIdentity()
{
}

NsrSyncNackRsnErrRxNotifIdentity::NsrSyncNackRsnErrRxNotifIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-notif")
{
}

NsrSyncNackRsnErrRxNotifIdentity::~NsrSyncNackRsnErrRxNotifIdentity()
{
}

RoutePathLblOwnerNoneIdentity::RoutePathLblOwnerNoneIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-none")
{
}

RoutePathLblOwnerNoneIdentity::~RoutePathLblOwnerNoneIdentity()
{
}

LdpNsrPeerSyncStWaitIdentity::LdpNsrPeerSyncStWaitIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-wait")
{
}

LdpNsrPeerSyncStWaitIdentity::~LdpNsrPeerSyncStWaitIdentity()
{
}

NsrSyncNackRsnErrTpCreateIdentity::NsrSyncNackRsnErrTpCreateIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-tp-create")
{
}

NsrSyncNackRsnErrTpCreateIdentity::~NsrSyncNackRsnErrTpCreateIdentity()
{
}

NsrStatusNotReadyIdentity::NsrStatusNotReadyIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-status-not-ready")
{
}

NsrStatusNotReadyIdentity::~NsrStatusNotReadyIdentity()
{
}

NsrSyncNackRsnPEndSockNotSyncedIdentity::NsrSyncNackRsnPEndSockNotSyncedIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-p-end-sock-not-synced")
{
}

NsrSyncNackRsnPEndSockNotSyncedIdentity::~NsrSyncNackRsnPEndSockNotSyncedIdentity()
{
}

IgpSyncDownReasonInternalIdentity::IgpSyncDownReasonInternalIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-internal")
{
}

IgpSyncDownReasonInternalIdentity::~IgpSyncDownReasonInternalIdentity()
{
}

NsrSyncNackRsnPpExistsIdentity::NsrSyncNackRsnPpExistsIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-pp-exists")
{
}

NsrSyncNackRsnPpExistsIdentity::~NsrSyncNackRsnPpExistsIdentity()
{
}

LdpNsrPeerSyncStReadyIdentity::LdpNsrPeerSyncStReadyIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-ready")
{
}

LdpNsrPeerSyncStReadyIdentity::~LdpNsrPeerSyncStReadyIdentity()
{
}

IgpSyncDownReasonNoHelloAdjIdentity::IgpSyncDownReasonNoHelloAdjIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-no-hello-adj")
{
}

IgpSyncDownReasonNoHelloAdjIdentity::~IgpSyncDownReasonNoHelloAdjIdentity()
{
}

LabelTypeUnLabeledIdentity::LabelTypeUnLabeledIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:label-type-un-labeled")
{
}

LabelTypeUnLabeledIdentity::~LabelTypeUnLabeledIdentity()
{
}

IccpTypeMlacpIdentity::IccpTypeMlacpIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:iccp-type-mlacp")
{
}

IccpTypeMlacpIdentity::~IccpTypeMlacpIdentity()
{
}

NsrPeerSyncErrSyncPrepIdentity::NsrPeerSyncErrSyncPrepIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-peer-sync-err-sync-prep")
{
}

NsrPeerSyncErrSyncPrepIdentity::~NsrPeerSyncErrSyncPrepIdentity()
{
}

LdpNsrPeerSyncStAppWaitIdentity::LdpNsrPeerSyncStAppWaitIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:ldp-nsr-peer-sync-st-app-wait")
{
}

LdpNsrPeerSyncStAppWaitIdentity::~LdpNsrPeerSyncStAppWaitIdentity()
{
}

RoutePathIpBgpBackupIdentity::RoutePathIpBgpBackupIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-ip-bgp-backup")
{
}

RoutePathIpBgpBackupIdentity::~RoutePathIpBgpBackupIdentity()
{
}

DownNbrReasonNaIdentity::DownNbrReasonNaIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:down-nbr-reason-na")
{
}

DownNbrReasonNaIdentity::~DownNbrReasonNaIdentity()
{
}

NsrSyncNackRsnErrRxBadPieIdentity::NsrSyncNackRsnErrRxBadPieIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-err-rx-bad-pie")
{
}

NsrSyncNackRsnErrRxBadPieIdentity::~NsrSyncNackRsnErrRxBadPieIdentity()
{
}

IgpSyncDownReasonPeerUpdateNotDoneIdentity::IgpSyncDownReasonPeerUpdateNotDoneIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:igp-sync-down-reason-peer-update-not-done")
{
}

IgpSyncDownReasonPeerUpdateNotDoneIdentity::~IgpSyncDownReasonPeerUpdateNotDoneIdentity()
{
}

NsrSyncNackRsnEnomemIdentity::NsrSyncNackRsnEnomemIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:nsr-sync-nack-rsn-enomem")
{
}

NsrSyncNackRsnEnomemIdentity::~NsrSyncNackRsnEnomemIdentity()
{
}

RoutePathIpProtectedIdentity::RoutePathIpProtectedIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-ip-protected")
{
}

RoutePathIpProtectedIdentity::~RoutePathIpProtectedIdentity()
{
}

RoutePathIpBackupRemoteIdentity::RoutePathIpBackupRemoteIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-ip-backup-remote")
{
}

RoutePathIpBackupRemoteIdentity::~RoutePathIpBackupRemoteIdentity()
{
}

RoutePathLblOwnerLdpIdentity::RoutePathLblOwnerLdpIdentity()
     : Identity("Cisco-IOS-XE-mpls-ldp:route-path-lbl-owner-ldp")
{
}

RoutePathLblOwnerLdpIdentity::~RoutePathLblOwnerLdpIdentity()
{
}

const Enum::YLeaf SessionStateEnum::nonexistent {1, "nonexistent"};
const Enum::YLeaf SessionStateEnum::initialized {2, "initialized"};
const Enum::YLeaf SessionStateEnum::openrec {3, "openrec"};
const Enum::YLeaf SessionStateEnum::opensent {4, "opensent"};
const Enum::YLeaf SessionStateEnum::operational {5, "operational"};

const Enum::YLeaf LoopDetectionTypeEnum::none {1, "none"};
const Enum::YLeaf LoopDetectionTypeEnum::other {2, "other"};
const Enum::YLeaf LoopDetectionTypeEnum::hop_count {3, "hop-count"};
const Enum::YLeaf LoopDetectionTypeEnum::path_vector {4, "path-vector"};
const Enum::YLeaf LoopDetectionTypeEnum::hop_count_and_path_vector {5, "hop-count-and-path-vector"};

const Enum::YLeaf AdvLabelTypeEnum::use_lable {1, "use-lable"};
const Enum::YLeaf AdvLabelTypeEnum::use_explicit {2, "use-explicit"};
const Enum::YLeaf AdvLabelTypeEnum::use_implicit {3, "use-implicit"};
const Enum::YLeaf AdvLabelTypeEnum::none {4, "none"};

const Enum::YLeaf AfIdEnum::ldp_af_id_none {0, "ldp-af-id-none"};
const Enum::YLeaf AfIdEnum::ldp_af_id_ipv4 {1, "ldp-af-id-ipv4"};
const Enum::YLeaf AfIdEnum::ldp_af_id_ipv6 {2, "ldp-af-id-ipv6"};

const Enum::YLeaf IgpSyncStateEnum::isync_ready {0, "isync-ready"};
const Enum::YLeaf IgpSyncStateEnum::isync_not_ready {1, "isync-not-ready"};
const Enum::YLeaf IgpSyncStateEnum::isync_deferred {2, "isync-deferred"};

const Enum::YLeaf AfEnum::ldp_af_none {0, "ldp-af-none"};
const Enum::YLeaf AfEnum::ldp_af_ipv4 {1, "ldp-af-ipv4"};
const Enum::YLeaf AfEnum::ldp_af_ipv6 {2, "ldp-af-ipv6"};
const Enum::YLeaf AfEnum::ldp_af_ipv4_ipv6 {3, "ldp-af-ipv4-ipv6"};

const Enum::YLeaf NbrBgpAdvtStateEnum::not_applicable {0, "not-applicable"};
const Enum::YLeaf NbrBgpAdvtStateEnum::permit {1, "permit"};
const Enum::YLeaf NbrBgpAdvtStateEnum::deny {2, "deny"};

const Enum::YLeaf AdjStateEnum::nonex {0, "nonex"};
const Enum::YLeaf AdjStateEnum::unsol_op_pdg {1, "unsol-op-pdg"};
const Enum::YLeaf AdjStateEnum::deferred {2, "deferred"};
const Enum::YLeaf AdjStateEnum::estab {3, "estab"};
const Enum::YLeaf AdjStateEnum::lib_exp_wait {4, "lib-exp-wait"};
const Enum::YLeaf AdjStateEnum::destroyed {5, "destroyed"};

const Enum::YLeaf LocalLabelStateEnum::local_label_state_none {1, "local-label-state-none"};
const Enum::YLeaf LocalLabelStateEnum::local_label_state_assigned {2, "local-label-state-assigned"};
const Enum::YLeaf LocalLabelStateEnum::local_label_state_withdrawn {3, "local-label-state-withdrawn"};

const Enum::YLeaf DhcStateEnum::none {0, "none"};
const Enum::YLeaf DhcStateEnum::dhc_active {1, "dhc-active"};
const Enum::YLeaf DhcStateEnum::dhc_passive {2, "dhc-passive"};
const Enum::YLeaf DhcStateEnum::dhc_active_passive {3, "dhc-active-passive"};

const Enum::YLeaf IccpStateEnum::nonexistent {1, "nonexistent"};
const Enum::YLeaf IccpStateEnum::initialized {2, "initialized"};
const Enum::YLeaf IccpStateEnum::capsent {3, "capsent"};
const Enum::YLeaf IccpStateEnum::caprec {4, "caprec"};
const Enum::YLeaf IccpStateEnum::connecting {5, "connecting"};
const Enum::YLeaf IccpStateEnum::operational {6, "operational"};

const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRoleEnum::unknown {1, "unknown"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRoleEnum::active {2, "active"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRoleEnum::passive {3, "passive"};

const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum::nonexistent {1, "nonexistent"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum::initialized {2, "initialized"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum::openrec {3, "openrec"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum::opensent {4, "opensent"};
const Enum::YLeaf MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum::operational {5, "operational"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatusEnum::enable {1, "enable"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatusEnum::disable {2, "disable"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::ProtocolEnum::ldp {1, "ldp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::ProtocolEnum::tdp {2, "tdp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::GlobalCfg::ProtocolEnum::both {3, "both"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatusEnum::enable {1, "enable"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatusEnum::disable {2, "disable"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocolEnum::ldp {1, "ldp"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocolEnum::tdp {2, "tdp"};

const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelIdEnum::level_1 {1, "level-1"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelIdEnum::level_2 {2, "level-2"};
const Enum::YLeaf MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelIdEnum::level_1_2 {3, "level-1-2"};


}
}

