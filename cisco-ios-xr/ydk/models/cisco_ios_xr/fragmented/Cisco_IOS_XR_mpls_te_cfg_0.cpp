
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::MplsTe()
    :
    enable_traffic_engineering{YType::empty, "enable-traffic-engineering"}
    	,
    diff_serv_traffic_engineering(std::make_shared<MplsTe::DiffServTrafficEngineering>())
	,global_attributes(std::make_shared<MplsTe::GlobalAttributes>())
	,gmpls_nni(std::make_shared<MplsTe::GmplsNni>())
	,gmpls_uni(std::make_shared<MplsTe::GmplsUni>())
	,interfaces(std::make_shared<MplsTe::Interfaces>())
	,lcac(std::make_shared<MplsTe::Lcac>())
	,named_tunnels(std::make_shared<MplsTe::NamedTunnels>())
	,transport_profile(std::make_shared<MplsTe::TransportProfile>())
{
    diff_serv_traffic_engineering->parent = this;
    global_attributes->parent = this;
    gmpls_nni->parent = this;
    gmpls_uni->parent = this;
    interfaces->parent = this;
    lcac->parent = this;
    named_tunnels->parent = this;
    transport_profile->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "Cisco-IOS-XR-mpls-te-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

MplsTe::~MplsTe()
{
}

bool MplsTe::has_data() const
{
    return enable_traffic_engineering.is_set
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_data())
	|| (global_attributes !=  nullptr && global_attributes->has_data())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_data())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (lcac !=  nullptr && lcac->has_data())
	|| (named_tunnels !=  nullptr && named_tunnels->has_data())
	|| (transport_profile !=  nullptr && transport_profile->has_data());
}

bool MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_traffic_engineering.yfilter)
	|| (diff_serv_traffic_engineering !=  nullptr && diff_serv_traffic_engineering->has_operation())
	|| (global_attributes !=  nullptr && global_attributes->has_operation())
	|| (gmpls_nni !=  nullptr && gmpls_nni->has_operation())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation())
	|| (named_tunnels !=  nullptr && named_tunnels->has_operation())
	|| (transport_profile !=  nullptr && transport_profile->has_operation());
}

std::string MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_traffic_engineering.is_set || is_set(enable_traffic_engineering.yfilter)) leaf_name_data.push_back(enable_traffic_engineering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diff-serv-traffic-engineering")
    {
        if(diff_serv_traffic_engineering == nullptr)
        {
            diff_serv_traffic_engineering = std::make_shared<MplsTe::DiffServTrafficEngineering>();
        }
        return diff_serv_traffic_engineering;
    }

    if(child_yang_name == "global-attributes")
    {
        if(global_attributes == nullptr)
        {
            global_attributes = std::make_shared<MplsTe::GlobalAttributes>();
        }
        return global_attributes;
    }

    if(child_yang_name == "gmpls-nni")
    {
        if(gmpls_nni == nullptr)
        {
            gmpls_nni = std::make_shared<MplsTe::GmplsNni>();
        }
        return gmpls_nni;
    }

    if(child_yang_name == "gmpls-uni")
    {
        if(gmpls_uni == nullptr)
        {
            gmpls_uni = std::make_shared<MplsTe::GmplsUni>();
        }
        return gmpls_uni;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTe::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "lcac")
    {
        if(lcac == nullptr)
        {
            lcac = std::make_shared<MplsTe::Lcac>();
        }
        return lcac;
    }

    if(child_yang_name == "named-tunnels")
    {
        if(named_tunnels == nullptr)
        {
            named_tunnels = std::make_shared<MplsTe::NamedTunnels>();
        }
        return named_tunnels;
    }

    if(child_yang_name == "transport-profile")
    {
        if(transport_profile == nullptr)
        {
            transport_profile = std::make_shared<MplsTe::TransportProfile>();
        }
        return transport_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(diff_serv_traffic_engineering != nullptr)
    {
        children["diff-serv-traffic-engineering"] = diff_serv_traffic_engineering;
    }

    if(global_attributes != nullptr)
    {
        children["global-attributes"] = global_attributes;
    }

    if(gmpls_nni != nullptr)
    {
        children["gmpls-nni"] = gmpls_nni;
    }

    if(gmpls_uni != nullptr)
    {
        children["gmpls-uni"] = gmpls_uni;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(lcac != nullptr)
    {
        children["lcac"] = lcac;
    }

    if(named_tunnels != nullptr)
    {
        children["named-tunnels"] = named_tunnels;
    }

    if(transport_profile != nullptr)
    {
        children["transport-profile"] = transport_profile;
    }

    return children;
}

void MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-traffic-engineering")
    {
        enable_traffic_engineering = value;
        enable_traffic_engineering.value_namespace = name_space;
        enable_traffic_engineering.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-traffic-engineering")
    {
        enable_traffic_engineering.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> MplsTe::clone_ptr() const
{
    return std::make_shared<MplsTe>();
}

std::string MplsTe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTe::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diff-serv-traffic-engineering" || name == "global-attributes" || name == "gmpls-nni" || name == "gmpls-uni" || name == "interfaces" || name == "lcac" || name == "named-tunnels" || name == "transport-profile" || name == "enable-traffic-engineering")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::DiffServTrafficEngineering()
    :
    bandwidth_constraint_model{YType::enumeration, "bandwidth-constraint-model"},
    mode_ietf{YType::enumeration, "mode-ietf"}
    	,
    classes(std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>())
{
    classes->parent = this;

    yang_name = "diff-serv-traffic-engineering"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::DiffServTrafficEngineering::~DiffServTrafficEngineering()
{
}

bool MplsTe::DiffServTrafficEngineering::has_data() const
{
    return bandwidth_constraint_model.is_set
	|| mode_ietf.is_set
	|| (classes !=  nullptr && classes->has_data());
}

bool MplsTe::DiffServTrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_constraint_model.yfilter)
	|| ydk::is_set(mode_ietf.yfilter)
	|| (classes !=  nullptr && classes->has_operation());
}

std::string MplsTe::DiffServTrafficEngineering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_constraint_model.is_set || is_set(bandwidth_constraint_model.yfilter)) leaf_name_data.push_back(bandwidth_constraint_model.get_name_leafdata());
    if (mode_ietf.is_set || is_set(mode_ietf.yfilter)) leaf_name_data.push_back(mode_ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classes != nullptr)
    {
        children["classes"] = classes;
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-constraint-model")
    {
        bandwidth_constraint_model = value;
        bandwidth_constraint_model.value_namespace = name_space;
        bandwidth_constraint_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-ietf")
    {
        mode_ietf = value;
        mode_ietf.value_namespace = name_space;
        mode_ietf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::DiffServTrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-constraint-model")
    {
        bandwidth_constraint_model.yfilter = yfilter;
    }
    if(value_path == "mode-ietf")
    {
        mode_ietf.yfilter = yfilter;
    }
}

bool MplsTe::DiffServTrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classes" || name == "bandwidth-constraint-model" || name == "mode-ietf")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "diff-serv-traffic-engineering"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::DiffServTrafficEngineering::Classes::~Classes()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::DiffServTrafficEngineering::Classes::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::DiffServTrafficEngineering::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

MplsTe::DiffServTrafficEngineering::Classes::Class_::Class_()
    :
    class_number{YType::uint32, "class-number"},
    class_priority{YType::uint32, "class-priority"},
    class_type{YType::uint32, "class-type"},
    unused{YType::boolean, "unused"}
{

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::DiffServTrafficEngineering::Classes::Class_::~Class_()
{
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class_::has_data() const
{
    return class_number.is_set
	|| class_priority.is_set
	|| class_type.is_set
	|| unused.is_set;
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_priority.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::DiffServTrafficEngineering::Classes::Class_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/diff-serv-traffic-engineering/classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::DiffServTrafficEngineering::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-number='" <<class_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::DiffServTrafficEngineering::Classes::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_priority.is_set || is_set(class_priority.yfilter)) leaf_name_data.push_back(class_priority.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::DiffServTrafficEngineering::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::DiffServTrafficEngineering::Classes::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::DiffServTrafficEngineering::Classes::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-priority")
    {
        class_priority = value;
        class_priority.value_namespace = name_space;
        class_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::DiffServTrafficEngineering::Classes::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-priority")
    {
        class_priority.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::DiffServTrafficEngineering::Classes::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-priority" || name == "class-type" || name == "unused")
        return true;
    return false;
}

MplsTe::GlobalAttributes::GlobalAttributes()
    :
    advertise_explicit_nulls{YType::empty, "advertise-explicit-nulls"},
    auto_bandwidth_collect_frequency{YType::uint32, "auto-bandwidth-collect-frequency"},
    disable_reoptimize_affinity_failure{YType::empty, "disable-reoptimize-affinity-failure"},
    enable_unequal_load_balancing{YType::empty, "enable-unequal-load-balancing"},
    fault_oam{YType::empty, "fault-oam"},
    graceful_preemption_on_bandwidth_reduction{YType::empty, "graceful-preemption-on-bandwidth-reduction"},
    link_holddown_timer{YType::uint32, "link-holddown-timer"},
    log_all{YType::empty, "log-all"},
    log_frr_protection{YType::enumeration, "log-frr-protection"},
    log_head{YType::empty, "log-head"},
    log_issu_status{YType::empty, "log-issu-status"},
    log_mid{YType::empty, "log-mid"},
    log_nsr_status{YType::empty, "log-nsr-status"},
    log_preemption{YType::empty, "log-preemption"},
    log_tail{YType::empty, "log-tail"},
    loose_path_retry_period{YType::uint32, "loose-path-retry-period"},
    maximum_tunnels{YType::uint32, "maximum-tunnels"},
    path_selection_ignore_overload{YType::empty, "path-selection-ignore-overload"},
    reopt_delay_path_protect_switchover_timer{YType::uint32, "reopt-delay-path-protect-switchover-timer"},
    reoptimize_delay_after_affinity_failure_timer{YType::uint32, "reoptimize-delay-after-affinity-failure-timer"},
    reoptimize_delay_after_frr_timer{YType::uint32, "reoptimize-delay-after-frr-timer"},
    reoptimize_delay_cleanup_timer{YType::uint32, "reoptimize-delay-cleanup-timer"},
    reoptimize_delay_install_timer{YType::uint32, "reoptimize-delay-install-timer"},
    reoptimize_link_up{YType::empty, "reoptimize-link-up"},
    reoptimize_load_balancing{YType::empty, "reoptimize-load-balancing"},
    reoptimize_timer_frequency{YType::uint32, "reoptimize-timer-frequency"}
    	,
    affinity_mappings(std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>())
	,attribute_set(std::make_shared<MplsTe::GlobalAttributes::AttributeSet>())
	,auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>())
	,bandwidth_accounting(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting>())
	,bfd_over_lsp(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>())
	,fast_reroute(std::make_shared<MplsTe::GlobalAttributes::FastReroute>())
	,hardware_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>())
	,lsp_out_of_resource(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>())
	,mib(std::make_shared<MplsTe::GlobalAttributes::Mib>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::PathSelection>())
	,pce_attributes(std::make_shared<MplsTe::GlobalAttributes::PceAttributes>())
	,queues(std::make_shared<MplsTe::GlobalAttributes::Queues>())
	,secondary_router_ids(std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>())
	,soft_preemption(std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>())
	,srlg(std::make_shared<MplsTe::GlobalAttributes::Srlg>())
{
    affinity_mappings->parent = this;
    attribute_set->parent = this;
    auto_tunnel->parent = this;
    bandwidth_accounting->parent = this;
    bfd_over_lsp->parent = this;
    fast_reroute->parent = this;
    hardware_out_of_resource->parent = this;
    lsp_out_of_resource->parent = this;
    mib->parent = this;
    path_selection->parent = this;
    pce_attributes->parent = this;
    queues->parent = this;
    secondary_router_ids->parent = this;
    soft_preemption->parent = this;
    srlg->parent = this;

    yang_name = "global-attributes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::GlobalAttributes::has_data() const
{
    return advertise_explicit_nulls.is_set
	|| auto_bandwidth_collect_frequency.is_set
	|| disable_reoptimize_affinity_failure.is_set
	|| enable_unequal_load_balancing.is_set
	|| fault_oam.is_set
	|| graceful_preemption_on_bandwidth_reduction.is_set
	|| link_holddown_timer.is_set
	|| log_all.is_set
	|| log_frr_protection.is_set
	|| log_head.is_set
	|| log_issu_status.is_set
	|| log_mid.is_set
	|| log_nsr_status.is_set
	|| log_preemption.is_set
	|| log_tail.is_set
	|| loose_path_retry_period.is_set
	|| maximum_tunnels.is_set
	|| path_selection_ignore_overload.is_set
	|| reopt_delay_path_protect_switchover_timer.is_set
	|| reoptimize_delay_after_affinity_failure_timer.is_set
	|| reoptimize_delay_after_frr_timer.is_set
	|| reoptimize_delay_cleanup_timer.is_set
	|| reoptimize_delay_install_timer.is_set
	|| reoptimize_link_up.is_set
	|| reoptimize_load_balancing.is_set
	|| reoptimize_timer_frequency.is_set
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_data())
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (bandwidth_accounting !=  nullptr && bandwidth_accounting->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_data())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce_attributes !=  nullptr && pce_attributes->has_data())
	|| (queues !=  nullptr && queues->has_data())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (srlg !=  nullptr && srlg->has_data());
}

bool MplsTe::GlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_explicit_nulls.yfilter)
	|| ydk::is_set(auto_bandwidth_collect_frequency.yfilter)
	|| ydk::is_set(disable_reoptimize_affinity_failure.yfilter)
	|| ydk::is_set(enable_unequal_load_balancing.yfilter)
	|| ydk::is_set(fault_oam.yfilter)
	|| ydk::is_set(graceful_preemption_on_bandwidth_reduction.yfilter)
	|| ydk::is_set(link_holddown_timer.yfilter)
	|| ydk::is_set(log_all.yfilter)
	|| ydk::is_set(log_frr_protection.yfilter)
	|| ydk::is_set(log_head.yfilter)
	|| ydk::is_set(log_issu_status.yfilter)
	|| ydk::is_set(log_mid.yfilter)
	|| ydk::is_set(log_nsr_status.yfilter)
	|| ydk::is_set(log_preemption.yfilter)
	|| ydk::is_set(log_tail.yfilter)
	|| ydk::is_set(loose_path_retry_period.yfilter)
	|| ydk::is_set(maximum_tunnels.yfilter)
	|| ydk::is_set(path_selection_ignore_overload.yfilter)
	|| ydk::is_set(reopt_delay_path_protect_switchover_timer.yfilter)
	|| ydk::is_set(reoptimize_delay_after_affinity_failure_timer.yfilter)
	|| ydk::is_set(reoptimize_delay_after_frr_timer.yfilter)
	|| ydk::is_set(reoptimize_delay_cleanup_timer.yfilter)
	|| ydk::is_set(reoptimize_delay_install_timer.yfilter)
	|| ydk::is_set(reoptimize_link_up.yfilter)
	|| ydk::is_set(reoptimize_load_balancing.yfilter)
	|| ydk::is_set(reoptimize_timer_frequency.yfilter)
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_operation())
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (bandwidth_accounting !=  nullptr && bandwidth_accounting->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (hardware_out_of_resource !=  nullptr && hardware_out_of_resource->has_operation())
	|| (lsp_out_of_resource !=  nullptr && lsp_out_of_resource->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce_attributes !=  nullptr && pce_attributes->has_operation())
	|| (queues !=  nullptr && queues->has_operation())
	|| (secondary_router_ids !=  nullptr && secondary_router_ids->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation());
}

std::string MplsTe::GlobalAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_explicit_nulls.is_set || is_set(advertise_explicit_nulls.yfilter)) leaf_name_data.push_back(advertise_explicit_nulls.get_name_leafdata());
    if (auto_bandwidth_collect_frequency.is_set || is_set(auto_bandwidth_collect_frequency.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect_frequency.get_name_leafdata());
    if (disable_reoptimize_affinity_failure.is_set || is_set(disable_reoptimize_affinity_failure.yfilter)) leaf_name_data.push_back(disable_reoptimize_affinity_failure.get_name_leafdata());
    if (enable_unequal_load_balancing.is_set || is_set(enable_unequal_load_balancing.yfilter)) leaf_name_data.push_back(enable_unequal_load_balancing.get_name_leafdata());
    if (fault_oam.is_set || is_set(fault_oam.yfilter)) leaf_name_data.push_back(fault_oam.get_name_leafdata());
    if (graceful_preemption_on_bandwidth_reduction.is_set || is_set(graceful_preemption_on_bandwidth_reduction.yfilter)) leaf_name_data.push_back(graceful_preemption_on_bandwidth_reduction.get_name_leafdata());
    if (link_holddown_timer.is_set || is_set(link_holddown_timer.yfilter)) leaf_name_data.push_back(link_holddown_timer.get_name_leafdata());
    if (log_all.is_set || is_set(log_all.yfilter)) leaf_name_data.push_back(log_all.get_name_leafdata());
    if (log_frr_protection.is_set || is_set(log_frr_protection.yfilter)) leaf_name_data.push_back(log_frr_protection.get_name_leafdata());
    if (log_head.is_set || is_set(log_head.yfilter)) leaf_name_data.push_back(log_head.get_name_leafdata());
    if (log_issu_status.is_set || is_set(log_issu_status.yfilter)) leaf_name_data.push_back(log_issu_status.get_name_leafdata());
    if (log_mid.is_set || is_set(log_mid.yfilter)) leaf_name_data.push_back(log_mid.get_name_leafdata());
    if (log_nsr_status.is_set || is_set(log_nsr_status.yfilter)) leaf_name_data.push_back(log_nsr_status.get_name_leafdata());
    if (log_preemption.is_set || is_set(log_preemption.yfilter)) leaf_name_data.push_back(log_preemption.get_name_leafdata());
    if (log_tail.is_set || is_set(log_tail.yfilter)) leaf_name_data.push_back(log_tail.get_name_leafdata());
    if (loose_path_retry_period.is_set || is_set(loose_path_retry_period.yfilter)) leaf_name_data.push_back(loose_path_retry_period.get_name_leafdata());
    if (maximum_tunnels.is_set || is_set(maximum_tunnels.yfilter)) leaf_name_data.push_back(maximum_tunnels.get_name_leafdata());
    if (path_selection_ignore_overload.is_set || is_set(path_selection_ignore_overload.yfilter)) leaf_name_data.push_back(path_selection_ignore_overload.get_name_leafdata());
    if (reopt_delay_path_protect_switchover_timer.is_set || is_set(reopt_delay_path_protect_switchover_timer.yfilter)) leaf_name_data.push_back(reopt_delay_path_protect_switchover_timer.get_name_leafdata());
    if (reoptimize_delay_after_affinity_failure_timer.is_set || is_set(reoptimize_delay_after_affinity_failure_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_after_affinity_failure_timer.get_name_leafdata());
    if (reoptimize_delay_after_frr_timer.is_set || is_set(reoptimize_delay_after_frr_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_after_frr_timer.get_name_leafdata());
    if (reoptimize_delay_cleanup_timer.is_set || is_set(reoptimize_delay_cleanup_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_cleanup_timer.get_name_leafdata());
    if (reoptimize_delay_install_timer.is_set || is_set(reoptimize_delay_install_timer.yfilter)) leaf_name_data.push_back(reoptimize_delay_install_timer.get_name_leafdata());
    if (reoptimize_link_up.is_set || is_set(reoptimize_link_up.yfilter)) leaf_name_data.push_back(reoptimize_link_up.get_name_leafdata());
    if (reoptimize_load_balancing.is_set || is_set(reoptimize_load_balancing.yfilter)) leaf_name_data.push_back(reoptimize_load_balancing.get_name_leafdata());
    if (reoptimize_timer_frequency.is_set || is_set(reoptimize_timer_frequency.yfilter)) leaf_name_data.push_back(reoptimize_timer_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mappings")
    {
        if(affinity_mappings == nullptr)
        {
            affinity_mappings = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings>();
        }
        return affinity_mappings;
    }

    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::GlobalAttributes::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "bandwidth-accounting")
    {
        if(bandwidth_accounting == nullptr)
        {
            bandwidth_accounting = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting>();
        }
        return bandwidth_accounting;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "hardware-out-of-resource")
    {
        if(hardware_out_of_resource == nullptr)
        {
            hardware_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource>();
        }
        return hardware_out_of_resource;
    }

    if(child_yang_name == "lsp-out-of-resource")
    {
        if(lsp_out_of_resource == nullptr)
        {
            lsp_out_of_resource = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource>();
        }
        return lsp_out_of_resource;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<MplsTe::GlobalAttributes::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce-attributes")
    {
        if(pce_attributes == nullptr)
        {
            pce_attributes = std::make_shared<MplsTe::GlobalAttributes::PceAttributes>();
        }
        return pce_attributes;
    }

    if(child_yang_name == "queues")
    {
        if(queues == nullptr)
        {
            queues = std::make_shared<MplsTe::GlobalAttributes::Queues>();
        }
        return queues;
    }

    if(child_yang_name == "secondary-router-ids")
    {
        if(secondary_router_ids == nullptr)
        {
            secondary_router_ids = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds>();
        }
        return secondary_router_ids;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::GlobalAttributes::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<MplsTe::GlobalAttributes::Srlg>();
        }
        return srlg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mappings != nullptr)
    {
        children["affinity-mappings"] = affinity_mappings;
    }

    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(bandwidth_accounting != nullptr)
    {
        children["bandwidth-accounting"] = bandwidth_accounting;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(hardware_out_of_resource != nullptr)
    {
        children["hardware-out-of-resource"] = hardware_out_of_resource;
    }

    if(lsp_out_of_resource != nullptr)
    {
        children["lsp-out-of-resource"] = lsp_out_of_resource;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pce_attributes != nullptr)
    {
        children["pce-attributes"] = pce_attributes;
    }

    if(queues != nullptr)
    {
        children["queues"] = queues;
    }

    if(secondary_router_ids != nullptr)
    {
        children["secondary-router-ids"] = secondary_router_ids;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    return children;
}

void MplsTe::GlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-explicit-nulls")
    {
        advertise_explicit_nulls = value;
        advertise_explicit_nulls.value_namespace = name_space;
        advertise_explicit_nulls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect-frequency")
    {
        auto_bandwidth_collect_frequency = value;
        auto_bandwidth_collect_frequency.value_namespace = name_space;
        auto_bandwidth_collect_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-reoptimize-affinity-failure")
    {
        disable_reoptimize_affinity_failure = value;
        disable_reoptimize_affinity_failure.value_namespace = name_space;
        disable_reoptimize_affinity_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-unequal-load-balancing")
    {
        enable_unequal_load_balancing = value;
        enable_unequal_load_balancing.value_namespace = name_space;
        enable_unequal_load_balancing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-oam")
    {
        fault_oam = value;
        fault_oam.value_namespace = name_space;
        fault_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-preemption-on-bandwidth-reduction")
    {
        graceful_preemption_on_bandwidth_reduction = value;
        graceful_preemption_on_bandwidth_reduction.value_namespace = name_space;
        graceful_preemption_on_bandwidth_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-holddown-timer")
    {
        link_holddown_timer = value;
        link_holddown_timer.value_namespace = name_space;
        link_holddown_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-all")
    {
        log_all = value;
        log_all.value_namespace = name_space;
        log_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-frr-protection")
    {
        log_frr_protection = value;
        log_frr_protection.value_namespace = name_space;
        log_frr_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-head")
    {
        log_head = value;
        log_head.value_namespace = name_space;
        log_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-issu-status")
    {
        log_issu_status = value;
        log_issu_status.value_namespace = name_space;
        log_issu_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-mid")
    {
        log_mid = value;
        log_mid.value_namespace = name_space;
        log_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status = value;
        log_nsr_status.value_namespace = name_space;
        log_nsr_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-preemption")
    {
        log_preemption = value;
        log_preemption.value_namespace = name_space;
        log_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-tail")
    {
        log_tail = value;
        log_tail.value_namespace = name_space;
        log_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loose-path-retry-period")
    {
        loose_path_retry_period = value;
        loose_path_retry_period.value_namespace = name_space;
        loose_path_retry_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tunnels")
    {
        maximum_tunnels = value;
        maximum_tunnels.value_namespace = name_space;
        maximum_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-ignore-overload")
    {
        path_selection_ignore_overload = value;
        path_selection_ignore_overload.value_namespace = name_space;
        path_selection_ignore_overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-delay-path-protect-switchover-timer")
    {
        reopt_delay_path_protect_switchover_timer = value;
        reopt_delay_path_protect_switchover_timer.value_namespace = name_space;
        reopt_delay_path_protect_switchover_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-after-affinity-failure-timer")
    {
        reoptimize_delay_after_affinity_failure_timer = value;
        reoptimize_delay_after_affinity_failure_timer.value_namespace = name_space;
        reoptimize_delay_after_affinity_failure_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-after-frr-timer")
    {
        reoptimize_delay_after_frr_timer = value;
        reoptimize_delay_after_frr_timer.value_namespace = name_space;
        reoptimize_delay_after_frr_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-cleanup-timer")
    {
        reoptimize_delay_cleanup_timer = value;
        reoptimize_delay_cleanup_timer.value_namespace = name_space;
        reoptimize_delay_cleanup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-delay-install-timer")
    {
        reoptimize_delay_install_timer = value;
        reoptimize_delay_install_timer.value_namespace = name_space;
        reoptimize_delay_install_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-link-up")
    {
        reoptimize_link_up = value;
        reoptimize_link_up.value_namespace = name_space;
        reoptimize_link_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-load-balancing")
    {
        reoptimize_load_balancing = value;
        reoptimize_load_balancing.value_namespace = name_space;
        reoptimize_load_balancing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer-frequency")
    {
        reoptimize_timer_frequency = value;
        reoptimize_timer_frequency.value_namespace = name_space;
        reoptimize_timer_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-explicit-nulls")
    {
        advertise_explicit_nulls.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect-frequency")
    {
        auto_bandwidth_collect_frequency.yfilter = yfilter;
    }
    if(value_path == "disable-reoptimize-affinity-failure")
    {
        disable_reoptimize_affinity_failure.yfilter = yfilter;
    }
    if(value_path == "enable-unequal-load-balancing")
    {
        enable_unequal_load_balancing.yfilter = yfilter;
    }
    if(value_path == "fault-oam")
    {
        fault_oam.yfilter = yfilter;
    }
    if(value_path == "graceful-preemption-on-bandwidth-reduction")
    {
        graceful_preemption_on_bandwidth_reduction.yfilter = yfilter;
    }
    if(value_path == "link-holddown-timer")
    {
        link_holddown_timer.yfilter = yfilter;
    }
    if(value_path == "log-all")
    {
        log_all.yfilter = yfilter;
    }
    if(value_path == "log-frr-protection")
    {
        log_frr_protection.yfilter = yfilter;
    }
    if(value_path == "log-head")
    {
        log_head.yfilter = yfilter;
    }
    if(value_path == "log-issu-status")
    {
        log_issu_status.yfilter = yfilter;
    }
    if(value_path == "log-mid")
    {
        log_mid.yfilter = yfilter;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status.yfilter = yfilter;
    }
    if(value_path == "log-preemption")
    {
        log_preemption.yfilter = yfilter;
    }
    if(value_path == "log-tail")
    {
        log_tail.yfilter = yfilter;
    }
    if(value_path == "loose-path-retry-period")
    {
        loose_path_retry_period.yfilter = yfilter;
    }
    if(value_path == "maximum-tunnels")
    {
        maximum_tunnels.yfilter = yfilter;
    }
    if(value_path == "path-selection-ignore-overload")
    {
        path_selection_ignore_overload.yfilter = yfilter;
    }
    if(value_path == "reopt-delay-path-protect-switchover-timer")
    {
        reopt_delay_path_protect_switchover_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-after-affinity-failure-timer")
    {
        reoptimize_delay_after_affinity_failure_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-after-frr-timer")
    {
        reoptimize_delay_after_frr_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-cleanup-timer")
    {
        reoptimize_delay_cleanup_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-delay-install-timer")
    {
        reoptimize_delay_install_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimize-link-up")
    {
        reoptimize_link_up.yfilter = yfilter;
    }
    if(value_path == "reoptimize-load-balancing")
    {
        reoptimize_load_balancing.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer-frequency")
    {
        reoptimize_timer_frequency.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mappings" || name == "attribute-set" || name == "auto-tunnel" || name == "bandwidth-accounting" || name == "bfd-over-lsp" || name == "fast-reroute" || name == "hardware-out-of-resource" || name == "lsp-out-of-resource" || name == "mib" || name == "path-selection" || name == "pce-attributes" || name == "queues" || name == "secondary-router-ids" || name == "soft-preemption" || name == "srlg" || name == "advertise-explicit-nulls" || name == "auto-bandwidth-collect-frequency" || name == "disable-reoptimize-affinity-failure" || name == "enable-unequal-load-balancing" || name == "fault-oam" || name == "graceful-preemption-on-bandwidth-reduction" || name == "link-holddown-timer" || name == "log-all" || name == "log-frr-protection" || name == "log-head" || name == "log-issu-status" || name == "log-mid" || name == "log-nsr-status" || name == "log-preemption" || name == "log-tail" || name == "loose-path-retry-period" || name == "maximum-tunnels" || name == "path-selection-ignore-overload" || name == "reopt-delay-path-protect-switchover-timer" || name == "reoptimize-delay-after-affinity-failure-timer" || name == "reoptimize-delay-after-frr-timer" || name == "reoptimize-delay-cleanup-timer" || name == "reoptimize-delay-install-timer" || name == "reoptimize-link-up" || name == "reoptimize-load-balancing" || name == "reoptimize-timer-frequency")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMappings()
{

    yang_name = "affinity-mappings"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AffinityMappings::~AffinityMappings()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_data() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_operation() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AffinityMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AffinityMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mapping")
    {
        for(auto const & c : affinity_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping>();
        c->parent = this;
        affinity_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AffinityMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AffinityMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mapping")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::AffinityMapping()
    :
    affinity_name{YType::str, "affinity-name"},
    value_{YType::str, "value"},
    value_type{YType::enumeration, "value-type"}
{

    yang_name = "affinity-mapping"; yang_parent_name = "affinity-mappings"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::~AffinityMapping()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_data() const
{
    return affinity_name.is_set
	|| value_.is_set
	|| value_type.is_set;
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(value_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/affinity-mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mapping" <<"[affinity-name='" <<affinity_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_type.is_set || is_set(value_type.yfilter)) leaf_name_data.push_back(value_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-type")
    {
        value_type = value;
        value_type.value_namespace = name_space;
        value_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "value-type")
    {
        value_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name" || name == "value" || name == "value-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AttributeSet()
    :
    auto_backup_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>())
	,auto_mesh_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>())
	,otn_pp_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>())
	,p2mpte_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes>())
	,p2p_te_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes>())
	,path_option_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>())
	,xro_attributes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>())
{
    auto_backup_attributes->parent = this;
    auto_mesh_attributes->parent = this;
    otn_pp_attributes->parent = this;
    p2mpte_attributes->parent = this;
    p2p_te_attributes->parent = this;
    path_option_attributes->parent = this;
    xro_attributes->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::~AttributeSet()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::has_data() const
{
    return (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_data())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_data())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_data())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_data())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_data())
	|| (path_option_attributes !=  nullptr && path_option_attributes->has_data())
	|| (xro_attributes !=  nullptr && xro_attributes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| (auto_backup_attributes !=  nullptr && auto_backup_attributes->has_operation())
	|| (auto_mesh_attributes !=  nullptr && auto_mesh_attributes->has_operation())
	|| (otn_pp_attributes !=  nullptr && otn_pp_attributes->has_operation())
	|| (p2mpte_attributes !=  nullptr && p2mpte_attributes->has_operation())
	|| (p2p_te_attributes !=  nullptr && p2p_te_attributes->has_operation())
	|| (path_option_attributes !=  nullptr && path_option_attributes->has_operation())
	|| (xro_attributes !=  nullptr && xro_attributes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-backup-attributes")
    {
        if(auto_backup_attributes == nullptr)
        {
            auto_backup_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes>();
        }
        return auto_backup_attributes;
    }

    if(child_yang_name == "auto-mesh-attributes")
    {
        if(auto_mesh_attributes == nullptr)
        {
            auto_mesh_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes>();
        }
        return auto_mesh_attributes;
    }

    if(child_yang_name == "otn-pp-attributes")
    {
        if(otn_pp_attributes == nullptr)
        {
            otn_pp_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes>();
        }
        return otn_pp_attributes;
    }

    if(child_yang_name == "p2mpte-attributes")
    {
        if(p2mpte_attributes == nullptr)
        {
            p2mpte_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes>();
        }
        return p2mpte_attributes;
    }

    if(child_yang_name == "p2p-te-attributes")
    {
        if(p2p_te_attributes == nullptr)
        {
            p2p_te_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes>();
        }
        return p2p_te_attributes;
    }

    if(child_yang_name == "path-option-attributes")
    {
        if(path_option_attributes == nullptr)
        {
            path_option_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes>();
        }
        return path_option_attributes;
    }

    if(child_yang_name == "xro-attributes")
    {
        if(xro_attributes == nullptr)
        {
            xro_attributes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes>();
        }
        return xro_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_backup_attributes != nullptr)
    {
        children["auto-backup-attributes"] = auto_backup_attributes;
    }

    if(auto_mesh_attributes != nullptr)
    {
        children["auto-mesh-attributes"] = auto_mesh_attributes;
    }

    if(otn_pp_attributes != nullptr)
    {
        children["otn-pp-attributes"] = otn_pp_attributes;
    }

    if(p2mpte_attributes != nullptr)
    {
        children["p2mpte-attributes"] = p2mpte_attributes;
    }

    if(p2p_te_attributes != nullptr)
    {
        children["p2p-te-attributes"] = p2p_te_attributes;
    }

    if(path_option_attributes != nullptr)
    {
        children["path-option-attributes"] = path_option_attributes;
    }

    if(xro_attributes != nullptr)
    {
        children["xro-attributes"] = xro_attributes;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-backup-attributes" || name == "auto-mesh-attributes" || name == "otn-pp-attributes" || name == "p2mpte-attributes" || name == "p2p-te-attributes" || name == "path-option-attributes" || name == "xro-attributes")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttributes()
{

    yang_name = "auto-backup-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::~AutoBackupAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-backup-attribute")
    {
        for(auto const & c : auto_backup_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute>();
        c->parent = this;
        auto_backup_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_backup_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-backup-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(nullptr) // presence node
	,auto_backup_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>())
	,priority(nullptr) // presence node
	,signalled_name(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>())
{
    auto_backup_logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_selection->parent = this;
    policy_classes->parent = this;
    signalled_name->parent = this;

    yang_name = "auto-backup-attribute"; yang_parent_name = "auto-backup-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::~AutoBackupAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-backup-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-backup-logging")
    {
        if(auto_backup_logging == nullptr)
        {
            auto_backup_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>();
        }
        return auto_backup_logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>();
        }
        return signalled_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_backup_logging != nullptr)
    {
        children["auto-backup-logging"] = auto_backup_logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-backup-logging" || name == "new-style-affinity-affinity-types" || name == "path-selection" || name == "policy-classes" || name == "priority" || name == "signalled-name" || name == "attribute-set-name" || name == "enable" || name == "record-route")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::AutoBackupLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    state_message{YType::empty, "state-message"}
{

    yang_name = "auto-backup-logging"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::~AutoBackupLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "state-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::SignalledName()
    :
    mp_address{YType::boolean, "mp-address"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{

    yang_name = "signalled-name"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::~SignalledName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_data() const
{
    return mp_address.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(source_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_address.is_set || is_set(mp_address.yfilter)) leaf_name_data.push_back(mp_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-address")
    {
        mp_address = value;
        mp_address.value_namespace = name_space;
        mp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-address")
    {
        mp_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp-address" || name == "name" || name == "protected-interface-type" || name == "source-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttributes()
{

    yang_name = "auto-mesh-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::~AutoMeshAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-mesh-attribute")
    {
        for(auto const & c : auto_mesh_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute>();
        c->parent = this;
        auto_mesh_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_mesh_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    autoroute_announce{YType::empty, "autoroute-announce"},
    collection_only{YType::empty, "collection-only"},
    enable{YType::empty, "enable"},
    forward_class{YType::uint32, "forward-class"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    load_share{YType::uint32, "load-share"},
    record_route{YType::empty, "record-route"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    affinity_mask(nullptr) // presence node
	,auto_mesh_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>())
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>())
	,priority(nullptr) // presence node
{
    auto_mesh_logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_selection->parent = this;
    policy_classes->parent = this;

    yang_name = "auto-mesh-attribute"; yang_parent_name = "auto-mesh-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::~AutoMeshAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| autoroute_announce.is_set
	|| collection_only.is_set
	|| enable.is_set
	|| forward_class.is_set
	|| interface_bandwidth.is_set
	|| load_share.is_set
	|| record_route.is_set
	|| soft_preemption.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(autoroute_announce.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-mesh-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (autoroute_announce.is_set || is_set(autoroute_announce.yfilter)) leaf_name_data.push_back(autoroute_announce.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-mesh-logging")
    {
        if(auto_mesh_logging == nullptr)
        {
            auto_mesh_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>();
        }
        return auto_mesh_logging;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_mesh_logging != nullptr)
    {
        children["auto-mesh-logging"] = auto_mesh_logging;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoroute-announce")
    {
        autoroute_announce = value;
        autoroute_announce.value_namespace = name_space;
        autoroute_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "autoroute-announce")
    {
        autoroute_announce.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-mesh-logging" || name == "bandwidth" || name == "fast-reroute" || name == "new-style-affinity-affinity-types" || name == "path-selection" || name == "policy-classes" || name == "priority" || name == "attribute-set-name" || name == "autoroute-announce" || name == "collection-only" || name == "enable" || name == "forward-class" || name == "interface-bandwidth" || name == "load-share" || name == "record-route" || name == "soft-preemption")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::AutoMeshLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{

    yang_name = "auto-mesh-logging"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::~AutoMeshLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-change-message" || name == "insufficient-bw-message" || name == "pcalc-failure-message" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttributes()
{

    yang_name = "otn-pp-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::~OtnPpAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_data() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_operation() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-pp-attribute")
    {
        for(auto const & c : otn_pp_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute>();
        c->parent = this;
        otn_pp_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otn_pp_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-pp-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::OtnPpAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    aps_protection_mode{YType::enumeration, "aps-protection-mode"},
    aps_protection_type{YType::enumeration, "aps-protection-type"},
    aps_restoration_style{YType::enumeration, "aps-restoration-style"},
    enable{YType::empty, "enable"}
    	,
    path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>())
	,revert_schedule_names(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>())
	,sub_network_connection_mode(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>())
	,timers(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>())
{
    path_selection->parent = this;
    revert_schedule_names->parent = this;
    sub_network_connection_mode->parent = this;
    timers->parent = this;

    yang_name = "otn-pp-attribute"; yang_parent_name = "otn-pp-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::~OtnPpAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| aps_protection_mode.is_set
	|| aps_protection_type.is_set
	|| aps_restoration_style.is_set
	|| enable.is_set
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_data())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(aps_protection_mode.yfilter)
	|| ydk::is_set(aps_protection_type.yfilter)
	|| ydk::is_set(aps_restoration_style.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_operation())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/otn-pp-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (aps_protection_mode.is_set || is_set(aps_protection_mode.yfilter)) leaf_name_data.push_back(aps_protection_mode.get_name_leafdata());
    if (aps_protection_type.is_set || is_set(aps_protection_type.yfilter)) leaf_name_data.push_back(aps_protection_type.get_name_leafdata());
    if (aps_restoration_style.is_set || is_set(aps_restoration_style.yfilter)) leaf_name_data.push_back(aps_restoration_style.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "revert-schedule-names")
    {
        if(revert_schedule_names == nullptr)
        {
            revert_schedule_names = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>();
        }
        return revert_schedule_names;
    }

    if(child_yang_name == "sub-network-connection-mode")
    {
        if(sub_network_connection_mode == nullptr)
        {
            sub_network_connection_mode = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>();
        }
        return sub_network_connection_mode;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(revert_schedule_names != nullptr)
    {
        children["revert-schedule-names"] = revert_schedule_names;
    }

    if(sub_network_connection_mode != nullptr)
    {
        children["sub-network-connection-mode"] = sub_network_connection_mode;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-protection-mode")
    {
        aps_protection_mode = value;
        aps_protection_mode.value_namespace = name_space;
        aps_protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-protection-type")
    {
        aps_protection_type = value;
        aps_protection_type.value_namespace = name_space;
        aps_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-restoration-style")
    {
        aps_restoration_style = value;
        aps_restoration_style.value_namespace = name_space;
        aps_restoration_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "aps-protection-mode")
    {
        aps_protection_mode.yfilter = yfilter;
    }
    if(value_path == "aps-protection-type")
    {
        aps_protection_type.yfilter = yfilter;
    }
    if(value_path == "aps-restoration-style")
    {
        aps_restoration_style.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-selection" || name == "revert-schedule-names" || name == "sub-network-connection-mode" || name == "timers" || name == "attribute-set-name" || name == "aps-protection-mode" || name == "aps-protection-type" || name == "aps-restoration-style" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleNames()
{

    yang_name = "revert-schedule-names"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::~RevertScheduleNames()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_data() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_operation() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule-name")
    {
        for(auto const & c : revert_schedule_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName>();
        c->parent = this;
        revert_schedule_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : revert_schedule_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule-name")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::RevertScheduleName()
    :
    schedule_name{YType::str, "schedule-name"},
    revert_schedule_frequency{YType::uint32, "revert-schedule-frequency"},
    revert_schedule_max_tries{YType::uint32, "revert-schedule-max-tries"},
    sch_name_enable{YType::empty, "sch-name-enable"}
    	,
    schedule_date(nullptr) // presence node
	,schedule_duration(nullptr) // presence node
{

    yang_name = "revert-schedule-name"; yang_parent_name = "revert-schedule-names"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::~RevertScheduleName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_data() const
{
    return schedule_name.is_set
	|| revert_schedule_frequency.is_set
	|| revert_schedule_max_tries.is_set
	|| sch_name_enable.is_set
	|| (schedule_date !=  nullptr && schedule_date->has_data())
	|| (schedule_duration !=  nullptr && schedule_duration->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_name.yfilter)
	|| ydk::is_set(revert_schedule_frequency.yfilter)
	|| ydk::is_set(revert_schedule_max_tries.yfilter)
	|| ydk::is_set(sch_name_enable.yfilter)
	|| (schedule_date !=  nullptr && schedule_date->has_operation())
	|| (schedule_duration !=  nullptr && schedule_duration->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-name" <<"[schedule-name='" <<schedule_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_name.is_set || is_set(schedule_name.yfilter)) leaf_name_data.push_back(schedule_name.get_name_leafdata());
    if (revert_schedule_frequency.is_set || is_set(revert_schedule_frequency.yfilter)) leaf_name_data.push_back(revert_schedule_frequency.get_name_leafdata());
    if (revert_schedule_max_tries.is_set || is_set(revert_schedule_max_tries.yfilter)) leaf_name_data.push_back(revert_schedule_max_tries.get_name_leafdata());
    if (sch_name_enable.is_set || is_set(sch_name_enable.yfilter)) leaf_name_data.push_back(sch_name_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-date")
    {
        if(schedule_date == nullptr)
        {
            schedule_date = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate>();
        }
        return schedule_date;
    }

    if(child_yang_name == "schedule-duration")
    {
        if(schedule_duration == nullptr)
        {
            schedule_duration = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration>();
        }
        return schedule_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(schedule_date != nullptr)
    {
        children["schedule-date"] = schedule_date;
    }

    if(schedule_duration != nullptr)
    {
        children["schedule-duration"] = schedule_duration;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-name")
    {
        schedule_name = value;
        schedule_name.value_namespace = name_space;
        schedule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-schedule-frequency")
    {
        revert_schedule_frequency = value;
        revert_schedule_frequency.value_namespace = name_space;
        revert_schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-schedule-max-tries")
    {
        revert_schedule_max_tries = value;
        revert_schedule_max_tries.value_namespace = name_space;
        revert_schedule_max_tries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sch-name-enable")
    {
        sch_name_enable = value;
        sch_name_enable.value_namespace = name_space;
        sch_name_enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-name")
    {
        schedule_name.yfilter = yfilter;
    }
    if(value_path == "revert-schedule-frequency")
    {
        revert_schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "revert-schedule-max-tries")
    {
        revert_schedule_max_tries.yfilter = yfilter;
    }
    if(value_path == "sch-name-enable")
    {
        sch_name_enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-date" || name == "schedule-duration" || name == "schedule-name" || name == "revert-schedule-frequency" || name == "revert-schedule-max-tries" || name == "sch-name-enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::ScheduleDate()
    :
    day{YType::uint32, "day"},
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"},
    month{YType::uint32, "month"},
    year{YType::uint32, "year"}
{

    yang_name = "schedule-date"; yang_parent_name = "revert-schedule-name"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::~ScheduleDate()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_data() const
{
    return day.is_set
	|| hour.is_set
	|| minutes.is_set
	|| month.is_set
	|| year.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hour" || name == "minutes" || name == "month" || name == "year")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::ScheduleDuration()
    :
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "schedule-duration"; yang_parent_name = "revert-schedule-name"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::~ScheduleDuration()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_data() const
{
    return hour.is_set
	|| minutes.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour" || name == "minutes")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::SubNetworkConnectionMode()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    connection_monitoring_mode{YType::uint32, "connection-monitoring-mode"}
{

    yang_name = "sub-network-connection-mode"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::~SubNetworkConnectionMode()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_data() const
{
    return connection_mode.is_set
	|| connection_monitoring_mode.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(connection_monitoring_mode.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-network-connection-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (connection_monitoring_mode.is_set || is_set(connection_monitoring_mode.yfilter)) leaf_name_data.push_back(connection_monitoring_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-monitoring-mode")
    {
        connection_monitoring_mode = value;
        connection_monitoring_mode.value_namespace = name_space;
        connection_monitoring_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "connection-monitoring-mode")
    {
        connection_monitoring_mode.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-mode" || name == "connection-monitoring-mode")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::Timers()
    :
    aps_hold_off{YType::uint32, "aps-hold-off"},
    aps_wait_to_restore{YType::uint32, "aps-wait-to-restore"}
{

    yang_name = "timers"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_data() const
{
    return aps_hold_off.is_set
	|| aps_wait_to_restore.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aps_hold_off.yfilter)
	|| ydk::is_set(aps_wait_to_restore.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_hold_off.is_set || is_set(aps_hold_off.yfilter)) leaf_name_data.push_back(aps_hold_off.get_name_leafdata());
    if (aps_wait_to_restore.is_set || is_set(aps_wait_to_restore.yfilter)) leaf_name_data.push_back(aps_wait_to_restore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aps-hold-off")
    {
        aps_hold_off = value;
        aps_hold_off.value_namespace = name_space;
        aps_hold_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-wait-to-restore")
    {
        aps_wait_to_restore = value;
        aps_wait_to_restore.value_namespace = name_space;
        aps_wait_to_restore.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aps-hold-off")
    {
        aps_hold_off.yfilter = yfilter;
    }
    if(value_path == "aps-wait-to-restore")
    {
        aps_wait_to_restore.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-hold-off" || name == "aps-wait-to-restore")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttributes()
{

    yang_name = "p2mpte-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::~P2MpteAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::has_data() const
{
    for (std::size_t index=0; index<p2mpte_attribute.size(); index++)
    {
        if(p2mpte_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2mpte_attribute.size(); index++)
    {
        if(p2mpte_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mpte-attribute")
    {
        for(auto const & c : p2mpte_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute>();
        c->parent = this;
        p2mpte_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2mpte_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mpte-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::P2MpteAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(nullptr) // presence node
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection>())
	,priority(nullptr) // presence node
{
    logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_selection->parent = this;

    yang_name = "p2mpte-attribute"; yang_parent_name = "p2mpte-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::~P2MpteAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| interface_bandwidth.is_set
	|| record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2mpte-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mpte-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "bandwidth" || name == "fast-reroute" || name == "logging" || name == "new-style-affinity-affinity-types" || name == "path-selection" || name == "priority" || name == "attribute-set-name" || name == "enable" || name == "interface-bandwidth" || name == "record-route")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"}
{

    yang_name = "logging"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| sub_lsp_state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(sub_lsp_state_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.yfilter)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
        sub_lsp_state_message.value_namespace = name_space;
        sub_lsp_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bandwidth-change-message" || name == "insufficient-bw-message" || name == "pcalc-failure-message" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message" || name == "sub-lsp-state-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "p2mpte-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttributes()
{

    yang_name = "p2p-te-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::~P2PTeAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::has_data() const
{
    for (std::size_t index=0; index<p2p_te_attribute.size(); index++)
    {
        if(p2p_te_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::has_operation() const
{
    for (std::size_t index=0; index<p2p_te_attribute.size(); index++)
    {
        if(p2p_te_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-te-attribute")
    {
        for(auto const & c : p2p_te_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute>();
        c->parent = this;
        p2p_te_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2p_te_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-te-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::P2PTeAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    affinity_mask(nullptr) // presence node
	,logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection>())
	,pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce>())
{
    logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_selection->parent = this;
    pce->parent = this;

    yang_name = "p2p-te-attribute"; yang_parent_name = "p2p-te-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::~P2PTeAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/p2p-te-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-te-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce>();
        }
        return pce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "logging" || name == "new-style-affinity-affinity-types" || name == "path-selection" || name == "pce" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{

    yang_name = "logging"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bandwidth-change-message" || name == "bfd-state-message" || name == "insufficient-bw-message" || name == "lsp-switch-over-change-message" || name == "pcalc-failure-message" || name == "record-route-messsage" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"}
    	,
    invalidation(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation>())
	,segment_routing_prepend(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend>())
{
    invalidation->parent = this;
    segment_routing_prepend->parent = this;

    yang_name = "path-selection"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::has_data() const
{
    return enable.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing_prepend !=  nullptr && segment_routing_prepend->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing-prepend")
    {
        if(segment_routing_prepend == nullptr)
        {
            segment_routing_prepend = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend>();
        }
        return segment_routing_prepend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing_prepend != nullptr)
    {
        children["segment-routing-prepend"] = segment_routing_prepend;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing-prepend" || name == "enable" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::Invalidation()
    :
    invalidation_timer{YType::uint32, "invalidation-timer"},
    invalidation_timer_expire_type{YType::enumeration, "invalidation-timer-expire-type"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::has_data() const
{
    return invalidation_timer.is_set
	|| invalidation_timer_expire_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalidation_timer.yfilter)
	|| ydk::is_set(invalidation_timer_expire_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalidation_timer.is_set || is_set(invalidation_timer.yfilter)) leaf_name_data.push_back(invalidation_timer.get_name_leafdata());
    if (invalidation_timer_expire_type.is_set || is_set(invalidation_timer_expire_type.yfilter)) leaf_name_data.push_back(invalidation_timer_expire_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalidation-timer")
    {
        invalidation_timer = value;
        invalidation_timer.value_namespace = name_space;
        invalidation_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidation-timer-expire-type")
    {
        invalidation_timer_expire_type = value;
        invalidation_timer_expire_type.value_namespace = name_space;
        invalidation_timer_expire_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalidation-timer")
    {
        invalidation_timer.yfilter = yfilter;
    }
    if(value_path == "invalidation-timer-expire-type")
    {
        invalidation_timer_expire_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation-timer" || name == "invalidation-timer-expire-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::SegmentRoutingPrepend()
    :
    enable{YType::empty, "enable"}
    	,
    indexes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>())
{
    indexes->parent = this;

    yang_name = "segment-routing-prepend"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::~SegmentRoutingPrepend()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::has_data() const
{
    return enable.is_set
	|| (indexes !=  nullptr && indexes->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (indexes !=  nullptr && indexes->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-prepend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes>();
        }
        return indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indexes" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Indexes()
{

    yang_name = "indexes"; yang_parent_name = "segment-routing-prepend"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::~Indexes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::Index_()
    :
    index_number{YType::uint32, "index-number"},
    mpls_label{YType::int32, "mpls-label"},
    prepend_type{YType::enumeration, "prepend-type"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::~Index_()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::has_data() const
{
    return index_number.is_set
	|| mpls_label.is_set
	|| prepend_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_number.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(prepend_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index-number='" <<index_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_number.is_set || is_set(index_number.yfilter)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (prepend_type.is_set || is_set(prepend_type.yfilter)) leaf_name_data.push_back(prepend_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index-number")
    {
        index_number = value;
        index_number.value_namespace = name_space;
        index_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepend-type")
    {
        prepend_type = value;
        prepend_type.value_namespace = name_space;
        prepend_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index-number")
    {
        index_number.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "prepend-type")
    {
        prepend_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index-number" || name == "mpls-label" || name == "prepend-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
    	,
    bidirectional(nullptr) // presence node
	,disjoint_path(nullptr) // presence node
{

    yang_name = "pce"; yang_parent_name = "p2p-te-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::has_data() const
{
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional" || name == "disjoint-path" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_group_id{YType::uint32, "bd-group-id"},
    bd_source_address{YType::str, "bd-source-address"}
{

    yang_name = "bidirectional"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::has_data() const
{
    return bd_group_id.is_set
	|| bd_source_address.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_id.yfilter)
	|| ydk::is_set(bd_source_address.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_id.is_set || is_set(bd_group_id.yfilter)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());
    if (bd_source_address.is_set || is_set(bd_source_address.yfilter)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
        bd_group_id.value_namespace = name_space;
        bd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
        bd_source_address.value_namespace = name_space;
        bd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id.yfilter = yfilter;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-group-id" || name == "bd-source-address")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_group_id{YType::uint32, "dp-group-id"},
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::has_data() const
{
    return dp_group_id.is_set
	|| dp_source_address.is_set
	|| dp_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dp_group_id.yfilter)
	|| ydk::is_set(dp_source_address.yfilter)
	|| ydk::is_set(dp_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_group_id.is_set || is_set(dp_group_id.yfilter)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());
    if (dp_source_address.is_set || is_set(dp_source_address.yfilter)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.yfilter)) leaf_name_data.push_back(dp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
        dp_group_id.value_namespace = name_space;
        dp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
        dp_source_address.value_namespace = name_space;
        dp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
        dp_type.value_namespace = name_space;
        dp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id.yfilter = yfilter;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address.yfilter = yfilter;
    }
    if(value_path == "dp-type")
    {
        dp_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-group-id" || name == "dp-source-address" || name == "dp-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttributes()
{

    yang_name = "path-option-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::~PathOptionAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_data() const
{
    for (std::size_t index=0; index<path_option_attribute.size(); index++)
    {
        if(path_option_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_operation() const
{
    for (std::size_t index=0; index<path_option_attribute.size(); index++)
    {
        if(path_option_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-attribute")
    {
        for(auto const & c : path_option_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute>();
        c->parent = this;
        path_option_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::PathOptionAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    affinity_mask(nullptr) // presence node
	,att_path_option_path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>())
	,bandwidth(nullptr) // presence node
	,bfd_reverse_path(nullptr) // presence node
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>())
	,pce(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>())
{
    att_path_option_path_selection->parent = this;
    new_style_affinity_affinity_types->parent = this;
    pce->parent = this;

    yang_name = "path-option-attribute"; yang_parent_name = "path-option-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::~PathOptionAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (pce !=  nullptr && pce->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (att_path_option_path_selection !=  nullptr && att_path_option_path_selection->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (pce !=  nullptr && pce->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/path-option-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "att-path-option-path-selection")
    {
        if(att_path_option_path_selection == nullptr)
        {
            att_path_option_path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection>();
        }
        return att_path_option_path_selection;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce>();
        }
        return pce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(att_path_option_path_selection != nullptr)
    {
        children["att-path-option-path-selection"] = att_path_option_path_selection;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "att-path-option-path-selection" || name == "bandwidth" || name == "bfd-reverse-path" || name == "new-style-affinity-affinity-types" || name == "pce" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::AttPathOptionPathSelection()
    :
    enable{YType::empty, "enable"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_exclude_list{YType::str, "path-selection-exclude-list"}
    	,
    invalidation(nullptr) // presence node
{

    yang_name = "att-path-option-path-selection"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::~AttPathOptionPathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_data() const
{
    return enable.is_set
	|| path_selection_cost_limit.is_set
	|| path_selection_exclude_list.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| ydk::is_set(path_selection_exclude_list.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "att-path-option-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_exclude_list.is_set || is_set(path_selection_exclude_list.yfilter)) leaf_name_data.push_back(path_selection_exclude_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-exclude-list")
    {
        path_selection_exclude_list = value;
        path_selection_exclude_list.value_namespace = name_space;
        path_selection_exclude_list.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-exclude-list")
    {
        path_selection_exclude_list.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "enable" || name == "path-selection-cost-limit" || name == "path-selection-exclude-list")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{

    yang_name = "invalidation"; yang_parent_name = "att-path-option-path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-action" || name == "path-invalidation-timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::BfdReversePath()
    :
    bfd_reverse_path_type{YType::enumeration, "bfd-reverse-path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_data() const
{
    return bfd_reverse_path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_reverse_path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_reverse_path_type.is_set || is_set(bfd_reverse_path_type.yfilter)) leaf_name_data.push_back(bfd_reverse_path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-reverse-path-type")
    {
        bfd_reverse_path_type = value;
        bfd_reverse_path_type.value_namespace = name_space;
        bfd_reverse_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-reverse-path-type")
    {
        bfd_reverse_path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-reverse-path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Pce()
    :
    enable{YType::empty, "enable"}
    	,
    bidirectional(nullptr) // presence node
	,disjoint_path(nullptr) // presence node
{

    yang_name = "pce"; yang_parent_name = "path-option-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::~Pce()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_data() const
{
    return enable.is_set
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional" || name == "disjoint-path" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::Bidirectional()
    :
    bd_group_id{YType::uint32, "bd-group-id"},
    bd_source_address{YType::str, "bd-source-address"}
{

    yang_name = "bidirectional"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::~Bidirectional()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_data() const
{
    return bd_group_id.is_set
	|| bd_source_address.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_id.yfilter)
	|| ydk::is_set(bd_source_address.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_id.is_set || is_set(bd_group_id.yfilter)) leaf_name_data.push_back(bd_group_id.get_name_leafdata());
    if (bd_source_address.is_set || is_set(bd_source_address.yfilter)) leaf_name_data.push_back(bd_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id = value;
        bd_group_id.value_namespace = name_space;
        bd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address = value;
        bd_source_address.value_namespace = name_space;
        bd_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-id")
    {
        bd_group_id.yfilter = yfilter;
    }
    if(value_path == "bd-source-address")
    {
        bd_source_address.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-group-id" || name == "bd-source-address")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::DisjointPath()
    :
    dp_group_id{YType::uint32, "dp-group-id"},
    dp_source_address{YType::str, "dp-source-address"},
    dp_type{YType::uint32, "dp-type"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::~DisjointPath()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_data() const
{
    return dp_group_id.is_set
	|| dp_source_address.is_set
	|| dp_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dp_group_id.yfilter)
	|| ydk::is_set(dp_source_address.yfilter)
	|| ydk::is_set(dp_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_group_id.is_set || is_set(dp_group_id.yfilter)) leaf_name_data.push_back(dp_group_id.get_name_leafdata());
    if (dp_source_address.is_set || is_set(dp_source_address.yfilter)) leaf_name_data.push_back(dp_source_address.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.yfilter)) leaf_name_data.push_back(dp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id = value;
        dp_group_id.value_namespace = name_space;
        dp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address = value;
        dp_source_address.value_namespace = name_space;
        dp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
        dp_type.value_namespace = name_space;
        dp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-group-id")
    {
        dp_group_id.yfilter = yfilter;
    }
    if(value_path == "dp-source-address")
    {
        dp_source_address.yfilter = yfilter;
    }
    if(value_path == "dp-type")
    {
        dp_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-group-id" || name == "dp-source-address" || name == "dp-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttributes()
{

    yang_name = "xro-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::~XroAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_data() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_operation() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-attribute")
    {
        for(auto const & c : xro_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute>();
        c->parent = this;
        xro_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::XroAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    path_diversity(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>())
{
    path_diversity->parent = this;
    path_selection->parent = this;

    yang_name = "xro-attribute"; yang_parent_name = "xro-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::~XroAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (path_diversity !=  nullptr && path_diversity->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_diversity !=  nullptr && path_diversity->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/xro-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-diversity")
    {
        if(path_diversity == nullptr)
        {
            path_diversity = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>();
        }
        return path_diversity;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>();
        }
        return path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_diversity != nullptr)
    {
        children["path-diversity"] = path_diversity;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-diversity" || name == "path-selection" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::PathDiversity()
    :
    lsp(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>())
	,srlgs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>())
{
    lsp->parent = this;
    srlgs->parent = this;

    yang_name = "path-diversity"; yang_parent_name = "xro-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::~PathDiversity()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_data() const
{
    return (lsp !=  nullptr && lsp->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_operation() const
{
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-diversity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>();
        }
        return srlgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "srlgs")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Lsp()
    :
    fecs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>())
{
    fecs->parent = this;

    yang_name = "lsp"; yang_parent_name = "path-diversity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::~Lsp()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_data() const
{
    return (fecs !=  nullptr && fecs->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (fecs !=  nullptr && fecs->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fecs")
    {
        if(fecs == nullptr)
        {
            fecs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>();
        }
        return fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fecs != nullptr)
    {
        children["fecs"] = fecs;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecs")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fecs()
{

    yang_name = "fecs"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::~Fecs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_data() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_operation() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        for(auto const & c : fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec>();
        c->parent = this;
        fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::Fec()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    conformance{YType::enumeration, "conformance"}
{

    yang_name = "fec"; yang_parent_name = "fecs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::~Fec()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_data() const
{
    return source.is_set
	|| destination.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(conformance.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec" <<"[source='" <<source <<"']" <<"[destination='" <<destination <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.yfilter)) leaf_name_data.push_back(conformance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "conformance")
    {
        conformance = value;
        conformance.value_namespace = name_space;
        conformance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
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
    if(value_path == "conformance")
    {
        conformance.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "conformance")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlgs()
{

    yang_name = "srlgs"; yang_parent_name = "path-diversity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::~Srlgs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::Srlg()
    :
    srlg{YType::uint32, "srlg"},
    conformance{YType::enumeration, "conformance"}
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_data() const
{
    return srlg.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(conformance.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg='" <<srlg <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.yfilter)) leaf_name_data.push_back(conformance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformance")
    {
        conformance = value;
        conformance.value_namespace = name_space;
        conformance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "conformance")
    {
        conformance.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg" || name == "conformance")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "xro-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>())
	,p2mp_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel>())
	,p2p_auto_tunnel(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel>())
	,pcc(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>())
{
    backup->parent = this;
    mesh->parent = this;
    p2mp_auto_tunnel->parent = this;
    p2p_auto_tunnel->parent = this;
    pcc->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_data())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (p2mp_auto_tunnel !=  nullptr && p2mp_auto_tunnel->has_operation())
	|| (p2p_auto_tunnel !=  nullptr && p2p_auto_tunnel->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "p2mp-auto-tunnel")
    {
        if(p2mp_auto_tunnel == nullptr)
        {
            p2mp_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel>();
        }
        return p2mp_auto_tunnel;
    }

    if(child_yang_name == "p2p-auto-tunnel")
    {
        if(p2p_auto_tunnel == nullptr)
        {
            p2p_auto_tunnel = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel>();
        }
        return p2p_auto_tunnel;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::get_children() const
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

    if(p2mp_auto_tunnel != nullptr)
    {
        children["p2mp-auto-tunnel"] = p2mp_auto_tunnel;
    }

    if(p2p_auto_tunnel != nullptr)
    {
        children["p2p-auto-tunnel"] = p2p_auto_tunnel;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mesh" || name == "p2mp-auto-tunnel" || name == "p2p-auto-tunnel" || name == "pcc")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    affinity_ignore{YType::empty, "affinity-ignore"}
    	,
    timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>())
	,tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange>())
{
    timers->parent = this;
    tunnel_range->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    return affinity_ignore.is_set
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_ignore.yfilter)
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_ignore.is_set || is_set(affinity_ignore.yfilter)) leaf_name_data.push_back(affinity_ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-ignore")
    {
        affinity_ignore = value;
        affinity_ignore.value_namespace = name_space;
        affinity_ignore.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-ignore")
    {
        affinity_ignore.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers" || name == "tunnel-range" || name == "affinity-ignore")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-tunnel-id" || name == "min-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Mesh()
    :
    mesh_groups(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>())
	,timers(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>())
	,tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange>())
{
    mesh_groups->parent = this;
    timers->parent = this;
    tunnel_range->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_data() const
{
    return (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-groups" || name == "timers" || name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{

    yang_name = "mesh-groups"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mesh_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    attribute_set{YType::str, "attribute-set"},
    create{YType::empty, "create"},
    destination_list{YType::str, "destination-list"},
    disable{YType::empty, "disable"},
    one_hop{YType::empty, "one-hop"}
{

    yang_name = "mesh-group"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    return mesh_group_id.is_set
	|| attribute_set.is_set
	|| create.is_set
	|| destination_list.is_set
	|| disable.is_set
	|| one_hop.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(destination_list.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(one_hop.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (destination_list.is_set || is_set(destination_list.yfilter)) leaf_name_data.push_back(destination_list.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (one_hop.is_set || is_set(one_hop.yfilter)) leaf_name_data.push_back(one_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list")
    {
        destination_list = value;
        destination_list.value_namespace = name_space;
        destination_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-hop")
    {
        one_hop = value;
        one_hop.value_namespace = name_space;
        one_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "destination-list")
    {
        destination_list.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "one-hop")
    {
        one_hop.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-id" || name == "attribute-set" || name == "create" || name == "destination-list" || name == "disable" || name == "one-hop")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Timers()
    :
    removal(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::~Removal()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_data() const
{
    return unused.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-tunnel-id" || name == "min-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::P2MpAutoTunnel()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange>())
{
    tunnel_range->parent = this;

    yang_name = "p2mp-auto-tunnel"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::~P2MpAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "p2mp-auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2mp-auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-tunnel-id" || name == "min-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::P2PAutoTunnel()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange>())
{
    tunnel_range->parent = this;

    yang_name = "p2p-auto-tunnel"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::~P2PAutoTunnel()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "p2p-auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/p2p-auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-tunnel-id" || name == "min-tunnel-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::Pcc()
    :
    tunnel_range(std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange>())
{
    tunnel_range->parent = this;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_data() const
{
    return (tunnel_range !=  nullptr && tunnel_range->has_data());
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_range !=  nullptr && tunnel_range->has_operation());
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-range")
    {
        if(tunnel_range == nullptr)
        {
            tunnel_range = std::make_shared<MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange>();
        }
        return tunnel_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_range != nullptr)
    {
        children["tunnel-range"] = tunnel_range;
    }

    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-range")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::TunnelRange()
    :
    max_tunnel_id{YType::uint32, "max-tunnel-id"},
    min_tunnel_id{YType::uint32, "min-tunnel-id"}
{

    yang_name = "tunnel-range"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::~TunnelRange()
{
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_data() const
{
    return max_tunnel_id.is_set
	|| min_tunnel_id.is_set;
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter);
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/auto-tunnel/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-tunnel-id" || name == "min-tunnel-id")
        return true;
    return false;
}

const Enum::YLeaf MplsTePathComputationMethod::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathComputationMethod::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathComputationMethod::pce {2, "pce"};
const Enum::YLeaf MplsTePathComputationMethod::explicit_ {3, "explicit"};

const Enum::YLeaf MplsTeBandwidthDste::standard_dste {0, "standard-dste"};
const Enum::YLeaf MplsTeBandwidthDste::pre_standard_dste {1, "pre-standard-dste"};

const Enum::YLeaf MplsTeBfdSessionDownAction::re_setup {1, "re-setup"};

const Enum::YLeaf MplsLcacFloodingIgp::ospf {0, "ospf"};

const Enum::YLeaf MplsTeBackupBandwidthPool::any_pool {1, "any-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::global_pool {2, "global-pool"};
const Enum::YLeaf MplsTeBackupBandwidthPool::sub_pool {4, "sub-pool"};

const Enum::YLeaf MplsTeSigNameOption::none {0, "none"};
const Enum::YLeaf MplsTeSigNameOption::address {1, "address"};
const Enum::YLeaf MplsTeSigNameOption::name {2, "name"};

const Enum::YLeaf OtnSignaledBandwidth::odu1 {1, "odu1"};
const Enum::YLeaf OtnSignaledBandwidth::odu2 {2, "odu2"};
const Enum::YLeaf OtnSignaledBandwidth::odu3 {3, "odu3"};
const Enum::YLeaf OtnSignaledBandwidth::odu4 {4, "odu4"};
const Enum::YLeaf OtnSignaledBandwidth::odu0 {10, "odu0"};
const Enum::YLeaf OtnSignaledBandwidth::odu2e {11, "odu2e"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_cbr {20, "od-uflex-cbr"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_gfp_resize {21, "od-uflex-gfp-resize"};
const Enum::YLeaf OtnSignaledBandwidth::od_uflex_gfp_not_resize {22, "od-uflex-gfp-not-resize"};
const Enum::YLeaf OtnSignaledBandwidth::odu1e {23, "odu1e"};
const Enum::YLeaf OtnSignaledBandwidth::odu1f {24, "odu1f"};
const Enum::YLeaf OtnSignaledBandwidth::odu2f {25, "odu2f"};
const Enum::YLeaf OtnSignaledBandwidth::odu3e1 {26, "odu3e1"};
const Enum::YLeaf OtnSignaledBandwidth::odu3e2 {27, "odu3e2"};

const Enum::YLeaf MplsTeTunnelAffinity::include {1, "include"};
const Enum::YLeaf MplsTeTunnelAffinity::include_strict {2, "include-strict"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude {3, "exclude"};
const Enum::YLeaf MplsTeTunnelAffinity::exclude_all {4, "exclude-all"};
const Enum::YLeaf MplsTeTunnelAffinity::ignore {5, "ignore"};

const Enum::YLeaf BfdReversePath::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTeSwitchingEncoding::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncoding::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncoding::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf OtnSignaledBandwidthFlexFraming::cbr {20, "cbr"};
const Enum::YLeaf OtnSignaledBandwidthFlexFraming::framed_gfp_fixed {21, "framed-gfp-fixed"};
const Enum::YLeaf OtnSignaledBandwidthFlexFraming::framed_gfp_resize {22, "framed-gfp-resize"};

const Enum::YLeaf MplsTeBackupBandwidthClass::class0 {0, "class0"};
const Enum::YLeaf MplsTeBackupBandwidthClass::class1 {1, "class1"};
const Enum::YLeaf MplsTeBackupBandwidthClass::any_class {9, "any-class"};

const Enum::YLeaf MplsTePathOptionProtection::active {0, "active"};
const Enum::YLeaf MplsTePathOptionProtection::protecting {1, "protecting"};

const Enum::YLeaf SrPrepend::none_type {0, "none-type"};
const Enum::YLeaf SrPrepend::next_label {1, "next-label"};
const Enum::YLeaf SrPrepend::bgp_n_hop {2, "bgp-n-hop"};

const Enum::YLeaf MplsTePathDiversityConformance::strict {0, "strict"};
const Enum::YLeaf MplsTePathDiversityConformance::best_effort {1, "best-effort"};

const Enum::YLeaf MplsTeTunnelId::auto_ {0, "auto"};
const Enum::YLeaf MplsTeTunnelId::explicit_ {1, "explicit"};

const Enum::YLeaf IetfMode::standard {3, "standard"};

const Enum::YLeaf OtnProtectionSwitchLockout::none {0, "none"};
const Enum::YLeaf OtnProtectionSwitchLockout::working {1, "working"};

const Enum::YLeaf RoutePriorityRole::route_priority_role_head_back_up {0, "route-priority-role-head-back-up"};
const Enum::YLeaf RoutePriorityRole::route_priority_role_head_primary {1, "route-priority-role-head-primary"};
const Enum::YLeaf RoutePriorityRole::route_priority_role_middle {2, "route-priority-role-middle"};

const Enum::YLeaf MplsTePathOption::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathOption::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathOption::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathOption::explicit_number {4, "explicit-number"};
const Enum::YLeaf MplsTePathOption::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathOption::sr {6, "sr"};

const Enum::YLeaf MplsTeLogFrrProtection::frr_active_primary {1, "frr-active-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::backup {256, "backup"};
const Enum::YLeaf MplsTeLogFrrProtection::frr_ready_primary {512, "frr-ready-primary"};
const Enum::YLeaf MplsTeLogFrrProtection::primary {513, "primary"};
const Enum::YLeaf MplsTeLogFrrProtection::all {769, "all"};

const Enum::YLeaf OspfAreaMode::ospf_int {0, "ospf-int"};
const Enum::YLeaf OspfAreaMode::ospfip_addr {1, "ospfip-addr"};

const Enum::YLeaf PathInvalidationAction::tear {1, "tear"};
const Enum::YLeaf PathInvalidationAction::drop {2, "drop"};

const Enum::YLeaf MplsTeBandwidthLimit::unlimited {64, "unlimited"};
const Enum::YLeaf MplsTeBandwidthLimit::limited {128, "limited"};

const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_tear {1, "tunnel-action-tear"};
const Enum::YLeaf MplsTePathSelectionInvalidationTimerExpire::tunnel_action_drop {2, "tunnel-action-drop"};

const Enum::YLeaf MplsTePathOptionProperty::none {0, "none"};
const Enum::YLeaf MplsTePathOptionProperty::lockdown {1, "lockdown"};
const Enum::YLeaf MplsTePathOptionProperty::verbatim {4, "verbatim"};
const Enum::YLeaf MplsTePathOptionProperty::pce {8, "pce"};
const Enum::YLeaf MplsTePathOptionProperty::segment_routing {16, "segment-routing"};

const Enum::YLeaf MplsTeOtnApsProtectionMode::revertive {1, "revertive"};
const Enum::YLeaf MplsTeOtnApsProtectionMode::non_revertive {2, "non-revertive"};

const Enum::YLeaf BindingSegmentId::any_label {1, "any-label"};
const Enum::YLeaf BindingSegmentId::specified_label {2, "specified-label"};

const Enum::YLeaf MplsTeOtnSncMode::snc_n {1, "snc-n"};
const Enum::YLeaf MplsTeOtnSncMode::snc_i {2, "snc-i"};
const Enum::YLeaf MplsTeOtnSncMode::snc_s {3, "snc-s"};

const Enum::YLeaf BandwidthConstraint::bandwidth_constraint_maximum_allocation_model {1, "bandwidth-constraint-maximum-allocation-model"};

const Enum::YLeaf MplsTeIgpProtocol::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocol::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocol::ospf {2, "ospf"};

const Enum::YLeaf GmplsttiMode::sm {1, "sm"};
const Enum::YLeaf GmplsttiMode::pm {2, "pm"};
const Enum::YLeaf GmplsttiMode::tcm {3, "tcm"};

const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_no_aps {4, "1plus1-unidir-no-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_unidir_aps {8, "1plus1-unidir-aps"};
const Enum::YLeaf MplsTeOtnApsProtection::Y_1plus1_bdir_aps {16, "1plus1-bdir-aps"};

const Enum::YLeaf MplsTeSwitchingEncode::none {0, "none"};
const Enum::YLeaf MplsTeSwitchingEncode::packet {1, "packet"};
const Enum::YLeaf MplsTeSwitchingEncode::ethernet {2, "ethernet"};
const Enum::YLeaf MplsTeSwitchingEncode::sondet_sdh {5, "sondet-sdh"};

const Enum::YLeaf OtnPayload::unknown {0, "unknown"};
const Enum::YLeaf OtnPayload::bmp {50, "bmp"};
const Enum::YLeaf OtnPayload::gfp_f {54, "gfp-f"};
const Enum::YLeaf OtnPayload::gmp {55, "gmp"};
const Enum::YLeaf OtnPayload::gfp_f_ext {70, "gfp-f-ext"};

const Enum::YLeaf MplsTeSwitchingIndex::link {255, "link"};

const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_unprotected {1, "adj-unprotected"};
const Enum::YLeaf MplsTePathSelectionSegmentRoutingAdjacencyProtection::adj_protected {2, "adj-protected"};

const Enum::YLeaf OtnStaticUni::unknown {0, "unknown"};
const Enum::YLeaf OtnStaticUni::xc {1, "xc"};
const Enum::YLeaf OtnStaticUni::termination {2, "termination"};

const Enum::YLeaf MplsTeAffinityValue::hex_value {1, "hex-value"};
const Enum::YLeaf MplsTeAffinityValue::bit_position {2, "bit-position"};

const Enum::YLeaf MplsTeConfigTunnel::p2p {0, "p2p"};
const Enum::YLeaf MplsTeConfigTunnel::p2mp {1, "p2mp"};

const Enum::YLeaf MplsTePathSelectionMetric::igp {1, "igp"};
const Enum::YLeaf MplsTePathSelectionMetric::te {2, "te"};
const Enum::YLeaf MplsTePathSelectionMetric::delay {4, "delay"};

const Enum::YLeaf MplsTeSignaledLabel::not_set {0, "not-set"};
const Enum::YLeaf MplsTeSignaledLabel::dwdm {1, "dwdm"};

const Enum::YLeaf MplsTeSwitchingCap::psc1 {1, "psc1"};
const Enum::YLeaf MplsTeSwitchingCap::lsc {150, "lsc"};
const Enum::YLeaf MplsTeSwitchingCap::fsc {200, "fsc"};

const Enum::YLeaf MplsTebfdSession::regular_bfd {1, "regular-bfd"};
const Enum::YLeaf MplsTebfdSession::sbfd {2, "sbfd"};
const Enum::YLeaf MplsTebfdSession::redundant_sbfd {3, "redundant-sbfd"};

const Enum::YLeaf MplsTeOtnApsRestorationStyle::keep_failed_lsp {1, "keep-failed-lsp"};
const Enum::YLeaf MplsTeOtnApsRestorationStyle::delete_failed_lsp {2, "delete-failed-lsp"};

const Enum::YLeaf MplsTePathSelectionTiebreaker::min_fill {1, "min-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::max_fill {2, "max-fill"};
const Enum::YLeaf MplsTePathSelectionTiebreaker::random {3, "random"};

const Enum::YLeaf MplsTeAutorouteMetric::relative {1, "relative"};
const Enum::YLeaf MplsTeAutorouteMetric::absolute {2, "absolute"};
const Enum::YLeaf MplsTeAutorouteMetric::constant {3, "constant"};

const Enum::YLeaf OtnDestination::number_ed {0, "number-ed"};
const Enum::YLeaf OtnDestination::un_number_ed {1, "un-number-ed"};

const Enum::YLeaf LinkNextHop::none {1, "none"};
const Enum::YLeaf LinkNextHop::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf MplsTesrlgExclude::mandatory {1, "mandatory"};
const Enum::YLeaf MplsTesrlgExclude::preferred {2, "preferred"};
const Enum::YLeaf MplsTesrlgExclude::weighted {3, "weighted"};


}
}

