
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_0.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_cfg {

Isis::Isis()
    :
    instances(std::make_shared<Isis::Instances>())
{
    instances->parent = this;

    yang_name = "isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Isis::~Isis()
{
}

bool Isis::has_data() const
{
    if (is_presence_container) return true;
    return (instances !=  nullptr && instances->has_data());
}

bool Isis::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Isis::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
}

void Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Isis::clone_ptr() const
{
    return std::make_shared<Isis>();
}

std::string Isis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Isis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Isis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Isis::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances")
        return true;
    return false;
}

Isis::Instances::Instances()
    :
    instance(this, {"instance_name"})
{

    yang_name = "instances"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Isis::Instances::~Instances()
{
}

bool Isis::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Isis::Instances::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Isis::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"},
    running{YType::empty, "running"},
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    ignore_lsp_errors{YType::boolean, "ignore-lsp-errors"},
    is_type{YType::enumeration, "is-type"},
    tracing_mode{YType::enumeration, "tracing-mode"},
    vrf_context{YType::str, "vrf-context"},
    instance_id{YType::uint32, "instance-id"},
    dynamic_host_name{YType::boolean, "dynamic-host-name"},
    nsr{YType::empty, "nsr"},
    log_pdu_drops{YType::empty, "log-pdu-drops"}
        ,
    srgb(nullptr) // presence node
    , lsp_generation_intervals(std::make_shared<Isis::Instances::Instance::LspGenerationIntervals>())
    , lsp_arrival_times(std::make_shared<Isis::Instances::Instance::LspArrivalTimes>())
    , trace_buffer_size(std::make_shared<Isis::Instances::Instance::TraceBufferSize>())
    , max_link_metrics(std::make_shared<Isis::Instances::Instance::MaxLinkMetrics>())
    , adjacency_stagger(nullptr) // presence node
    , afs(std::make_shared<Isis::Instances::Instance::Afs>())
    , lsp_refresh_intervals(std::make_shared<Isis::Instances::Instance::LspRefreshIntervals>())
    , distribute(nullptr) // presence node
    , flex_algos(std::make_shared<Isis::Instances::Instance::FlexAlgos>())
    , affinity_mappings(std::make_shared<Isis::Instances::Instance::AffinityMappings>())
    , lsp_accept_passwords(std::make_shared<Isis::Instances::Instance::LspAcceptPasswords>())
    , lsp_mtus(std::make_shared<Isis::Instances::Instance::LspMtus>())
    , srlg_table(std::make_shared<Isis::Instances::Instance::SrlgTable>())
    , nsf(std::make_shared<Isis::Instances::Instance::Nsf>())
    , link_groups(std::make_shared<Isis::Instances::Instance::LinkGroups>())
    , lsp_check_intervals(std::make_shared<Isis::Instances::Instance::LspCheckIntervals>())
    , lsp_passwords(std::make_shared<Isis::Instances::Instance::LspPasswords>())
    , nets(std::make_shared<Isis::Instances::Instance::Nets>())
    , lsp_lifetimes(std::make_shared<Isis::Instances::Instance::LspLifetimes>())
    , overload_bits(std::make_shared<Isis::Instances::Instance::OverloadBits>())
    , interfaces(std::make_shared<Isis::Instances::Instance::Interfaces>())
{
    lsp_generation_intervals->parent = this;
    lsp_arrival_times->parent = this;
    trace_buffer_size->parent = this;
    max_link_metrics->parent = this;
    afs->parent = this;
    lsp_refresh_intervals->parent = this;
    flex_algos->parent = this;
    affinity_mappings->parent = this;
    lsp_accept_passwords->parent = this;
    lsp_mtus->parent = this;
    srlg_table->parent = this;
    nsf->parent = this;
    link_groups->parent = this;
    lsp_check_intervals->parent = this;
    lsp_passwords->parent = this;
    nets->parent = this;
    lsp_lifetimes->parent = this;
    overload_bits->parent = this;
    interfaces->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Isis::Instances::Instance::~Instance()
{
}

bool Isis::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| running.is_set
	|| log_adjacency_changes.is_set
	|| ignore_lsp_errors.is_set
	|| is_type.is_set
	|| tracing_mode.is_set
	|| vrf_context.is_set
	|| instance_id.is_set
	|| dynamic_host_name.is_set
	|| nsr.is_set
	|| log_pdu_drops.is_set
	|| (srgb !=  nullptr && srgb->has_data())
	|| (lsp_generation_intervals !=  nullptr && lsp_generation_intervals->has_data())
	|| (lsp_arrival_times !=  nullptr && lsp_arrival_times->has_data())
	|| (trace_buffer_size !=  nullptr && trace_buffer_size->has_data())
	|| (max_link_metrics !=  nullptr && max_link_metrics->has_data())
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (lsp_refresh_intervals !=  nullptr && lsp_refresh_intervals->has_data())
	|| (distribute !=  nullptr && distribute->has_data())
	|| (flex_algos !=  nullptr && flex_algos->has_data())
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_data())
	|| (lsp_accept_passwords !=  nullptr && lsp_accept_passwords->has_data())
	|| (lsp_mtus !=  nullptr && lsp_mtus->has_data())
	|| (srlg_table !=  nullptr && srlg_table->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (link_groups !=  nullptr && link_groups->has_data())
	|| (lsp_check_intervals !=  nullptr && lsp_check_intervals->has_data())
	|| (lsp_passwords !=  nullptr && lsp_passwords->has_data())
	|| (nets !=  nullptr && nets->has_data())
	|| (lsp_lifetimes !=  nullptr && lsp_lifetimes->has_data())
	|| (overload_bits !=  nullptr && overload_bits->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(ignore_lsp_errors.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(tracing_mode.yfilter)
	|| ydk::is_set(vrf_context.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(dynamic_host_name.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(log_pdu_drops.yfilter)
	|| (srgb !=  nullptr && srgb->has_operation())
	|| (lsp_generation_intervals !=  nullptr && lsp_generation_intervals->has_operation())
	|| (lsp_arrival_times !=  nullptr && lsp_arrival_times->has_operation())
	|| (trace_buffer_size !=  nullptr && trace_buffer_size->has_operation())
	|| (max_link_metrics !=  nullptr && max_link_metrics->has_operation())
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (lsp_refresh_intervals !=  nullptr && lsp_refresh_intervals->has_operation())
	|| (distribute !=  nullptr && distribute->has_operation())
	|| (flex_algos !=  nullptr && flex_algos->has_operation())
	|| (affinity_mappings !=  nullptr && affinity_mappings->has_operation())
	|| (lsp_accept_passwords !=  nullptr && lsp_accept_passwords->has_operation())
	|| (lsp_mtus !=  nullptr && lsp_mtus->has_operation())
	|| (srlg_table !=  nullptr && srlg_table->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (link_groups !=  nullptr && link_groups->has_operation())
	|| (lsp_check_intervals !=  nullptr && lsp_check_intervals->has_operation())
	|| (lsp_passwords !=  nullptr && lsp_passwords->has_operation())
	|| (nets !=  nullptr && nets->has_operation())
	|| (lsp_lifetimes !=  nullptr && lsp_lifetimes->has_operation())
	|| (overload_bits !=  nullptr && overload_bits->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Isis::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.yfilter)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (tracing_mode.is_set || is_set(tracing_mode.yfilter)) leaf_name_data.push_back(tracing_mode.get_name_leafdata());
    if (vrf_context.is_set || is_set(vrf_context.yfilter)) leaf_name_data.push_back(vrf_context.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (dynamic_host_name.is_set || is_set(dynamic_host_name.yfilter)) leaf_name_data.push_back(dynamic_host_name.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (log_pdu_drops.is_set || is_set(log_pdu_drops.yfilter)) leaf_name_data.push_back(log_pdu_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srgb")
    {
        if(srgb == nullptr)
        {
            srgb = std::make_shared<Isis::Instances::Instance::Srgb>();
        }
        return srgb;
    }

    if(child_yang_name == "lsp-generation-intervals")
    {
        if(lsp_generation_intervals == nullptr)
        {
            lsp_generation_intervals = std::make_shared<Isis::Instances::Instance::LspGenerationIntervals>();
        }
        return lsp_generation_intervals;
    }

    if(child_yang_name == "lsp-arrival-times")
    {
        if(lsp_arrival_times == nullptr)
        {
            lsp_arrival_times = std::make_shared<Isis::Instances::Instance::LspArrivalTimes>();
        }
        return lsp_arrival_times;
    }

    if(child_yang_name == "trace-buffer-size")
    {
        if(trace_buffer_size == nullptr)
        {
            trace_buffer_size = std::make_shared<Isis::Instances::Instance::TraceBufferSize>();
        }
        return trace_buffer_size;
    }

    if(child_yang_name == "max-link-metrics")
    {
        if(max_link_metrics == nullptr)
        {
            max_link_metrics = std::make_shared<Isis::Instances::Instance::MaxLinkMetrics>();
        }
        return max_link_metrics;
    }

    if(child_yang_name == "adjacency-stagger")
    {
        if(adjacency_stagger == nullptr)
        {
            adjacency_stagger = std::make_shared<Isis::Instances::Instance::AdjacencyStagger>();
        }
        return adjacency_stagger;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Isis::Instances::Instance::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "lsp-refresh-intervals")
    {
        if(lsp_refresh_intervals == nullptr)
        {
            lsp_refresh_intervals = std::make_shared<Isis::Instances::Instance::LspRefreshIntervals>();
        }
        return lsp_refresh_intervals;
    }

    if(child_yang_name == "distribute")
    {
        if(distribute == nullptr)
        {
            distribute = std::make_shared<Isis::Instances::Instance::Distribute>();
        }
        return distribute;
    }

    if(child_yang_name == "flex-algos")
    {
        if(flex_algos == nullptr)
        {
            flex_algos = std::make_shared<Isis::Instances::Instance::FlexAlgos>();
        }
        return flex_algos;
    }

    if(child_yang_name == "affinity-mappings")
    {
        if(affinity_mappings == nullptr)
        {
            affinity_mappings = std::make_shared<Isis::Instances::Instance::AffinityMappings>();
        }
        return affinity_mappings;
    }

    if(child_yang_name == "lsp-accept-passwords")
    {
        if(lsp_accept_passwords == nullptr)
        {
            lsp_accept_passwords = std::make_shared<Isis::Instances::Instance::LspAcceptPasswords>();
        }
        return lsp_accept_passwords;
    }

    if(child_yang_name == "lsp-mtus")
    {
        if(lsp_mtus == nullptr)
        {
            lsp_mtus = std::make_shared<Isis::Instances::Instance::LspMtus>();
        }
        return lsp_mtus;
    }

    if(child_yang_name == "srlg-table")
    {
        if(srlg_table == nullptr)
        {
            srlg_table = std::make_shared<Isis::Instances::Instance::SrlgTable>();
        }
        return srlg_table;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Isis::Instances::Instance::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "link-groups")
    {
        if(link_groups == nullptr)
        {
            link_groups = std::make_shared<Isis::Instances::Instance::LinkGroups>();
        }
        return link_groups;
    }

    if(child_yang_name == "lsp-check-intervals")
    {
        if(lsp_check_intervals == nullptr)
        {
            lsp_check_intervals = std::make_shared<Isis::Instances::Instance::LspCheckIntervals>();
        }
        return lsp_check_intervals;
    }

    if(child_yang_name == "lsp-passwords")
    {
        if(lsp_passwords == nullptr)
        {
            lsp_passwords = std::make_shared<Isis::Instances::Instance::LspPasswords>();
        }
        return lsp_passwords;
    }

    if(child_yang_name == "nets")
    {
        if(nets == nullptr)
        {
            nets = std::make_shared<Isis::Instances::Instance::Nets>();
        }
        return nets;
    }

    if(child_yang_name == "lsp-lifetimes")
    {
        if(lsp_lifetimes == nullptr)
        {
            lsp_lifetimes = std::make_shared<Isis::Instances::Instance::LspLifetimes>();
        }
        return lsp_lifetimes;
    }

    if(child_yang_name == "overload-bits")
    {
        if(overload_bits == nullptr)
        {
            overload_bits = std::make_shared<Isis::Instances::Instance::OverloadBits>();
        }
        return overload_bits;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srgb != nullptr)
    {
        children["srgb"] = srgb;
    }

    if(lsp_generation_intervals != nullptr)
    {
        children["lsp-generation-intervals"] = lsp_generation_intervals;
    }

    if(lsp_arrival_times != nullptr)
    {
        children["lsp-arrival-times"] = lsp_arrival_times;
    }

    if(trace_buffer_size != nullptr)
    {
        children["trace-buffer-size"] = trace_buffer_size;
    }

    if(max_link_metrics != nullptr)
    {
        children["max-link-metrics"] = max_link_metrics;
    }

    if(adjacency_stagger != nullptr)
    {
        children["adjacency-stagger"] = adjacency_stagger;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(lsp_refresh_intervals != nullptr)
    {
        children["lsp-refresh-intervals"] = lsp_refresh_intervals;
    }

    if(distribute != nullptr)
    {
        children["distribute"] = distribute;
    }

    if(flex_algos != nullptr)
    {
        children["flex-algos"] = flex_algos;
    }

    if(affinity_mappings != nullptr)
    {
        children["affinity-mappings"] = affinity_mappings;
    }

    if(lsp_accept_passwords != nullptr)
    {
        children["lsp-accept-passwords"] = lsp_accept_passwords;
    }

    if(lsp_mtus != nullptr)
    {
        children["lsp-mtus"] = lsp_mtus;
    }

    if(srlg_table != nullptr)
    {
        children["srlg-table"] = srlg_table;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(link_groups != nullptr)
    {
        children["link-groups"] = link_groups;
    }

    if(lsp_check_intervals != nullptr)
    {
        children["lsp-check-intervals"] = lsp_check_intervals;
    }

    if(lsp_passwords != nullptr)
    {
        children["lsp-passwords"] = lsp_passwords;
    }

    if(nets != nullptr)
    {
        children["nets"] = nets;
    }

    if(lsp_lifetimes != nullptr)
    {
        children["lsp-lifetimes"] = lsp_lifetimes;
    }

    if(overload_bits != nullptr)
    {
        children["overload-bits"] = overload_bits;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Isis::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
        ignore_lsp_errors.value_namespace = name_space;
        ignore_lsp_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracing-mode")
    {
        tracing_mode = value;
        tracing_mode.value_namespace = name_space;
        tracing_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-context")
    {
        vrf_context = value;
        vrf_context.value_namespace = name_space;
        vrf_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-host-name")
    {
        dynamic_host_name = value;
        dynamic_host_name.value_namespace = name_space;
        dynamic_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-pdu-drops")
    {
        log_pdu_drops = value;
        log_pdu_drops.value_namespace = name_space;
        log_pdu_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "tracing-mode")
    {
        tracing_mode.yfilter = yfilter;
    }
    if(value_path == "vrf-context")
    {
        vrf_context.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "dynamic-host-name")
    {
        dynamic_host_name.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "log-pdu-drops")
    {
        log_pdu_drops.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srgb" || name == "lsp-generation-intervals" || name == "lsp-arrival-times" || name == "trace-buffer-size" || name == "max-link-metrics" || name == "adjacency-stagger" || name == "afs" || name == "lsp-refresh-intervals" || name == "distribute" || name == "flex-algos" || name == "affinity-mappings" || name == "lsp-accept-passwords" || name == "lsp-mtus" || name == "srlg-table" || name == "nsf" || name == "link-groups" || name == "lsp-check-intervals" || name == "lsp-passwords" || name == "nets" || name == "lsp-lifetimes" || name == "overload-bits" || name == "interfaces" || name == "instance-name" || name == "running" || name == "log-adjacency-changes" || name == "ignore-lsp-errors" || name == "is-type" || name == "tracing-mode" || name == "vrf-context" || name == "instance-id" || name == "dynamic-host-name" || name == "nsr" || name == "log-pdu-drops")
        return true;
    return false;
}

Isis::Instances::Instance::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "srgb"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Srgb::~Srgb()
{
}

bool Isis::Instances::Instance::Srgb::has_data() const
{
    if (is_presence_container) return true;
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Isis::Instances::Instance::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Isis::Instances::Instance::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationIntervals()
    :
    lsp_generation_interval(this, {"level"})
{

    yang_name = "lsp-generation-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspGenerationIntervals::~LspGenerationIntervals()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_generation_interval.len(); index++)
    {
        if(lsp_generation_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_generation_interval.len(); index++)
    {
        if(lsp_generation_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspGenerationIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-generation-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval>();
        c->parent = this;
        lsp_generation_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspGenerationIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsp_generation_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspGenerationIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-generation-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::LspGenerationInterval()
    :
    level{YType::enumeration, "level"},
    maximum_wait{YType::uint32, "maximum-wait"},
    initial_wait{YType::uint32, "initial-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "lsp-generation-interval"; yang_parent_name = "lsp-generation-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::~LspGenerationInterval()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| maximum_wait.is_set
	|| initial_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "maximum-wait" || name == "initial-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTimes()
    :
    lsp_arrival_time(this, {"level"})
{

    yang_name = "lsp-arrival-times"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspArrivalTimes::~LspArrivalTimes()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_arrival_time.len(); index++)
    {
        if(lsp_arrival_time[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspArrivalTimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_arrival_time.len(); index++)
    {
        if(lsp_arrival_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspArrivalTimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-times";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspArrivalTimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-arrival-time")
    {
        auto c = std::make_shared<Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime>();
        c->parent = this;
        lsp_arrival_time.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspArrivalTimes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsp_arrival_time.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspArrivalTimes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspArrivalTimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-arrival-time")
        return true;
    return false;
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::LspArrivalTime()
    :
    level{YType::enumeration, "level"},
    maximum_wait{YType::uint32, "maximum-wait"},
    initial_wait{YType::uint32, "initial-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "lsp-arrival-time"; yang_parent_name = "lsp-arrival-times"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::~LspArrivalTime()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| maximum_wait.is_set
	|| initial_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-time";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "maximum-wait" || name == "initial-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::TraceBufferSize::TraceBufferSize()
    :
    detailed{YType::uint32, "detailed"},
    standard{YType::uint32, "standard"},
    severe{YType::uint32, "severe"},
    hello{YType::uint32, "hello"}
{

    yang_name = "trace-buffer-size"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::TraceBufferSize::~TraceBufferSize()
{
}

bool Isis::Instances::Instance::TraceBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return detailed.is_set
	|| standard.is_set
	|| severe.is_set
	|| hello.is_set;
}

bool Isis::Instances::Instance::TraceBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detailed.yfilter)
	|| ydk::is_set(standard.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(hello.yfilter);
}

std::string Isis::Instances::Instance::TraceBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::TraceBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detailed.is_set || is_set(detailed.yfilter)) leaf_name_data.push_back(detailed.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::TraceBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::TraceBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::TraceBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detailed")
    {
        detailed = value;
        detailed.value_namespace = name_space;
        detailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::TraceBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detailed")
    {
        detailed.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::TraceBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detailed" || name == "standard" || name == "severe" || name == "hello")
        return true;
    return false;
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetrics()
    :
    max_link_metric(this, {"level"})
{

    yang_name = "max-link-metrics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MaxLinkMetrics::~MaxLinkMetrics()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<max_link_metric.len(); index++)
    {
        if(max_link_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_operation() const
{
    for (std::size_t index=0; index<max_link_metric.len(); index++)
    {
        if(max_link_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MaxLinkMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-link-metric")
    {
        auto c = std::make_shared<Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric>();
        c->parent = this;
        max_link_metric.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MaxLinkMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : max_link_metric.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MaxLinkMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-metric")
        return true;
    return false;
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::MaxLinkMetric()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "max-link-metric"; yang_parent_name = "max-link-metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::~MaxLinkMetric()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::AdjacencyStagger::AdjacencyStagger()
    :
    initial_nbr{YType::uint32, "initial-nbr"},
    max_nbr{YType::uint32, "max-nbr"}
{

    yang_name = "adjacency-stagger"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::AdjacencyStagger::~AdjacencyStagger()
{
}

bool Isis::Instances::Instance::AdjacencyStagger::has_data() const
{
    if (is_presence_container) return true;
    return initial_nbr.is_set
	|| max_nbr.is_set;
}

bool Isis::Instances::Instance::AdjacencyStagger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_nbr.yfilter)
	|| ydk::is_set(max_nbr.yfilter);
}

std::string Isis::Instances::Instance::AdjacencyStagger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-stagger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::AdjacencyStagger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_nbr.is_set || is_set(initial_nbr.yfilter)) leaf_name_data.push_back(initial_nbr.get_name_leafdata());
    if (max_nbr.is_set || is_set(max_nbr.yfilter)) leaf_name_data.push_back(max_nbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::AdjacencyStagger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::AdjacencyStagger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::AdjacencyStagger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-nbr")
    {
        initial_nbr = value;
        initial_nbr.value_namespace = name_space;
        initial_nbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-nbr")
    {
        max_nbr = value;
        max_nbr.value_namespace = name_space;
        max_nbr.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::AdjacencyStagger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-nbr")
    {
        initial_nbr.yfilter = yfilter;
    }
    if(value_path == "max-nbr")
    {
        max_nbr.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::AdjacencyStagger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-nbr" || name == "max-nbr")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Afs()
    :
    af(this, {"af_name", "saf_name"})
{

    yang_name = "afs"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::~Afs()
{
}

bool Isis::Instances::Instance::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af>();
        c->parent = this;
        af.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : af.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
        ,
    af_data(nullptr) // presence node
    , topology_name(this, {"topology_name"})
{

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::~Af()
{
}

bool Isis::Instances::Instance::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_name.len(); index++)
    {
        if(topology_name[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| (af_data !=  nullptr && af_data->has_data());
}

bool Isis::Instances::Instance::Afs::Af::has_operation() const
{
    for (std::size_t index=0; index<topology_name.len(); index++)
    {
        if(topology_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| (af_data !=  nullptr && af_data->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    ADD_KEY_TOKEN(saf_name, "saf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-data")
    {
        if(af_data == nullptr)
        {
            af_data = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData>();
        }
        return af_data;
    }

    if(child_yang_name == "topology-name")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName>();
        c->parent = this;
        topology_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_data != nullptr)
    {
        children["af-data"] = af_data;
    }

    count = 0;
    for (auto c : topology_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-data" || name == "topology-name" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::AfData()
    :
    maximum_paths{YType::uint32, "maximum-paths"},
    topology_id{YType::uint32, "topology-id"},
    single_topology{YType::empty, "single-topology"},
    adjacency_check{YType::enumeration, "adjacency-check"},
    advertise_link_attributes{YType::boolean, "advertise-link-attributes"},
    apply_weight{YType::enumeration, "apply-weight"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    advertise_passive_only{YType::empty, "advertise-passive-only"},
    ignore_attached_bit{YType::boolean, "ignore-attached-bit"},
    attached_bit{YType::enumeration, "attached-bit"},
    route_source_first_hop{YType::boolean, "route-source-first-hop"}
        ,
    segment_routing(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting>())
    , metric_styles(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles>())
    , frr_table(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable>())
    , router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::RouterId>())
    , spf_prefix_priorities(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities>())
    , summary_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes>())
    , micro_loop_avoidance(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance>())
    , ucmp(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp>())
    , max_redist_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes>())
    , propagations(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations>())
    , redistributions(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions>())
    , application_tables(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables>())
    , spf_periodic_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals>())
    , distribute_list_in(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn>())
    , spf_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals>())
    , monitor_convergence(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence>())
    , default_information(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation>())
    , admin_distances(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances>())
    , ispf(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf>())
    , mpls_ldp_global(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal>())
    , mpls(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls>())
    , manual_adj_sids(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids>())
    , metrics(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics>())
    , weights(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights>())
{
    segment_routing->parent = this;
    metric_styles->parent = this;
    frr_table->parent = this;
    router_id->parent = this;
    spf_prefix_priorities->parent = this;
    summary_prefixes->parent = this;
    micro_loop_avoidance->parent = this;
    ucmp->parent = this;
    max_redist_prefixes->parent = this;
    propagations->parent = this;
    redistributions->parent = this;
    application_tables->parent = this;
    spf_periodic_intervals->parent = this;
    distribute_list_in->parent = this;
    spf_intervals->parent = this;
    monitor_convergence->parent = this;
    default_information->parent = this;
    admin_distances->parent = this;
    ispf->parent = this;
    mpls_ldp_global->parent = this;
    mpls->parent = this;
    manual_adj_sids->parent = this;
    metrics->parent = this;
    weights->parent = this;

    yang_name = "af-data"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Afs::Af::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set
	|| topology_id.is_set
	|| single_topology.is_set
	|| adjacency_check.is_set
	|| advertise_link_attributes.is_set
	|| apply_weight.is_set
	|| default_admin_distance.is_set
	|| advertise_passive_only.is_set
	|| ignore_attached_bit.is_set
	|| attached_bit.is_set
	|| route_source_first_hop.is_set
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (metric_styles !=  nullptr && metric_styles->has_data())
	|| (frr_table !=  nullptr && frr_table->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_data())
	|| (propagations !=  nullptr && propagations->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (application_tables !=  nullptr && application_tables->has_data())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_data())
	|| (distribute_list_in !=  nullptr && distribute_list_in->has_data())
	|| (spf_intervals !=  nullptr && spf_intervals->has_data())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (admin_distances !=  nullptr && admin_distances->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(single_topology.yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(advertise_link_attributes.yfilter)
	|| ydk::is_set(apply_weight.yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(ignore_attached_bit.yfilter)
	|| ydk::is_set(attached_bit.yfilter)
	|| ydk::is_set(route_source_first_hop.yfilter)
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (metric_styles !=  nullptr && metric_styles->has_operation())
	|| (frr_table !=  nullptr && frr_table->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_operation())
	|| (propagations !=  nullptr && propagations->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (application_tables !=  nullptr && application_tables->has_operation())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_operation())
	|| (distribute_list_in !=  nullptr && distribute_list_in->has_operation())
	|| (spf_intervals !=  nullptr && spf_intervals->has_operation())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (admin_distances !=  nullptr && admin_distances->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (single_topology.is_set || is_set(single_topology.yfilter)) leaf_name_data.push_back(single_topology.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (advertise_link_attributes.is_set || is_set(advertise_link_attributes.yfilter)) leaf_name_data.push_back(advertise_link_attributes.get_name_leafdata());
    if (apply_weight.is_set || is_set(apply_weight.yfilter)) leaf_name_data.push_back(apply_weight.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.yfilter)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (attached_bit.is_set || is_set(attached_bit.yfilter)) leaf_name_data.push_back(attached_bit.get_name_leafdata());
    if (route_source_first_hop.is_set || is_set(route_source_first_hop.yfilter)) leaf_name_data.push_back(route_source_first_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "metric-styles")
    {
        if(metric_styles == nullptr)
        {
            metric_styles = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles>();
        }
        return metric_styles;
    }

    if(child_yang_name == "frr-table")
    {
        if(frr_table == nullptr)
        {
            frr_table = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable>();
        }
        return frr_table;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "spf-prefix-priorities")
    {
        if(spf_prefix_priorities == nullptr)
        {
            spf_prefix_priorities = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities>();
        }
        return spf_prefix_priorities;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "micro-loop-avoidance")
    {
        if(micro_loop_avoidance == nullptr)
        {
            micro_loop_avoidance = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance>();
        }
        return micro_loop_avoidance;
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp == nullptr)
        {
            ucmp = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp>();
        }
        return ucmp;
    }

    if(child_yang_name == "max-redist-prefixes")
    {
        if(max_redist_prefixes == nullptr)
        {
            max_redist_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes>();
        }
        return max_redist_prefixes;
    }

    if(child_yang_name == "propagations")
    {
        if(propagations == nullptr)
        {
            propagations = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations>();
        }
        return propagations;
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions == nullptr)
        {
            redistributions = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions>();
        }
        return redistributions;
    }

    if(child_yang_name == "application-tables")
    {
        if(application_tables == nullptr)
        {
            application_tables = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables>();
        }
        return application_tables;
    }

    if(child_yang_name == "spf-periodic-intervals")
    {
        if(spf_periodic_intervals == nullptr)
        {
            spf_periodic_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals>();
        }
        return spf_periodic_intervals;
    }

    if(child_yang_name == "distribute-list-in")
    {
        if(distribute_list_in == nullptr)
        {
            distribute_list_in = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn>();
        }
        return distribute_list_in;
    }

    if(child_yang_name == "spf-intervals")
    {
        if(spf_intervals == nullptr)
        {
            spf_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals>();
        }
        return spf_intervals;
    }

    if(child_yang_name == "monitor-convergence")
    {
        if(monitor_convergence == nullptr)
        {
            monitor_convergence = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence>();
        }
        return monitor_convergence;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "admin-distances")
    {
        if(admin_distances == nullptr)
        {
            admin_distances = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances>();
        }
        return admin_distances;
    }

    if(child_yang_name == "ispf")
    {
        if(ispf == nullptr)
        {
            ispf = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf>();
        }
        return ispf;
    }

    if(child_yang_name == "mpls-ldp-global")
    {
        if(mpls_ldp_global == nullptr)
        {
            mpls_ldp_global = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal>();
        }
        return mpls_ldp_global;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "manual-adj-sids")
    {
        if(manual_adj_sids == nullptr)
        {
            manual_adj_sids = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids>();
        }
        return manual_adj_sids;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "weights")
    {
        if(weights == nullptr)
        {
            weights = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights>();
        }
        return weights;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(metric_styles != nullptr)
    {
        children["metric-styles"] = metric_styles;
    }

    if(frr_table != nullptr)
    {
        children["frr-table"] = frr_table;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(spf_prefix_priorities != nullptr)
    {
        children["spf-prefix-priorities"] = spf_prefix_priorities;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    if(micro_loop_avoidance != nullptr)
    {
        children["micro-loop-avoidance"] = micro_loop_avoidance;
    }

    if(ucmp != nullptr)
    {
        children["ucmp"] = ucmp;
    }

    if(max_redist_prefixes != nullptr)
    {
        children["max-redist-prefixes"] = max_redist_prefixes;
    }

    if(propagations != nullptr)
    {
        children["propagations"] = propagations;
    }

    if(redistributions != nullptr)
    {
        children["redistributions"] = redistributions;
    }

    if(application_tables != nullptr)
    {
        children["application-tables"] = application_tables;
    }

    if(spf_periodic_intervals != nullptr)
    {
        children["spf-periodic-intervals"] = spf_periodic_intervals;
    }

    if(distribute_list_in != nullptr)
    {
        children["distribute-list-in"] = distribute_list_in;
    }

    if(spf_intervals != nullptr)
    {
        children["spf-intervals"] = spf_intervals;
    }

    if(monitor_convergence != nullptr)
    {
        children["monitor-convergence"] = monitor_convergence;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(admin_distances != nullptr)
    {
        children["admin-distances"] = admin_distances;
    }

    if(ispf != nullptr)
    {
        children["ispf"] = ispf;
    }

    if(mpls_ldp_global != nullptr)
    {
        children["mpls-ldp-global"] = mpls_ldp_global;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(manual_adj_sids != nullptr)
    {
        children["manual-adj-sids"] = manual_adj_sids;
    }

    if(metrics != nullptr)
    {
        children["metrics"] = metrics;
    }

    if(weights != nullptr)
    {
        children["weights"] = weights;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-topology")
    {
        single_topology = value;
        single_topology.value_namespace = name_space;
        single_topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes = value;
        advertise_link_attributes.value_namespace = name_space;
        advertise_link_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-weight")
    {
        apply_weight = value;
        apply_weight.value_namespace = name_space;
        apply_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
        ignore_attached_bit.value_namespace = name_space;
        ignore_attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-bit")
    {
        attached_bit = value;
        attached_bit.value_namespace = name_space;
        attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop = value;
        route_source_first_hop.value_namespace = name_space;
        route_source_first_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "single-topology")
    {
        single_topology.yfilter = yfilter;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes.yfilter = yfilter;
    }
    if(value_path == "apply-weight")
    {
        apply_weight.yfilter = yfilter;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit.yfilter = yfilter;
    }
    if(value_path == "attached-bit")
    {
        attached_bit.yfilter = yfilter;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing" || name == "metric-styles" || name == "frr-table" || name == "router-id" || name == "spf-prefix-priorities" || name == "summary-prefixes" || name == "micro-loop-avoidance" || name == "ucmp" || name == "max-redist-prefixes" || name == "propagations" || name == "redistributions" || name == "application-tables" || name == "spf-periodic-intervals" || name == "distribute-list-in" || name == "spf-intervals" || name == "monitor-convergence" || name == "default-information" || name == "admin-distances" || name == "ispf" || name == "mpls-ldp-global" || name == "mpls" || name == "manual-adj-sids" || name == "metrics" || name == "weights" || name == "maximum-paths" || name == "topology-id" || name == "single-topology" || name == "adjacency-check" || name == "advertise-link-attributes" || name == "apply-weight" || name == "default-admin-distance" || name == "advertise-passive-only" || name == "ignore-attached-bit" || name == "attached-bit" || name == "route-source-first-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::SegmentRouting()
    :
    bundle_member_adj_sid{YType::empty, "bundle-member-adj-sid"},
    mpls{YType::enumeration, "mpls"},
    srv6{YType::empty, "srv6"}
        ,
    prefix_sid_map(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::~SegmentRouting()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return bundle_member_adj_sid.is_set
	|| mpls.is_set
	|| srv6.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_member_adj_sid.yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| ydk::is_set(srv6.yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_member_adj_sid.is_set || is_set(bundle_member_adj_sid.yfilter)) leaf_name_data.push_back(bundle_member_adj_sid.get_name_leafdata());
    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());
    if (srv6.is_set || is_set(srv6.yfilter)) leaf_name_data.push_back(srv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-member-adj-sid")
    {
        bundle_member_adj_sid = value;
        bundle_member_adj_sid.value_namespace = name_space;
        bundle_member_adj_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6")
    {
        srv6 = value;
        srv6.value_namespace = name_space;
        srv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-member-adj-sid")
    {
        bundle_member_adj_sid.yfilter = yfilter;
    }
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
    if(value_path == "srv6")
    {
        srv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map" || name == "bundle-member-adj-sid" || name == "mpls" || name == "srv6")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"},
    receive{YType::boolean, "receive"}
{

    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::has_data() const
{
    if (is_presence_container) return true;
    return advertise_local.is_set
	|| receive.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_local.yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.yfilter)) leaf_name_data.push_back(advertise_local.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
        advertise_local.value_namespace = name_space;
        advertise_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-local")
    {
        advertise_local.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-local" || name == "receive")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyles()
    :
    metric_style(this, {"level"})
{

    yang_name = "metric-styles"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::~MetricStyles()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_style.len(); index++)
    {
        if(metric_style[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::has_operation() const
{
    for (std::size_t index=0; index<metric_style.len(); index++)
    {
        if(metric_style[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-styles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-style")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle>();
        c->parent = this;
        metric_style.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metric_style.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-style")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::MetricStyle()
    :
    level{YType::enumeration, "level"},
    style{YType::enumeration, "style"}
{

    yang_name = "metric-style"; yang_parent_name = "metric-styles"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::~MetricStyle()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| style.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(style.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (style.is_set || is_set(style.yfilter)) leaf_name_data.push_back(style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "style")
    {
        style = value;
        style.value_namespace = name_space;
        style.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "style")
    {
        style.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "style")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTable()
    :
    frr_initial_delay{YType::uint32, "frr-initial-delay"}
        ,
    frr_load_sharings(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings>())
    , frrsrlg_protection_types(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes>())
    , priority_limits(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits>())
    , frr_remote_lfa_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes>())
    , frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers>())
    , frr_use_cand_onlies(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies>())
{
    frr_load_sharings->parent = this;
    frrsrlg_protection_types->parent = this;
    priority_limits->parent = this;
    frr_remote_lfa_prefixes->parent = this;
    frr_tiebreakers->parent = this;
    frr_use_cand_onlies->parent = this;

    yang_name = "frr-table"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::~FrrTable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::has_data() const
{
    if (is_presence_container) return true;
    return frr_initial_delay.is_set
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_data())
	|| (frrsrlg_protection_types !=  nullptr && frrsrlg_protection_types->has_data())
	|| (priority_limits !=  nullptr && priority_limits->has_data())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_data())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_data())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_initial_delay.yfilter)
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_operation())
	|| (frrsrlg_protection_types !=  nullptr && frrsrlg_protection_types->has_operation())
	|| (priority_limits !=  nullptr && priority_limits->has_operation())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_operation())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_operation())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_initial_delay.is_set || is_set(frr_initial_delay.yfilter)) leaf_name_data.push_back(frr_initial_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-load-sharings")
    {
        if(frr_load_sharings == nullptr)
        {
            frr_load_sharings = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings>();
        }
        return frr_load_sharings;
    }

    if(child_yang_name == "frrsrlg-protection-types")
    {
        if(frrsrlg_protection_types == nullptr)
        {
            frrsrlg_protection_types = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes>();
        }
        return frrsrlg_protection_types;
    }

    if(child_yang_name == "priority-limits")
    {
        if(priority_limits == nullptr)
        {
            priority_limits = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits>();
        }
        return priority_limits;
    }

    if(child_yang_name == "frr-remote-lfa-prefixes")
    {
        if(frr_remote_lfa_prefixes == nullptr)
        {
            frr_remote_lfa_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes>();
        }
        return frr_remote_lfa_prefixes;
    }

    if(child_yang_name == "frr-tiebreakers")
    {
        if(frr_tiebreakers == nullptr)
        {
            frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers>();
        }
        return frr_tiebreakers;
    }

    if(child_yang_name == "frr-use-cand-onlies")
    {
        if(frr_use_cand_onlies == nullptr)
        {
            frr_use_cand_onlies = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies>();
        }
        return frr_use_cand_onlies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_load_sharings != nullptr)
    {
        children["frr-load-sharings"] = frr_load_sharings;
    }

    if(frrsrlg_protection_types != nullptr)
    {
        children["frrsrlg-protection-types"] = frrsrlg_protection_types;
    }

    if(priority_limits != nullptr)
    {
        children["priority-limits"] = priority_limits;
    }

    if(frr_remote_lfa_prefixes != nullptr)
    {
        children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
    }

    if(frr_tiebreakers != nullptr)
    {
        children["frr-tiebreakers"] = frr_tiebreakers;
    }

    if(frr_use_cand_onlies != nullptr)
    {
        children["frr-use-cand-onlies"] = frr_use_cand_onlies;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-initial-delay")
    {
        frr_initial_delay = value;
        frr_initial_delay.value_namespace = name_space;
        frr_initial_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-initial-delay")
    {
        frr_initial_delay.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-load-sharings" || name == "frrsrlg-protection-types" || name == "priority-limits" || name == "frr-remote-lfa-prefixes" || name == "frr-tiebreakers" || name == "frr-use-cand-onlies" || name == "frr-initial-delay")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharings()
    :
    frr_load_sharing(this, {"level"})
{

    yang_name = "frr-load-sharings"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::~FrrLoadSharings()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_load_sharing.len(); index++)
    {
        if(frr_load_sharing[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::has_operation() const
{
    for (std::size_t index=0; index<frr_load_sharing.len(); index++)
    {
        if(frr_load_sharing[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-load-sharing")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing>();
        c->parent = this;
        frr_load_sharing.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_load_sharing.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-load-sharing")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::FrrLoadSharing()
    :
    level{YType::enumeration, "level"},
    load_sharing{YType::enumeration, "load-sharing"}
{

    yang_name = "frr-load-sharing"; yang_parent_name = "frr-load-sharings"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::~FrrLoadSharing()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| load_sharing.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(load_sharing.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharing";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "load-sharing")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionTypes()
    :
    frrsrlg_protection_type(this, {"level"})
{

    yang_name = "frrsrlg-protection-types"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::~FrrsrlgProtectionTypes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrsrlg_protection_type.len(); index++)
    {
        if(frrsrlg_protection_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::has_operation() const
{
    for (std::size_t index=0; index<frrsrlg_protection_type.len(); index++)
    {
        if(frrsrlg_protection_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrsrlg-protection-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrsrlg-protection-type")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType>();
        c->parent = this;
        frrsrlg_protection_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frrsrlg_protection_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrsrlg-protection-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::FrrsrlgProtectionType()
    :
    level{YType::enumeration, "level"},
    protection_type{YType::enumeration, "protection-type"}
{

    yang_name = "frrsrlg-protection-type"; yang_parent_name = "frrsrlg-protection-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::~FrrsrlgProtectionType()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| protection_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(protection_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrsrlg-protection-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "protection-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimits()
    :
    priority_limit(this, {"level"})
{

    yang_name = "priority-limits"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::~PriorityLimits()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_limit.len(); index++)
    {
        if(priority_limit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::has_operation() const
{
    for (std::size_t index=0; index<priority_limit.len(); index++)
    {
        if(priority_limit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-limit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit>();
        c->parent = this;
        priority_limit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : priority_limit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-limit")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimit()
    :
    level{YType::enumeration, "level"}
        ,
    priority_limit_data(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData>())
    , frr_type(this, {"frr_type"})
{
    priority_limit_data->parent = this;

    yang_name = "priority-limit"; yang_parent_name = "priority-limits"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::~PriorityLimit()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return level.is_set
	|| (priority_limit_data !=  nullptr && priority_limit_data->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::has_operation() const
{
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (priority_limit_data !=  nullptr && priority_limit_data->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-limit-data")
    {
        if(priority_limit_data == nullptr)
        {
            priority_limit_data = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData>();
        }
        return priority_limit_data;
    }

    if(child_yang_name == "frr-type")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType>();
        c->parent = this;
        frr_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority_limit_data != nullptr)
    {
        children["priority-limit-data"] = priority_limit_data;
    }

    count = 0;
    for (auto c : frr_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-limit-data" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::PriorityLimitData()
    :
    priority{YType::enumeration, "priority"}
{

    yang_name = "priority-limit-data"; yang_parent_name = "priority-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::~PriorityLimitData()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::FrrType()
    :
    frr_type{YType::enumeration, "frr-type"},
    priority{YType::enumeration, "priority"}
{

    yang_name = "frr-type"; yang_parent_name = "priority-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_data() const
{
    if (is_presence_container) return true;
    return frr_type.is_set
	|| priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type";
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type" || name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefixes()
    :
    frr_remote_lfa_prefix(this, {"level"})
{

    yang_name = "frr-remote-lfa-prefixes"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::~FrrRemoteLfaPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_prefix.len(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.len(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix>();
        c->parent = this;
        frr_remote_lfa_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_remote_lfa_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::FrrRemoteLfaPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "frr-remote-lfa-prefix"; yang_parent_name = "frr-remote-lfa-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::~FrrRemoteLfaPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefix";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreakers()
    :
    frr_tiebreaker(this, {"level", "tiebreaker"})
{

    yang_name = "frr-tiebreakers"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::~FrrTiebreakers()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tiebreaker.len(); index++)
    {
        if(frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<frr_tiebreaker.len(); index++)
    {
        if(frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tiebreaker")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker>();
        c->parent = this;
        frr_tiebreaker.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_tiebreaker.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::FrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "frr-tiebreaker"; yang_parent_name = "frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::~FrrTiebreaker()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreaker";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(tiebreaker, "tiebreaker");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnlies()
    :
    frr_use_cand_only(this, {"level", "frr_type"})
{

    yang_name = "frr-use-cand-onlies"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::~FrrUseCandOnlies()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_use_cand_only.len(); index++)
    {
        if(frr_use_cand_only[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::has_operation() const
{
    for (std::size_t index=0; index<frr_use_cand_only.len(); index++)
    {
        if(frr_use_cand_only[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-onlies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-use-cand-only")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly>();
        c->parent = this;
        frr_use_cand_only.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_use_cand_only.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-use-cand-only")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::FrrUseCandOnly()
    :
    level{YType::enumeration, "level"},
    frr_type{YType::enumeration, "frr-type"}
{

    yang_name = "frr-use-cand-only"; yang_parent_name = "frr-use-cand-onlies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::~FrrUseCandOnly()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| frr_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(frr_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-only";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "router-id"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriorities()
    :
    spf_prefix_priority(this, {"level", "prefix_priority_type"})
{

    yang_name = "spf-prefix-priorities"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::~SpfPrefixPriorities()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_prefix_priority.len(); index++)
    {
        if(spf_prefix_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::has_operation() const
{
    for (std::size_t index=0; index<spf_prefix_priority.len(); index++)
    {
        if(spf_prefix_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priorities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-prefix-priority")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority>();
        c->parent = this;
        spf_prefix_priority.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_prefix_priority.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-prefix-priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::SpfPrefixPriority()
    :
    level{YType::enumeration, "level"},
    prefix_priority_type{YType::enumeration, "prefix-priority-type"},
    admin_tag{YType::uint32, "admin-tag"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "spf-prefix-priority"; yang_parent_name = "spf-prefix-priorities"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::~SpfPrefixPriority()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_priority_type.is_set
	|| admin_tag.is_set
	|| access_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_priority_type.yfilter)
	|| ydk::is_set(admin_tag.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priority";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(prefix_priority_type, "prefix-priority-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_priority_type.is_set || is_set(prefix_priority_type.yfilter)) leaf_name_data.push_back(prefix_priority_type.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.yfilter)) leaf_name_data.push_back(admin_tag.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type = value;
        prefix_priority_type.value_namespace = name_space;
        prefix_priority_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
        admin_tag.value_namespace = name_space;
        admin_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type.yfilter = yfilter;
    }
    if(value_path == "admin-tag")
    {
        admin_tag.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-priority-type" || name == "admin-tag" || name == "access-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefixes()
    :
    summary_prefix(this, {"address_prefix"})
{

    yang_name = "summary-prefixes"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : summary_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    address_prefix{YType::str, "address-prefix"},
    tag{YType::uint32, "tag"},
    level{YType::uint32, "level"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::has_data() const
{
    if (is_presence_container) return true;
    return address_prefix.is_set
	|| tag.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    ADD_KEY_TOKEN(address_prefix, "address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix" || name == "tag" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::MicroLoopAvoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "micro-loop-avoidance"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::~MicroLoopAvoidance()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "micro-loop-avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "rib-update-delay")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
        ,
    enable(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable>())
    , exclude_interfaces(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "ucmp"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::~Ucmp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::has_data() const
{
    if (is_presence_container) return true;
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_interval.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.yfilter)) leaf_name_data.push_back(delay_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
        delay_interval.value_namespace = name_space;
        delay_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-interval")
    {
        delay_interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "exclude-interfaces" || name == "delay-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::Enable()
    :
    variance{YType::uint32, "variance"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "enable"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::~Enable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::has_data() const
{
    if (is_presence_container) return true;
    return variance.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(variance.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variance" || name == "prefix-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
    :
    exclude_interface(this, {"interface_name"})
{

    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exclude_interface.len(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.len(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : exclude_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefixes()
    :
    max_redist_prefix(this, {"level"})
{

    yang_name = "max-redist-prefixes"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::~MaxRedistPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<max_redist_prefix.len(); index++)
    {
        if(max_redist_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::has_operation() const
{
    for (std::size_t index=0; index<max_redist_prefix.len(); index++)
    {
        if(max_redist_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-redist-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix>();
        c->parent = this;
        max_redist_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : max_redist_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-redist-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::MaxRedistPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_limit{YType::uint32, "prefix-limit"}
{

    yang_name = "max-redist-prefix"; yang_parent_name = "max-redist-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::~MaxRedistPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_limit.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_limit.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefix";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-limit")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagations()
    :
    propagation(this, {"source_level", "destination_level"})
{

    yang_name = "propagations"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::~Propagations()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<propagation.len(); index++)
    {
        if(propagation[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::has_operation() const
{
    for (std::size_t index=0; index<propagation.len(); index++)
    {
        if(propagation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "propagation")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation>();
        c->parent = this;
        propagation.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : propagation.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagation")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::Propagation()
    :
    source_level{YType::enumeration, "source-level"},
    destination_level{YType::enumeration, "destination-level"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "propagation"; yang_parent_name = "propagations"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::~Propagation()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::has_data() const
{
    if (is_presence_container) return true;
    return source_level.is_set
	|| destination_level.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_level.yfilter)
	|| ydk::is_set(destination_level.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagation";
    ADD_KEY_TOKEN(source_level, "source-level");
    ADD_KEY_TOKEN(destination_level, "destination-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_level.is_set || is_set(source_level.yfilter)) leaf_name_data.push_back(source_level.get_name_leafdata());
    if (destination_level.is_set || is_set(destination_level.yfilter)) leaf_name_data.push_back(destination_level.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-level")
    {
        source_level = value;
        source_level.value_namespace = name_space;
        source_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-level")
    {
        destination_level = value;
        destination_level.value_namespace = name_space;
        destination_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-level")
    {
        source_level.yfilter = yfilter;
    }
    if(value_path == "destination-level")
    {
        destination_level.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-level" || name == "destination-level" || name == "route-policy-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistributions()
    :
    redistribution(this, {"protocol_name"})
{

    yang_name = "redistributions"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::~Redistributions()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redistribution.len(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.len(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : redistribution.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Redistribution()
    :
    protocol_name{YType::enumeration, "protocol-name"}
        ,
    connected_or_static_or_rip_or_subscriber_or_mobile(nullptr) // presence node
    , ospf_or_ospfv3_or_isis_or_application(this, {"instance_name"})
    , bgp(this, {"as_xx", "as_yy"})
    , eigrp(this, {"as_zz"})
{

    yang_name = "redistribution"; yang_parent_name = "redistributions"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::~Redistribution()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.len(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::has_operation() const
{
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.len(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-or-static-or-rip-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile == nullptr)
        {
            connected_or_static_or_rip_or_subscriber_or_mobile = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile>();
        }
        return connected_or_static_or_rip_or_subscriber_or_mobile;
    }

    if(child_yang_name == "ospf-or-ospfv3-or-isis-or-application")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication>();
        c->parent = this;
        ospf_or_ospfv3_or_isis_or_application.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp>();
        c->parent = this;
        bgp.append(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp>();
        c->parent = this;
        eigrp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
    {
        children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
    }

    count = 0;
    for (auto c : ospf_or_ospfv3_or_isis_or_application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : bgp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : eigrp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-or-static-or-rip-or-subscriber-or-mobile" || name == "ospf-or-ospfv3-or-isis-or-application" || name == "bgp" || name == "eigrp" || name == "protocol-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::ConnectedOrStaticOrRipOrSubscriberOrMobile()
    :
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "connected-or-static-or-rip-or-subscriber-or-mobile"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::~ConnectedOrStaticOrRipOrSubscriberOrMobile()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-rip-or-subscriber-or-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::OspfOrOspfv3OrIsisOrApplication()
    :
    instance_name{YType::str, "instance-name"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "ospf-or-ospfv3-or-isis-or-application"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::~OspfOrOspfv3OrIsisOrApplication()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-or-ospfv3-or-isis-or-application";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "bgp"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::~Bgp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::Eigrp()
    :
    as_zz{YType::uint32, "as-zz"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::~Eigrp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_zz.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_zz.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_zz, "as-zz");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_zz.is_set || is_set(as_zz.yfilter)) leaf_name_data.push_back(as_zz.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-zz")
    {
        as_zz = value;
        as_zz.value_namespace = name_space;
        as_zz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-zz")
    {
        as_zz.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-zz" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTables()
    :
    application_table(this, {"app_type"})
{

    yang_name = "application-tables"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::~ApplicationTables()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_table.len(); index++)
    {
        if(application_table[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::has_operation() const
{
    for (std::size_t index=0; index<application_table.len(); index++)
    {
        if(application_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-table")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable>();
        c->parent = this;
        application_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-table")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::ApplicationTable()
    :
    app_type{YType::enumeration, "app-type"}
        ,
    attribute_table(this, {"app_type"})
{

    yang_name = "application-table"; yang_parent_name = "application-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::~ApplicationTable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_table.len(); index++)
    {
        if(attribute_table[index]->has_data())
            return true;
    }
    return app_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::has_operation() const
{
    for (std::size_t index=0; index<attribute_table.len(); index++)
    {
        if(attribute_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-table";
    ADD_KEY_TOKEN(app_type, "app-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-table")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable>();
        c->parent = this;
        attribute_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attribute_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-table" || name == "app-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::AttributeTable()
    :
    app_type{YType::enumeration, "app-type"},
    enable{YType::boolean, "enable"}
{

    yang_name = "attribute-table"; yang_parent_name = "application-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::~AttributeTable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::has_data() const
{
    if (is_presence_container) return true;
    return app_type.is_set
	|| enable.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-table";
    ADD_KEY_TOKEN(app_type, "app-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "enable")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicIntervals()
    :
    spf_periodic_interval(this, {"level"})
{

    yang_name = "spf-periodic-intervals"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::~SpfPeriodicIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_periodic_interval.len(); index++)
    {
        if(spf_periodic_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_periodic_interval.len(); index++)
    {
        if(spf_periodic_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-periodic-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval>();
        c->parent = this;
        spf_periodic_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_periodic_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-periodic-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::SpfPeriodicInterval()
    :
    level{YType::enumeration, "level"},
    periodic_interval{YType::uint32, "periodic-interval"}
{

    yang_name = "spf-periodic-interval"; yang_parent_name = "spf-periodic-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::~SpfPeriodicInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| periodic_interval.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(periodic_interval.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "periodic-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::DistributeListIn()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list-in"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::~DistributeListIn()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfIntervals()
    :
    spf_interval(this, {"level"})
{

    yang_name = "spf-intervals"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::~SpfIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_interval.len(); index++)
    {
        if(spf_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_interval.len(); index++)
    {
        if(spf_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval>();
        c->parent = this;
        spf_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::SpfInterval()
    :
    level{YType::enumeration, "level"},
    maximum_wait{YType::uint32, "maximum-wait"},
    initial_wait{YType::uint32, "initial-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "spf-interval"; yang_parent_name = "spf-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::~SpfInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| maximum_wait.is_set
	|| initial_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "maximum-wait" || name == "initial-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::MonitorConvergence()
    :
    enable{YType::empty, "enable"},
    track_ip_frr{YType::empty, "track-ip-frr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "monitor-convergence"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::~MonitorConvergence()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| track_ip_frr.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(track_ip_frr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (track_ip_frr.is_set || is_set(track_ip_frr.yfilter)) leaf_name_data.push_back(track_ip_frr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr = value;
        track_ip_frr.value_namespace = name_space;
        track_ip_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "track-ip-frr" || name == "prefix-list")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::DefaultInformation()
    :
    use_policy{YType::boolean, "use-policy"},
    policy_name{YType::str, "policy-name"},
    external{YType::empty, "external"}
{

    yang_name = "default-information"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::~DefaultInformation()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return use_policy.is_set
	|| policy_name.is_set
	|| external.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_policy.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_policy.is_set || is_set(use_policy.yfilter)) leaf_name_data.push_back(use_policy.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-policy")
    {
        use_policy = value;
        use_policy.value_namespace = name_space;
        use_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-policy")
    {
        use_policy.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-policy" || name == "policy-name" || name == "external")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistances()
    :
    admin_distance(this, {"address_prefix"})
{

    yang_name = "admin-distances"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::~AdminDistances()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_distance.len(); index++)
    {
        if(admin_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::has_operation() const
{
    for (std::size_t index=0; index<admin_distance.len(); index++)
    {
        if(admin_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-distance")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance>();
        c->parent = this;
        admin_distance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : admin_distance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::AdminDistance()
    :
    address_prefix{YType::str, "address-prefix"},
    distance{YType::uint32, "distance"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "admin-distance"; yang_parent_name = "admin-distances"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::~AdminDistance()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::has_data() const
{
    if (is_presence_container) return true;
    return address_prefix.is_set
	|| distance.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance";
    ADD_KEY_TOKEN(address_prefix, "address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix" || name == "distance" || name == "prefix-list")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::Ispf()
    :
    states(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States>())
{
    states->parent = this;

    yang_name = "ispf"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::~Ispf()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::has_data() const
{
    if (is_presence_container) return true;
    return (states !=  nullptr && states->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::has_operation() const
{
    return is_set(yfilter)
	|| (states !=  nullptr && states->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "states")
    {
        if(states == nullptr)
        {
            states = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States>();
        }
        return states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(states != nullptr)
    {
        children["states"] = states;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "states")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::States()
    :
    state(this, {"level"})
{

    yang_name = "states"; yang_parent_name = "ispf"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::~States()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<state.len(); index++)
    {
        if(state[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::has_operation() const
{
    for (std::size_t index=0; index<state.len(); index++)
    {
        if(state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State>();
        c->parent = this;
        state.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : state.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::State()
    :
    level{YType::enumeration, "level"},
    state{YType::enumeration, "state"}
{

    yang_name = "state"; yang_parent_name = "states"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::~State()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "state")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::MplsLdpGlobal()
    :
    auto_config{YType::boolean, "auto-config"}
{

    yang_name = "mpls-ldp-global"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::~MplsLdpGlobal()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return auto_config.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_config.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.yfilter)) leaf_name_data.push_back(auto_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
        auto_config.value_namespace = name_space;
        auto_config.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-config")
    {
        auto_config.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-config")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::Mpls()
    :
    igp_intact{YType::empty, "igp-intact"},
    multicast_intact{YType::empty, "multicast-intact"}
        ,
    router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId>())
    , level(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level>())
{
    router_id->parent = this;
    level->parent = this;

    yang_name = "mpls"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::~Mpls()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return igp_intact.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_intact.yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_intact.is_set || is_set(igp_intact.yfilter)) leaf_name_data.push_back(igp_intact.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-intact")
    {
        igp_intact = value;
        igp_intact.value_namespace = name_space;
        igp_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-intact")
    {
        igp_intact.yfilter = yfilter;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "level" || name == "igp-intact" || name == "multicast-intact")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "router-id"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::Level()
    :
    level1{YType::boolean, "level1"},
    level2{YType::boolean, "level2"}
{

    yang_name = "level"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::~Level()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::has_data() const
{
    if (is_presence_container) return true;
    return level1.is_set
	|| level2.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level1.yfilter)
	|| ydk::is_set(level2.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level1.is_set || is_set(level1.yfilter)) leaf_name_data.push_back(level1.get_name_leafdata());
    if (level2.is_set || is_set(level2.yfilter)) leaf_name_data.push_back(level2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level1")
    {
        level1 = value;
        level1.value_namespace = name_space;
        level1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2")
    {
        level2 = value;
        level2.value_namespace = name_space;
        level2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level1")
    {
        level1.yfilter = yfilter;
    }
    if(value_path == "level2")
    {
        level2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1" || name == "level2")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSids()
    :
    manual_adj_sid(this, {"level", "sid_type", "sid"})
{

    yang_name = "manual-adj-sids"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : manual_adj_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(sid_type, "sid-type");
    ADD_KEY_TOKEN(sid, "sid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metrics()
    :
    metric(this, {"level"})
{

    yang_name = "metrics"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric>();
        c->parent = this;
        metric.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metric.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weights()
    :
    weight(this, {"level"})
{

    yang_name = "weights"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight>();
        c->parent = this;
        weight.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : weight.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::TopologyName()
    :
    topology_name{YType::str, "topology-name"},
    maximum_paths{YType::uint32, "maximum-paths"},
    topology_id{YType::uint32, "topology-id"},
    single_topology{YType::empty, "single-topology"},
    adjacency_check{YType::enumeration, "adjacency-check"},
    advertise_link_attributes{YType::boolean, "advertise-link-attributes"},
    apply_weight{YType::enumeration, "apply-weight"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    advertise_passive_only{YType::empty, "advertise-passive-only"},
    ignore_attached_bit{YType::boolean, "ignore-attached-bit"},
    attached_bit{YType::enumeration, "attached-bit"},
    route_source_first_hop{YType::boolean, "route-source-first-hop"}
        ,
    segment_routing(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting>())
    , metric_styles(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles>())
    , frr_table(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable>())
    , router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::RouterId>())
    , spf_prefix_priorities(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities>())
    , summary_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes>())
    , micro_loop_avoidance(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance>())
    , ucmp(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp>())
    , max_redist_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes>())
    , propagations(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations>())
    , redistributions(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions>())
    , application_tables(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables>())
    , spf_periodic_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals>())
    , distribute_list_in(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn>())
    , spf_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals>())
    , monitor_convergence(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence>())
    , default_information(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation>())
    , admin_distances(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances>())
    , ispf(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf>())
    , mpls_ldp_global(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal>())
    , mpls(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls>())
    , manual_adj_sids(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids>())
    , metrics(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics>())
    , weights(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights>())
{
    segment_routing->parent = this;
    metric_styles->parent = this;
    frr_table->parent = this;
    router_id->parent = this;
    spf_prefix_priorities->parent = this;
    summary_prefixes->parent = this;
    micro_loop_avoidance->parent = this;
    ucmp->parent = this;
    max_redist_prefixes->parent = this;
    propagations->parent = this;
    redistributions->parent = this;
    application_tables->parent = this;
    spf_periodic_intervals->parent = this;
    distribute_list_in->parent = this;
    spf_intervals->parent = this;
    monitor_convergence->parent = this;
    default_information->parent = this;
    admin_distances->parent = this;
    ispf->parent = this;
    mpls_ldp_global->parent = this;
    mpls->parent = this;
    manual_adj_sids->parent = this;
    metrics->parent = this;
    weights->parent = this;

    yang_name = "topology-name"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::~TopologyName()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::has_data() const
{
    if (is_presence_container) return true;
    return topology_name.is_set
	|| maximum_paths.is_set
	|| topology_id.is_set
	|| single_topology.is_set
	|| adjacency_check.is_set
	|| advertise_link_attributes.is_set
	|| apply_weight.is_set
	|| default_admin_distance.is_set
	|| advertise_passive_only.is_set
	|| ignore_attached_bit.is_set
	|| attached_bit.is_set
	|| route_source_first_hop.is_set
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (metric_styles !=  nullptr && metric_styles->has_data())
	|| (frr_table !=  nullptr && frr_table->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_data())
	|| (propagations !=  nullptr && propagations->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (application_tables !=  nullptr && application_tables->has_data())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_data())
	|| (distribute_list_in !=  nullptr && distribute_list_in->has_data())
	|| (spf_intervals !=  nullptr && spf_intervals->has_data())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (admin_distances !=  nullptr && admin_distances->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(single_topology.yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(advertise_link_attributes.yfilter)
	|| ydk::is_set(apply_weight.yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(ignore_attached_bit.yfilter)
	|| ydk::is_set(attached_bit.yfilter)
	|| ydk::is_set(route_source_first_hop.yfilter)
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (metric_styles !=  nullptr && metric_styles->has_operation())
	|| (frr_table !=  nullptr && frr_table->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_operation())
	|| (propagations !=  nullptr && propagations->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (application_tables !=  nullptr && application_tables->has_operation())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_operation())
	|| (distribute_list_in !=  nullptr && distribute_list_in->has_operation())
	|| (spf_intervals !=  nullptr && spf_intervals->has_operation())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (admin_distances !=  nullptr && admin_distances->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-name";
    ADD_KEY_TOKEN(topology_name, "topology-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (single_topology.is_set || is_set(single_topology.yfilter)) leaf_name_data.push_back(single_topology.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (advertise_link_attributes.is_set || is_set(advertise_link_attributes.yfilter)) leaf_name_data.push_back(advertise_link_attributes.get_name_leafdata());
    if (apply_weight.is_set || is_set(apply_weight.yfilter)) leaf_name_data.push_back(apply_weight.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.yfilter)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (attached_bit.is_set || is_set(attached_bit.yfilter)) leaf_name_data.push_back(attached_bit.get_name_leafdata());
    if (route_source_first_hop.is_set || is_set(route_source_first_hop.yfilter)) leaf_name_data.push_back(route_source_first_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "metric-styles")
    {
        if(metric_styles == nullptr)
        {
            metric_styles = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles>();
        }
        return metric_styles;
    }

    if(child_yang_name == "frr-table")
    {
        if(frr_table == nullptr)
        {
            frr_table = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable>();
        }
        return frr_table;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "spf-prefix-priorities")
    {
        if(spf_prefix_priorities == nullptr)
        {
            spf_prefix_priorities = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities>();
        }
        return spf_prefix_priorities;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "micro-loop-avoidance")
    {
        if(micro_loop_avoidance == nullptr)
        {
            micro_loop_avoidance = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance>();
        }
        return micro_loop_avoidance;
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp == nullptr)
        {
            ucmp = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp>();
        }
        return ucmp;
    }

    if(child_yang_name == "max-redist-prefixes")
    {
        if(max_redist_prefixes == nullptr)
        {
            max_redist_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes>();
        }
        return max_redist_prefixes;
    }

    if(child_yang_name == "propagations")
    {
        if(propagations == nullptr)
        {
            propagations = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations>();
        }
        return propagations;
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions == nullptr)
        {
            redistributions = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions>();
        }
        return redistributions;
    }

    if(child_yang_name == "application-tables")
    {
        if(application_tables == nullptr)
        {
            application_tables = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables>();
        }
        return application_tables;
    }

    if(child_yang_name == "spf-periodic-intervals")
    {
        if(spf_periodic_intervals == nullptr)
        {
            spf_periodic_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals>();
        }
        return spf_periodic_intervals;
    }

    if(child_yang_name == "distribute-list-in")
    {
        if(distribute_list_in == nullptr)
        {
            distribute_list_in = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn>();
        }
        return distribute_list_in;
    }

    if(child_yang_name == "spf-intervals")
    {
        if(spf_intervals == nullptr)
        {
            spf_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals>();
        }
        return spf_intervals;
    }

    if(child_yang_name == "monitor-convergence")
    {
        if(monitor_convergence == nullptr)
        {
            monitor_convergence = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence>();
        }
        return monitor_convergence;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "admin-distances")
    {
        if(admin_distances == nullptr)
        {
            admin_distances = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances>();
        }
        return admin_distances;
    }

    if(child_yang_name == "ispf")
    {
        if(ispf == nullptr)
        {
            ispf = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf>();
        }
        return ispf;
    }

    if(child_yang_name == "mpls-ldp-global")
    {
        if(mpls_ldp_global == nullptr)
        {
            mpls_ldp_global = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal>();
        }
        return mpls_ldp_global;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "manual-adj-sids")
    {
        if(manual_adj_sids == nullptr)
        {
            manual_adj_sids = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids>();
        }
        return manual_adj_sids;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "weights")
    {
        if(weights == nullptr)
        {
            weights = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights>();
        }
        return weights;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(metric_styles != nullptr)
    {
        children["metric-styles"] = metric_styles;
    }

    if(frr_table != nullptr)
    {
        children["frr-table"] = frr_table;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(spf_prefix_priorities != nullptr)
    {
        children["spf-prefix-priorities"] = spf_prefix_priorities;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    if(micro_loop_avoidance != nullptr)
    {
        children["micro-loop-avoidance"] = micro_loop_avoidance;
    }

    if(ucmp != nullptr)
    {
        children["ucmp"] = ucmp;
    }

    if(max_redist_prefixes != nullptr)
    {
        children["max-redist-prefixes"] = max_redist_prefixes;
    }

    if(propagations != nullptr)
    {
        children["propagations"] = propagations;
    }

    if(redistributions != nullptr)
    {
        children["redistributions"] = redistributions;
    }

    if(application_tables != nullptr)
    {
        children["application-tables"] = application_tables;
    }

    if(spf_periodic_intervals != nullptr)
    {
        children["spf-periodic-intervals"] = spf_periodic_intervals;
    }

    if(distribute_list_in != nullptr)
    {
        children["distribute-list-in"] = distribute_list_in;
    }

    if(spf_intervals != nullptr)
    {
        children["spf-intervals"] = spf_intervals;
    }

    if(monitor_convergence != nullptr)
    {
        children["monitor-convergence"] = monitor_convergence;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(admin_distances != nullptr)
    {
        children["admin-distances"] = admin_distances;
    }

    if(ispf != nullptr)
    {
        children["ispf"] = ispf;
    }

    if(mpls_ldp_global != nullptr)
    {
        children["mpls-ldp-global"] = mpls_ldp_global;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(manual_adj_sids != nullptr)
    {
        children["manual-adj-sids"] = manual_adj_sids;
    }

    if(metrics != nullptr)
    {
        children["metrics"] = metrics;
    }

    if(weights != nullptr)
    {
        children["weights"] = weights;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-topology")
    {
        single_topology = value;
        single_topology.value_namespace = name_space;
        single_topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes = value;
        advertise_link_attributes.value_namespace = name_space;
        advertise_link_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-weight")
    {
        apply_weight = value;
        apply_weight.value_namespace = name_space;
        apply_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
        ignore_attached_bit.value_namespace = name_space;
        ignore_attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-bit")
    {
        attached_bit = value;
        attached_bit.value_namespace = name_space;
        attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop = value;
        route_source_first_hop.value_namespace = name_space;
        route_source_first_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "single-topology")
    {
        single_topology.yfilter = yfilter;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes.yfilter = yfilter;
    }
    if(value_path == "apply-weight")
    {
        apply_weight.yfilter = yfilter;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit.yfilter = yfilter;
    }
    if(value_path == "attached-bit")
    {
        attached_bit.yfilter = yfilter;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing" || name == "metric-styles" || name == "frr-table" || name == "router-id" || name == "spf-prefix-priorities" || name == "summary-prefixes" || name == "micro-loop-avoidance" || name == "ucmp" || name == "max-redist-prefixes" || name == "propagations" || name == "redistributions" || name == "application-tables" || name == "spf-periodic-intervals" || name == "distribute-list-in" || name == "spf-intervals" || name == "monitor-convergence" || name == "default-information" || name == "admin-distances" || name == "ispf" || name == "mpls-ldp-global" || name == "mpls" || name == "manual-adj-sids" || name == "metrics" || name == "weights" || name == "topology-name" || name == "maximum-paths" || name == "topology-id" || name == "single-topology" || name == "adjacency-check" || name == "advertise-link-attributes" || name == "apply-weight" || name == "default-admin-distance" || name == "advertise-passive-only" || name == "ignore-attached-bit" || name == "attached-bit" || name == "route-source-first-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::SegmentRouting()
    :
    bundle_member_adj_sid{YType::empty, "bundle-member-adj-sid"},
    mpls{YType::enumeration, "mpls"},
    srv6{YType::empty, "srv6"}
        ,
    prefix_sid_map(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::~SegmentRouting()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return bundle_member_adj_sid.is_set
	|| mpls.is_set
	|| srv6.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_member_adj_sid.yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| ydk::is_set(srv6.yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_member_adj_sid.is_set || is_set(bundle_member_adj_sid.yfilter)) leaf_name_data.push_back(bundle_member_adj_sid.get_name_leafdata());
    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());
    if (srv6.is_set || is_set(srv6.yfilter)) leaf_name_data.push_back(srv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-member-adj-sid")
    {
        bundle_member_adj_sid = value;
        bundle_member_adj_sid.value_namespace = name_space;
        bundle_member_adj_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6")
    {
        srv6 = value;
        srv6.value_namespace = name_space;
        srv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-member-adj-sid")
    {
        bundle_member_adj_sid.yfilter = yfilter;
    }
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
    if(value_path == "srv6")
    {
        srv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map" || name == "bundle-member-adj-sid" || name == "mpls" || name == "srv6")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"},
    receive{YType::boolean, "receive"}
{

    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::has_data() const
{
    if (is_presence_container) return true;
    return advertise_local.is_set
	|| receive.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_local.yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.yfilter)) leaf_name_data.push_back(advertise_local.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
        advertise_local.value_namespace = name_space;
        advertise_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-local")
    {
        advertise_local.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-local" || name == "receive")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyles()
    :
    metric_style(this, {"level"})
{

    yang_name = "metric-styles"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::~MetricStyles()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_style.len(); index++)
    {
        if(metric_style[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::has_operation() const
{
    for (std::size_t index=0; index<metric_style.len(); index++)
    {
        if(metric_style[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-styles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-style")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle>();
        c->parent = this;
        metric_style.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metric_style.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-style")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::MetricStyle()
    :
    level{YType::enumeration, "level"},
    style{YType::enumeration, "style"}
{

    yang_name = "metric-style"; yang_parent_name = "metric-styles"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::~MetricStyle()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| style.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(style.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (style.is_set || is_set(style.yfilter)) leaf_name_data.push_back(style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "style")
    {
        style = value;
        style.value_namespace = name_space;
        style.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "style")
    {
        style.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "style")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTable()
    :
    frr_initial_delay{YType::uint32, "frr-initial-delay"}
        ,
    frr_load_sharings(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings>())
    , frrsrlg_protection_types(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes>())
    , priority_limits(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits>())
    , frr_remote_lfa_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes>())
    , frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers>())
    , frr_use_cand_onlies(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies>())
{
    frr_load_sharings->parent = this;
    frrsrlg_protection_types->parent = this;
    priority_limits->parent = this;
    frr_remote_lfa_prefixes->parent = this;
    frr_tiebreakers->parent = this;
    frr_use_cand_onlies->parent = this;

    yang_name = "frr-table"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::~FrrTable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::has_data() const
{
    if (is_presence_container) return true;
    return frr_initial_delay.is_set
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_data())
	|| (frrsrlg_protection_types !=  nullptr && frrsrlg_protection_types->has_data())
	|| (priority_limits !=  nullptr && priority_limits->has_data())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_data())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_data())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_initial_delay.yfilter)
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_operation())
	|| (frrsrlg_protection_types !=  nullptr && frrsrlg_protection_types->has_operation())
	|| (priority_limits !=  nullptr && priority_limits->has_operation())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_operation())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_operation())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_initial_delay.is_set || is_set(frr_initial_delay.yfilter)) leaf_name_data.push_back(frr_initial_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-load-sharings")
    {
        if(frr_load_sharings == nullptr)
        {
            frr_load_sharings = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings>();
        }
        return frr_load_sharings;
    }

    if(child_yang_name == "frrsrlg-protection-types")
    {
        if(frrsrlg_protection_types == nullptr)
        {
            frrsrlg_protection_types = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes>();
        }
        return frrsrlg_protection_types;
    }

    if(child_yang_name == "priority-limits")
    {
        if(priority_limits == nullptr)
        {
            priority_limits = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits>();
        }
        return priority_limits;
    }

    if(child_yang_name == "frr-remote-lfa-prefixes")
    {
        if(frr_remote_lfa_prefixes == nullptr)
        {
            frr_remote_lfa_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes>();
        }
        return frr_remote_lfa_prefixes;
    }

    if(child_yang_name == "frr-tiebreakers")
    {
        if(frr_tiebreakers == nullptr)
        {
            frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers>();
        }
        return frr_tiebreakers;
    }

    if(child_yang_name == "frr-use-cand-onlies")
    {
        if(frr_use_cand_onlies == nullptr)
        {
            frr_use_cand_onlies = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies>();
        }
        return frr_use_cand_onlies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frr_load_sharings != nullptr)
    {
        children["frr-load-sharings"] = frr_load_sharings;
    }

    if(frrsrlg_protection_types != nullptr)
    {
        children["frrsrlg-protection-types"] = frrsrlg_protection_types;
    }

    if(priority_limits != nullptr)
    {
        children["priority-limits"] = priority_limits;
    }

    if(frr_remote_lfa_prefixes != nullptr)
    {
        children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
    }

    if(frr_tiebreakers != nullptr)
    {
        children["frr-tiebreakers"] = frr_tiebreakers;
    }

    if(frr_use_cand_onlies != nullptr)
    {
        children["frr-use-cand-onlies"] = frr_use_cand_onlies;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-initial-delay")
    {
        frr_initial_delay = value;
        frr_initial_delay.value_namespace = name_space;
        frr_initial_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-initial-delay")
    {
        frr_initial_delay.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-load-sharings" || name == "frrsrlg-protection-types" || name == "priority-limits" || name == "frr-remote-lfa-prefixes" || name == "frr-tiebreakers" || name == "frr-use-cand-onlies" || name == "frr-initial-delay")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharings()
    :
    frr_load_sharing(this, {"level"})
{

    yang_name = "frr-load-sharings"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::~FrrLoadSharings()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_load_sharing.len(); index++)
    {
        if(frr_load_sharing[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::has_operation() const
{
    for (std::size_t index=0; index<frr_load_sharing.len(); index++)
    {
        if(frr_load_sharing[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-load-sharing")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing>();
        c->parent = this;
        frr_load_sharing.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_load_sharing.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-load-sharing")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::FrrLoadSharing()
    :
    level{YType::enumeration, "level"},
    load_sharing{YType::enumeration, "load-sharing"}
{

    yang_name = "frr-load-sharing"; yang_parent_name = "frr-load-sharings"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::~FrrLoadSharing()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| load_sharing.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(load_sharing.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharing";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "load-sharing")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionTypes()
    :
    frrsrlg_protection_type(this, {"level"})
{

    yang_name = "frrsrlg-protection-types"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::~FrrsrlgProtectionTypes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frrsrlg_protection_type.len(); index++)
    {
        if(frrsrlg_protection_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::has_operation() const
{
    for (std::size_t index=0; index<frrsrlg_protection_type.len(); index++)
    {
        if(frrsrlg_protection_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrsrlg-protection-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrsrlg-protection-type")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType>();
        c->parent = this;
        frrsrlg_protection_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frrsrlg_protection_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrsrlg-protection-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::FrrsrlgProtectionType()
    :
    level{YType::enumeration, "level"},
    protection_type{YType::enumeration, "protection-type"}
{

    yang_name = "frrsrlg-protection-type"; yang_parent_name = "frrsrlg-protection-types"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::~FrrsrlgProtectionType()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| protection_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(protection_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrsrlg-protection-type";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "protection-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimits()
    :
    priority_limit(this, {"level"})
{

    yang_name = "priority-limits"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::~PriorityLimits()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_limit.len(); index++)
    {
        if(priority_limit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::has_operation() const
{
    for (std::size_t index=0; index<priority_limit.len(); index++)
    {
        if(priority_limit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-limit")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit>();
        c->parent = this;
        priority_limit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : priority_limit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-limit")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimit()
    :
    level{YType::enumeration, "level"}
        ,
    priority_limit_data(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData>())
    , frr_type(this, {"frr_type"})
{
    priority_limit_data->parent = this;

    yang_name = "priority-limit"; yang_parent_name = "priority-limits"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::~PriorityLimit()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return level.is_set
	|| (priority_limit_data !=  nullptr && priority_limit_data->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::has_operation() const
{
    for (std::size_t index=0; index<frr_type.len(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (priority_limit_data !=  nullptr && priority_limit_data->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-limit-data")
    {
        if(priority_limit_data == nullptr)
        {
            priority_limit_data = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData>();
        }
        return priority_limit_data;
    }

    if(child_yang_name == "frr-type")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType>();
        c->parent = this;
        frr_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority_limit_data != nullptr)
    {
        children["priority-limit-data"] = priority_limit_data;
    }

    count = 0;
    for (auto c : frr_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-limit-data" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::PriorityLimitData()
    :
    priority{YType::enumeration, "priority"}
{

    yang_name = "priority-limit-data"; yang_parent_name = "priority-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::~PriorityLimitData()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimitData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::FrrType()
    :
    frr_type{YType::enumeration, "frr-type"},
    priority{YType::enumeration, "priority"}
{

    yang_name = "frr-type"; yang_parent_name = "priority-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_data() const
{
    if (is_presence_container) return true;
    return frr_type.is_set
	|| priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type";
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type" || name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefixes()
    :
    frr_remote_lfa_prefix(this, {"level"})
{

    yang_name = "frr-remote-lfa-prefixes"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::~FrrRemoteLfaPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_remote_lfa_prefix.len(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.len(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix>();
        c->parent = this;
        frr_remote_lfa_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_remote_lfa_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::FrrRemoteLfaPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "frr-remote-lfa-prefix"; yang_parent_name = "frr-remote-lfa-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::~FrrRemoteLfaPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefix";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreakers()
    :
    frr_tiebreaker(this, {"level", "tiebreaker"})
{

    yang_name = "frr-tiebreakers"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::~FrrTiebreakers()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tiebreaker.len(); index++)
    {
        if(frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<frr_tiebreaker.len(); index++)
    {
        if(frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tiebreaker")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker>();
        c->parent = this;
        frr_tiebreaker.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_tiebreaker.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::FrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "frr-tiebreaker"; yang_parent_name = "frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::~FrrTiebreaker()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreaker";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(tiebreaker, "tiebreaker");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnlies()
    :
    frr_use_cand_only(this, {"level", "frr_type"})
{

    yang_name = "frr-use-cand-onlies"; yang_parent_name = "frr-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::~FrrUseCandOnlies()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_use_cand_only.len(); index++)
    {
        if(frr_use_cand_only[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::has_operation() const
{
    for (std::size_t index=0; index<frr_use_cand_only.len(); index++)
    {
        if(frr_use_cand_only[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-onlies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-use-cand-only")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly>();
        c->parent = this;
        frr_use_cand_only.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frr_use_cand_only.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-use-cand-only")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::FrrUseCandOnly()
    :
    level{YType::enumeration, "level"},
    frr_type{YType::enumeration, "frr-type"}
{

    yang_name = "frr-use-cand-only"; yang_parent_name = "frr-use-cand-onlies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::~FrrUseCandOnly()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| frr_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(frr_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-only";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(frr_type, "frr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "router-id"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriorities()
    :
    spf_prefix_priority(this, {"level", "prefix_priority_type"})
{

    yang_name = "spf-prefix-priorities"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::~SpfPrefixPriorities()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_prefix_priority.len(); index++)
    {
        if(spf_prefix_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::has_operation() const
{
    for (std::size_t index=0; index<spf_prefix_priority.len(); index++)
    {
        if(spf_prefix_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priorities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-prefix-priority")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority>();
        c->parent = this;
        spf_prefix_priority.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_prefix_priority.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-prefix-priority")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::SpfPrefixPriority()
    :
    level{YType::enumeration, "level"},
    prefix_priority_type{YType::enumeration, "prefix-priority-type"},
    admin_tag{YType::uint32, "admin-tag"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "spf-prefix-priority"; yang_parent_name = "spf-prefix-priorities"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::~SpfPrefixPriority()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_priority_type.is_set
	|| admin_tag.is_set
	|| access_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_priority_type.yfilter)
	|| ydk::is_set(admin_tag.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priority";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(prefix_priority_type, "prefix-priority-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_priority_type.is_set || is_set(prefix_priority_type.yfilter)) leaf_name_data.push_back(prefix_priority_type.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.yfilter)) leaf_name_data.push_back(admin_tag.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type = value;
        prefix_priority_type.value_namespace = name_space;
        prefix_priority_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
        admin_tag.value_namespace = name_space;
        admin_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type.yfilter = yfilter;
    }
    if(value_path == "admin-tag")
    {
        admin_tag.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-priority-type" || name == "admin-tag" || name == "access-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefixes()
    :
    summary_prefix(this, {"address_prefix"})
{

    yang_name = "summary-prefixes"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : summary_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    address_prefix{YType::str, "address-prefix"},
    tag{YType::uint32, "tag"},
    level{YType::uint32, "level"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::has_data() const
{
    if (is_presence_container) return true;
    return address_prefix.is_set
	|| tag.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    ADD_KEY_TOKEN(address_prefix, "address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix" || name == "tag" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::MicroLoopAvoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "micro-loop-avoidance"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::~MicroLoopAvoidance()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "micro-loop-avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "rib-update-delay")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
        ,
    enable(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable>())
    , exclude_interfaces(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "ucmp"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::~Ucmp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::has_data() const
{
    if (is_presence_container) return true;
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_interval.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.yfilter)) leaf_name_data.push_back(delay_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
        delay_interval.value_namespace = name_space;
        delay_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-interval")
    {
        delay_interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "exclude-interfaces" || name == "delay-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::Enable()
    :
    variance{YType::uint32, "variance"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "enable"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::~Enable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::has_data() const
{
    if (is_presence_container) return true;
    return variance.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(variance.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variance" || name == "prefix-list-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
    :
    exclude_interface(this, {"interface_name"})
{

    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exclude_interface.len(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.len(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : exclude_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefixes()
    :
    max_redist_prefix(this, {"level"})
{

    yang_name = "max-redist-prefixes"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::~MaxRedistPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<max_redist_prefix.len(); index++)
    {
        if(max_redist_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::has_operation() const
{
    for (std::size_t index=0; index<max_redist_prefix.len(); index++)
    {
        if(max_redist_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-redist-prefix")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix>();
        c->parent = this;
        max_redist_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : max_redist_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-redist-prefix")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::MaxRedistPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_limit{YType::uint32, "prefix-limit"}
{

    yang_name = "max-redist-prefix"; yang_parent_name = "max-redist-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::~MaxRedistPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| prefix_limit.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(prefix_limit.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefix";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "prefix-limit")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagations()
    :
    propagation(this, {"source_level", "destination_level"})
{

    yang_name = "propagations"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::~Propagations()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<propagation.len(); index++)
    {
        if(propagation[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::has_operation() const
{
    for (std::size_t index=0; index<propagation.len(); index++)
    {
        if(propagation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "propagation")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation>();
        c->parent = this;
        propagation.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : propagation.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagation")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::Propagation()
    :
    source_level{YType::enumeration, "source-level"},
    destination_level{YType::enumeration, "destination-level"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "propagation"; yang_parent_name = "propagations"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::~Propagation()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::has_data() const
{
    if (is_presence_container) return true;
    return source_level.is_set
	|| destination_level.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_level.yfilter)
	|| ydk::is_set(destination_level.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagation";
    ADD_KEY_TOKEN(source_level, "source-level");
    ADD_KEY_TOKEN(destination_level, "destination-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_level.is_set || is_set(source_level.yfilter)) leaf_name_data.push_back(source_level.get_name_leafdata());
    if (destination_level.is_set || is_set(destination_level.yfilter)) leaf_name_data.push_back(destination_level.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-level")
    {
        source_level = value;
        source_level.value_namespace = name_space;
        source_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-level")
    {
        destination_level = value;
        destination_level.value_namespace = name_space;
        destination_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-level")
    {
        source_level.yfilter = yfilter;
    }
    if(value_path == "destination-level")
    {
        destination_level.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-level" || name == "destination-level" || name == "route-policy-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistributions()
    :
    redistribution(this, {"protocol_name"})
{

    yang_name = "redistributions"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::~Redistributions()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redistribution.len(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.len(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : redistribution.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Redistribution()
    :
    protocol_name{YType::enumeration, "protocol-name"}
        ,
    connected_or_static_or_rip_or_subscriber_or_mobile(nullptr) // presence node
    , ospf_or_ospfv3_or_isis_or_application(this, {"instance_name"})
    , bgp(this, {"as_xx", "as_yy"})
    , eigrp(this, {"as_zz"})
{

    yang_name = "redistribution"; yang_parent_name = "redistributions"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::~Redistribution()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.len(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::has_operation() const
{
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.len(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";
    ADD_KEY_TOKEN(protocol_name, "protocol-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-or-static-or-rip-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile == nullptr)
        {
            connected_or_static_or_rip_or_subscriber_or_mobile = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile>();
        }
        return connected_or_static_or_rip_or_subscriber_or_mobile;
    }

    if(child_yang_name == "ospf-or-ospfv3-or-isis-or-application")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication>();
        c->parent = this;
        ospf_or_ospfv3_or_isis_or_application.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp>();
        c->parent = this;
        bgp.append(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp>();
        c->parent = this;
        eigrp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
    {
        children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
    }

    count = 0;
    for (auto c : ospf_or_ospfv3_or_isis_or_application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : bgp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : eigrp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-or-static-or-rip-or-subscriber-or-mobile" || name == "ospf-or-ospfv3-or-isis-or-application" || name == "bgp" || name == "eigrp" || name == "protocol-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::ConnectedOrStaticOrRipOrSubscriberOrMobile()
    :
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "connected-or-static-or-rip-or-subscriber-or-mobile"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::~ConnectedOrStaticOrRipOrSubscriberOrMobile()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-rip-or-subscriber-or-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::OspfOrOspfv3OrIsisOrApplication()
    :
    instance_name{YType::str, "instance-name"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "ospf-or-ospfv3-or-isis-or-application"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::~OspfOrOspfv3OrIsisOrApplication()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-or-ospfv3-or-isis-or-application";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "bgp"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::~Bgp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::Eigrp()
    :
    as_zz{YType::uint32, "as-zz"},
    metric{YType::uint32, "metric"},
    levels{YType::enumeration, "levels"},
    route_policy_name{YType::str, "route-policy-name"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::uint32, "ospf-route-type"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribution"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::~Eigrp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_zz.is_set
	|| metric.is_set
	|| levels.is_set
	|| route_policy_name.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_zz.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(ospf_route_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_zz, "as-zz");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_zz.is_set || is_set(as_zz.yfilter)) leaf_name_data.push_back(as_zz.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.yfilter)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-zz")
    {
        as_zz = value;
        as_zz.value_namespace = name_space;
        as_zz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
        ospf_route_type.value_namespace = name_space;
        ospf_route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-zz")
    {
        as_zz.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-zz" || name == "metric" || name == "levels" || name == "route-policy-name" || name == "metric-type" || name == "ospf-route-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTables()
    :
    application_table(this, {"app_type"})
{

    yang_name = "application-tables"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::~ApplicationTables()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_table.len(); index++)
    {
        if(application_table[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::has_operation() const
{
    for (std::size_t index=0; index<application_table.len(); index++)
    {
        if(application_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-table")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable>();
        c->parent = this;
        application_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-table")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::ApplicationTable()
    :
    app_type{YType::enumeration, "app-type"}
        ,
    attribute_table(this, {"app_type"})
{

    yang_name = "application-table"; yang_parent_name = "application-tables"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::~ApplicationTable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_table.len(); index++)
    {
        if(attribute_table[index]->has_data())
            return true;
    }
    return app_type.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::has_operation() const
{
    for (std::size_t index=0; index<attribute_table.len(); index++)
    {
        if(attribute_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-table";
    ADD_KEY_TOKEN(app_type, "app-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-table")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable>();
        c->parent = this;
        attribute_table.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attribute_table.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-table" || name == "app-type")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::AttributeTable()
    :
    app_type{YType::enumeration, "app-type"},
    enable{YType::boolean, "enable"}
{

    yang_name = "attribute-table"; yang_parent_name = "application-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::~AttributeTable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::has_data() const
{
    if (is_presence_container) return true;
    return app_type.is_set
	|| enable.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-table";
    ADD_KEY_TOKEN(app_type, "app-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "enable")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicIntervals()
    :
    spf_periodic_interval(this, {"level"})
{

    yang_name = "spf-periodic-intervals"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::~SpfPeriodicIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_periodic_interval.len(); index++)
    {
        if(spf_periodic_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_periodic_interval.len(); index++)
    {
        if(spf_periodic_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-periodic-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval>();
        c->parent = this;
        spf_periodic_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_periodic_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-periodic-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::SpfPeriodicInterval()
    :
    level{YType::enumeration, "level"},
    periodic_interval{YType::uint32, "periodic-interval"}
{

    yang_name = "spf-periodic-interval"; yang_parent_name = "spf-periodic-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::~SpfPeriodicInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| periodic_interval.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(periodic_interval.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "periodic-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::DistributeListIn()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "distribute-list-in"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::~DistributeListIn()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-name" || name == "route-policy-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfIntervals()
    :
    spf_interval(this, {"level"})
{

    yang_name = "spf-intervals"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::~SpfIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_interval.len(); index++)
    {
        if(spf_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_interval.len(); index++)
    {
        if(spf_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval>();
        c->parent = this;
        spf_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spf_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::SpfInterval()
    :
    level{YType::enumeration, "level"},
    maximum_wait{YType::uint32, "maximum-wait"},
    initial_wait{YType::uint32, "initial-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "spf-interval"; yang_parent_name = "spf-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::~SpfInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| maximum_wait.is_set
	|| initial_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "maximum-wait" || name == "initial-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::MonitorConvergence()
    :
    enable{YType::empty, "enable"},
    track_ip_frr{YType::empty, "track-ip-frr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "monitor-convergence"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::~MonitorConvergence()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| track_ip_frr.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(track_ip_frr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (track_ip_frr.is_set || is_set(track_ip_frr.yfilter)) leaf_name_data.push_back(track_ip_frr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr = value;
        track_ip_frr.value_namespace = name_space;
        track_ip_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "track-ip-frr" || name == "prefix-list")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::DefaultInformation()
    :
    use_policy{YType::boolean, "use-policy"},
    policy_name{YType::str, "policy-name"},
    external{YType::empty, "external"}
{

    yang_name = "default-information"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::~DefaultInformation()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return use_policy.is_set
	|| policy_name.is_set
	|| external.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_policy.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_policy.is_set || is_set(use_policy.yfilter)) leaf_name_data.push_back(use_policy.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-policy")
    {
        use_policy = value;
        use_policy.value_namespace = name_space;
        use_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-policy")
    {
        use_policy.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-policy" || name == "policy-name" || name == "external")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistances()
    :
    admin_distance(this, {"address_prefix"})
{

    yang_name = "admin-distances"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::~AdminDistances()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_distance.len(); index++)
    {
        if(admin_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::has_operation() const
{
    for (std::size_t index=0; index<admin_distance.len(); index++)
    {
        if(admin_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-distance")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance>();
        c->parent = this;
        admin_distance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : admin_distance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::AdminDistance()
    :
    address_prefix{YType::str, "address-prefix"},
    distance{YType::uint32, "distance"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "admin-distance"; yang_parent_name = "admin-distances"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::~AdminDistance()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::has_data() const
{
    if (is_presence_container) return true;
    return address_prefix.is_set
	|| distance.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance";
    ADD_KEY_TOKEN(address_prefix, "address-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix" || name == "distance" || name == "prefix-list")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::Ispf()
    :
    states(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States>())
{
    states->parent = this;

    yang_name = "ispf"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::~Ispf()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::has_data() const
{
    if (is_presence_container) return true;
    return (states !=  nullptr && states->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::has_operation() const
{
    return is_set(yfilter)
	|| (states !=  nullptr && states->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "states")
    {
        if(states == nullptr)
        {
            states = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States>();
        }
        return states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(states != nullptr)
    {
        children["states"] = states;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "states")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::States()
    :
    state(this, {"level"})
{

    yang_name = "states"; yang_parent_name = "ispf"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::~States()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<state.len(); index++)
    {
        if(state[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::has_operation() const
{
    for (std::size_t index=0; index<state.len(); index++)
    {
        if(state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State>();
        c->parent = this;
        state.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : state.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::State()
    :
    level{YType::enumeration, "level"},
    state{YType::enumeration, "state"}
{

    yang_name = "state"; yang_parent_name = "states"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::~State()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "state")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::MplsLdpGlobal()
    :
    auto_config{YType::boolean, "auto-config"}
{

    yang_name = "mpls-ldp-global"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::~MplsLdpGlobal()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return auto_config.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_config.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.yfilter)) leaf_name_data.push_back(auto_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
        auto_config.value_namespace = name_space;
        auto_config.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-config")
    {
        auto_config.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-config")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Mpls()
    :
    igp_intact{YType::empty, "igp-intact"},
    multicast_intact{YType::empty, "multicast-intact"}
        ,
    router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId>())
    , level(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level>())
{
    router_id->parent = this;
    level->parent = this;

    yang_name = "mpls"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::~Mpls()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return igp_intact.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_intact.yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_intact.is_set || is_set(igp_intact.yfilter)) leaf_name_data.push_back(igp_intact.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-intact")
    {
        igp_intact = value;
        igp_intact.value_namespace = name_space;
        igp_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-intact")
    {
        igp_intact.yfilter = yfilter;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "level" || name == "igp-intact" || name == "multicast-intact")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "router-id"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::Level()
    :
    level1{YType::boolean, "level1"},
    level2{YType::boolean, "level2"}
{

    yang_name = "level"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::~Level()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::has_data() const
{
    if (is_presence_container) return true;
    return level1.is_set
	|| level2.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level1.yfilter)
	|| ydk::is_set(level2.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level1.is_set || is_set(level1.yfilter)) leaf_name_data.push_back(level1.get_name_leafdata());
    if (level2.is_set || is_set(level2.yfilter)) leaf_name_data.push_back(level2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level1")
    {
        level1 = value;
        level1.value_namespace = name_space;
        level1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2")
    {
        level2 = value;
        level2.value_namespace = name_space;
        level2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level1")
    {
        level1.yfilter = yfilter;
    }
    if(value_path == "level2")
    {
        level2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1" || name == "level2")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSids()
    :
    manual_adj_sid(this, {"level", "sid_type", "sid"})
{

    yang_name = "manual-adj-sids"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : manual_adj_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(sid_type, "sid-type");
    ADD_KEY_TOKEN(sid, "sid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metrics()
    :
    metric(this, {"level"})
{

    yang_name = "metrics"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.len(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric>();
        c->parent = this;
        metric.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metric.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weights()
    :
    weight(this, {"level"})
{

    yang_name = "weights"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.len(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight>();
        c->parent = this;
        weight.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : weight.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshIntervals()
    :
    lsp_refresh_interval(this, {"level"})
{

    yang_name = "lsp-refresh-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspRefreshIntervals::~LspRefreshIntervals()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_refresh_interval.len(); index++)
    {
        if(lsp_refresh_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_refresh_interval.len(); index++)
    {
        if(lsp_refresh_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspRefreshIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-refresh-interval")
    {
        auto c = std::make_shared<Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval>();
        c->parent = this;
        lsp_refresh_interval.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspRefreshIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsp_refresh_interval.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspRefreshIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-refresh-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::LspRefreshInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-refresh-interval"; yang_parent_name = "lsp-refresh-intervals"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::~LspRefreshInterval()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-interval";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Distribute::Distribute()
    :
    dist_inst_id{YType::uint32, "dist-inst-id"},
    level{YType::enumeration, "level"},
    dist_throttle{YType::uint32, "dist-throttle"}
{

    yang_name = "distribute"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Isis::Instances::Instance::Distribute::~Distribute()
{
}

bool Isis::Instances::Instance::Distribute::has_data() const
{
    if (is_presence_container) return true;
    return dist_inst_id.is_set
	|| level.is_set
	|| dist_throttle.is_set;
}

bool Isis::Instances::Instance::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dist_inst_id.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(dist_throttle.yfilter);
}

std::string Isis::Instances::Instance::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_inst_id.is_set || is_set(dist_inst_id.yfilter)) leaf_name_data.push_back(dist_inst_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (dist_throttle.is_set || is_set(dist_throttle.yfilter)) leaf_name_data.push_back(dist_throttle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dist-inst-id")
    {
        dist_inst_id = value;
        dist_inst_id.value_namespace = name_space;
        dist_inst_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-throttle")
    {
        dist_throttle = value;
        dist_throttle.value_namespace = name_space;
        dist_throttle.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dist-inst-id")
    {
        dist_inst_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "dist-throttle")
    {
        dist_throttle.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dist-inst-id" || name == "level" || name == "dist-throttle")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgos()
    :
    flex_algo(this, {"flex_algo"})
{

    yang_name = "flex-algos"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::~FlexAlgos()
{
}

bool Isis::Instances::Instance::FlexAlgos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flex_algo.len(); index++)
    {
        if(flex_algo[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::FlexAlgos::has_operation() const
{
    for (std::size_t index=0; index<flex_algo.len(); index++)
    {
        if(flex_algo[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::FlexAlgos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-algos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::FlexAlgos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-algo")
    {
        auto c = std::make_shared<Isis::Instances::Instance::FlexAlgos::FlexAlgo>();
        c->parent = this;
        flex_algo.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::FlexAlgos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flex_algo.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::FlexAlgos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::FlexAlgos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::FlexAlgos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-algo")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::FlexAlgo()
    :
    flex_algo{YType::uint32, "flex-algo"},
    running{YType::empty, "running"},
    metric_type{YType::uint32, "metric-type"},
    priority{YType::uint32, "priority"}
        ,
    affinity_exclude_anies(std::make_shared<Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies>())
{
    affinity_exclude_anies->parent = this;

    yang_name = "flex-algo"; yang_parent_name = "flex-algos"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::~FlexAlgo()
{
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_data() const
{
    if (is_presence_container) return true;
    return flex_algo.is_set
	|| running.is_set
	|| metric_type.is_set
	|| priority.is_set
	|| (affinity_exclude_anies !=  nullptr && affinity_exclude_anies->has_data());
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flex_algo.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (affinity_exclude_anies !=  nullptr && affinity_exclude_anies->has_operation());
}

std::string Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-algo";
    ADD_KEY_TOKEN(flex_algo, "flex-algo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flex_algo.is_set || is_set(flex_algo.yfilter)) leaf_name_data.push_back(flex_algo.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-exclude-anies")
    {
        if(affinity_exclude_anies == nullptr)
        {
            affinity_exclude_anies = std::make_shared<Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies>();
        }
        return affinity_exclude_anies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity_exclude_anies != nullptr)
    {
        children["affinity-exclude-anies"] = affinity_exclude_anies;
    }

    return children;
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flex-algo")
    {
        flex_algo = value;
        flex_algo.value_namespace = name_space;
        flex_algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flex-algo")
    {
        flex_algo.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-exclude-anies" || name == "flex-algo" || name == "running" || name == "metric-type" || name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::AffinityExcludeAnies()
    :
    affinity_exclude_any{YType::str, "affinity-exclude-any"}
{

    yang_name = "affinity-exclude-anies"; yang_parent_name = "flex-algo"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::~AffinityExcludeAnies()
{
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : affinity_exclude_any.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::has_operation() const
{
    for (auto const & leaf : affinity_exclude_any.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_exclude_any.yfilter);
}

std::string Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-exclude-anies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto affinity_exclude_any_name_datas = affinity_exclude_any.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), affinity_exclude_any_name_datas.begin(), affinity_exclude_any_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.append(value);
    }
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-exclude-any")
        return true;
    return false;
}

const Enum::YLeaf IsisSnpAuth::send_only {0, "send-only"};
const Enum::YLeaf IsisSnpAuth::full {1, "full"};

const Enum::YLeaf IsisMibMaxAreaAddressMismatchBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibMaxAreaAddressMismatchBoolean::true_ {6, "true"};

const Enum::YLeaf IsisMibLspTooLargeToPropagateBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibLspTooLargeToPropagateBoolean::true_ {14, "true"};

const Enum::YLeaf IsisMibSequenceNumberSkipBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibSequenceNumberSkipBoolean::true_ {8, "true"};

const Enum::YLeaf IsisInterfaceFrrTiebreaker::node_protecting {3, "node-protecting"};
const Enum::YLeaf IsisInterfaceFrrTiebreaker::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf IsisAuthenticationAlgorithm::cleartext {1, "cleartext"};
const Enum::YLeaf IsisAuthenticationAlgorithm::hmac_md5 {2, "hmac-md5"};
const Enum::YLeaf IsisAuthenticationAlgorithm::keychain {3, "keychain"};

const Enum::YLeaf IsisAdvTypeExternal::external {1, "external"};

const Enum::YLeaf IsisMibRejectedAdjacencyBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibRejectedAdjacencyBoolean::true_ {13, "true"};

const Enum::YLeaf IsisMibCorruptedLspDetectedBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibCorruptedLspDetectedBoolean::true_ {3, "true"};

const Enum::YLeaf IsisAdjCheck::disabled {0, "disabled"};

const Enum::YLeaf IsisispfState::enabled {1, "enabled"};

const Enum::YLeaf IsisfrrLoadSharing::disable {1, "disable"};

const Enum::YLeaf IsisMibAuthenticationFailureBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAuthenticationFailureBoolean::true_ {10, "true"};

const Enum::YLeaf IsisInterfaceState::shutdown {0, "shutdown"};
const Enum::YLeaf IsisInterfaceState::suppressed {1, "suppressed"};
const Enum::YLeaf IsisInterfaceState::passive {2, "passive"};
const Enum::YLeaf IsisInterfaceState::enabled_active {3, "enabled-active"};

const Enum::YLeaf IsisTracingMode::off {0, "off"};
const Enum::YLeaf IsisTracingMode::basic {1, "basic"};
const Enum::YLeaf IsisTracingMode::enhanced {2, "enhanced"};

const Enum::YLeaf IsisAdvTypeInterLevel::inter_level {1, "inter-level"};

const Enum::YLeaf IsisNsfFlavor::cisco_proprietary_nsf {1, "cisco-proprietary-nsf"};
const Enum::YLeaf IsisNsfFlavor::ietf_standard_nsf {2, "ietf-standard-nsf"};

const Enum::YLeaf IsisInterfaceAfState::disable {0, "disable"};

const Enum::YLeaf IsissidProtected::disable {0, "disable"};
const Enum::YLeaf IsissidProtected::enable {1, "enable"};

const Enum::YLeaf IsisMetricStyle::old_metric_style {0, "old-metric-style"};
const Enum::YLeaf IsisMetricStyle::new_metric_style {1, "new-metric-style"};
const Enum::YLeaf IsisMetricStyle::both_metric_style {2, "both-metric-style"};
const Enum::YLeaf IsisMetricStyle::old_metric_style_transition {3, "old-metric-style-transition"};
const Enum::YLeaf IsisMetricStyle::new_metric_style_transition {4, "new-metric-style-transition"};

const Enum::YLeaf IsisApplyWeight::ecmp_only {1, "ecmp-only"};
const Enum::YLeaf IsisApplyWeight::ucmp_only {2, "ucmp-only"};
const Enum::YLeaf IsisApplyWeight::ecmp_only_bandwidth {3, "ecmp-only-bandwidth"};

const Enum::YLeaf IsisfrrSrlgProtection::local {0, "local"};
const Enum::YLeaf IsisfrrSrlgProtection::weighted_global {1, "weighted-global"};

const Enum::YLeaf IsisOverloadBitMode::permanently_set {1, "permanently-set"};
const Enum::YLeaf IsisOverloadBitMode::startup_period {2, "startup-period"};
const Enum::YLeaf IsisOverloadBitMode::wait_for_bgp {3, "wait-for-bgp"};

const Enum::YLeaf IsisMibAuthenticationTypeFailureBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAuthenticationTypeFailureBoolean::true_ {9, "true"};

const Enum::YLeaf IsisMicroLoopAvoidance::not_set {0, "not-set"};
const Enum::YLeaf IsisMicroLoopAvoidance::micro_loop_avoidance_all {1, "micro-loop-avoidance-all"};
const Enum::YLeaf IsisMicroLoopAvoidance::micro_loop_avoidance_protected {2, "micro-loop-avoidance-protected"};
const Enum::YLeaf IsisMicroLoopAvoidance::micro_loop_avoidance_segement_routing {3, "micro-loop-avoidance-segement-routing"};

const Enum::YLeaf IsisApplication::lfa {0, "lfa"};

const Enum::YLeaf IsisRemoteLfa::remote_lfa_none {0, "remote-lfa-none"};
const Enum::YLeaf IsisRemoteLfa::remote_lfa_tunnel_ldp {1, "remote-lfa-tunnel-ldp"};

const Enum::YLeaf IsisMibAreaMismatchBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAreaMismatchBoolean::true_ {12, "true"};

const Enum::YLeaf IsisMibAttemptToExceedMaxSequenceBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAttemptToExceedMaxSequenceBoolean::true_ {4, "true"};

const Enum::YLeaf IsisPrefixPriority::critical_priority {0, "critical-priority"};
const Enum::YLeaf IsisPrefixPriority::high_priority {1, "high-priority"};
const Enum::YLeaf IsisPrefixPriority::medium_priority {2, "medium-priority"};

const Enum::YLeaf IsisConfigurableLevels::level1 {1, "level1"};
const Enum::YLeaf IsisConfigurableLevels::level2 {2, "level2"};
const Enum::YLeaf IsisConfigurableLevels::level1_and2 {3, "level1-and2"};

const Enum::YLeaf IsisfrrTiebreaker::downstream {0, "downstream"};
const Enum::YLeaf IsisfrrTiebreaker::lc_disjoint {1, "lc-disjoint"};
const Enum::YLeaf IsisfrrTiebreaker::lowest_backup_metric {2, "lowest-backup-metric"};
const Enum::YLeaf IsisfrrTiebreaker::node_protecting {3, "node-protecting"};
const Enum::YLeaf IsisfrrTiebreaker::primary_path {4, "primary-path"};
const Enum::YLeaf IsisfrrTiebreaker::secondary_path {5, "secondary-path"};
const Enum::YLeaf IsisfrrTiebreaker::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf IsisMibManualAddressDropsBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibManualAddressDropsBoolean::true_ {2, "true"};

const Enum::YLeaf IsisexplicitNullFlag::disable {0, "disable"};
const Enum::YLeaf IsisexplicitNullFlag::enable {1, "enable"};

const Enum::YLeaf IsisEnablePoi::enable_poi_off {0, "enable-poi-off"};
const Enum::YLeaf IsisEnablePoi::enable_poi_on {1, "enable-poi-on"};

const Enum::YLeaf IsisMetric::internal {0, "internal"};
const Enum::YLeaf IsisMetric::external {1, "external"};
const Enum::YLeaf IsisMetric::rib_internal {2, "rib-internal"};
const Enum::YLeaf IsisMetric::rib_external {3, "rib-external"};

const Enum::YLeaf IsisHelloPadding::never {0, "never"};
const Enum::YLeaf IsisHelloPadding::sometimes {1, "sometimes"};

const Enum::YLeaf IsisMibDatabaseOverFlowBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibDatabaseOverFlowBoolean::true_ {1, "true"};

const Enum::YLeaf IsisApplicationAttribute::srlg {0, "srlg"};

const Enum::YLeaf IsisAuthenticationFailureMode::drop {0, "drop"};
const Enum::YLeaf IsisAuthenticationFailureMode::send_only {1, "send-only"};

const Enum::YLeaf IsisMibProtocolsSupportedMismatchBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibProtocolsSupportedMismatchBoolean::true_ {16, "true"};

const Enum::YLeaf IsisRedistProto::connected {0, "connected"};
const Enum::YLeaf IsisRedistProto::static_ {1, "static"};
const Enum::YLeaf IsisRedistProto::ospf {2, "ospf"};
const Enum::YLeaf IsisRedistProto::bgp {3, "bgp"};
const Enum::YLeaf IsisRedistProto::isis {4, "isis"};
const Enum::YLeaf IsisRedistProto::ospfv3 {5, "ospfv3"};
const Enum::YLeaf IsisRedistProto::rip {6, "rip"};
const Enum::YLeaf IsisRedistProto::eigrp {7, "eigrp"};
const Enum::YLeaf IsisRedistProto::subscriber {8, "subscriber"};
const Enum::YLeaf IsisRedistProto::application {9, "application"};
const Enum::YLeaf IsisRedistProto::mobile {10, "mobile"};

const Enum::YLeaf Isissid1::index_ {1, "index"};
const Enum::YLeaf Isissid1::absolute {2, "absolute"};

const Enum::YLeaf IsisphpFlag::enable {0, "enable"};
const Enum::YLeaf IsisphpFlag::disable {1, "disable"};

const Enum::YLeaf IsisMibIdLengthMismatchBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibIdLengthMismatchBoolean::true_ {5, "true"};

const Enum::YLeaf IsisMibAllBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAllBoolean::true_ {19, "true"};

const Enum::YLeaf IsisMibOriginatedLspBufferSizeMismatchBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibOriginatedLspBufferSizeMismatchBoolean::true_ {15, "true"};

const Enum::YLeaf Isisfrr::per_link {1, "per-link"};
const Enum::YLeaf Isisfrr::per_prefix {2, "per-prefix"};

const Enum::YLeaf IsisAttachedBit::area {0, "area"};
const Enum::YLeaf IsisAttachedBit::on {1, "on"};
const Enum::YLeaf IsisAttachedBit::off {2, "off"};

const Enum::YLeaf NflagClear::disable {0, "disable"};
const Enum::YLeaf NflagClear::enable {1, "enable"};

const Enum::YLeaf IsisLabelPreference::ldp {0, "ldp"};
const Enum::YLeaf IsisLabelPreference::segment_routing {1, "segment-routing"};

const Enum::YLeaf IsisMibAdjacencyChangeBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibAdjacencyChangeBoolean::true_ {17, "true"};

const Enum::YLeaf IsisMibLspErrorDetectedBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibLspErrorDetectedBoolean::true_ {18, "true"};

const Enum::YLeaf IsisMibOwnLspPurgeBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibOwnLspPurgeBoolean::true_ {7, "true"};

const Enum::YLeaf IsisMibVersionSkewBoolean::false_ {0, "false"};
const Enum::YLeaf IsisMibVersionSkewBoolean::true_ {11, "true"};

const Enum::YLeaf Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::Metric_::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::Metric_::maximum {16777215, "maximum"};


}
}

